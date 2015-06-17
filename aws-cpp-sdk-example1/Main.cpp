/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */


#include <Command.h>
#include <PlayerData.h>
#include <SchemaSetup.h>

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/AWSLogging.h>
#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/dynamodb/DynamoDBClient.h>

#include <iostream>
#include <memory>
#include <regex>

using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;
using namespace Aws::Example1;
using namespace Aws::Http;
using namespace Aws::Utils::Logging;

static const char* IdentityPoolPrefix = "Example1_";
static const char* Example1Tag = "Example1";

void HandleStatusCommand(const std::unique_ptr<PlayerData>& playerData, const std::unique_ptr<DynamoDBClient>& client)
{
    if(playerData == nullptr)
    {
        std::cout << "Not currently logged in\n";
        return;
    }

    playerData->ReadFromDb(client);
    std::cout << *playerData;
}

void HandleUpdateCommand(const std::unique_ptr<PlayerData>& playerData, const std::unique_ptr<DynamoDBClient>& client, const std::string& commandArguments)
{
    if(playerData == nullptr)
    {
        std::cout << "Not currently logged in\n";
        return;
    }

    std::string pattern("\\s*(\\w+)\\s+(\\w+).*");
    std::regex argumentRegex(pattern);

    std::cmatch argumentMatchResults;
    std::regex_search(commandArguments.c_str(), argumentMatchResults, argumentRegex);

    if(argumentMatchResults.size() != 3)
    {
        AWS_LOGSTREAM_INFO(Example1Tag, "Invalid key-value pair for Update command: \"" << commandArguments << "\"");
        return;
    }

    std::string keyString = argumentMatchResults[1];
    std::string valueString = argumentMatchResults[2];

    if(playerData->SetAttributeValue(keyString.c_str(), valueString.c_str()))
    {
        playerData->WriteToDb(client);
    }
}

bool FindExamplePoolId(const std::unique_ptr<CognitoIdentityClient>& cognitoClient, Aws::String& identityPoolId)
{
    static const uint32_t MAX_POOLS_PER_REQUEST = 1;

    ListIdentityPoolsRequest listPoolsRequest;
    listPoolsRequest.WithMaxResults(MAX_POOLS_PER_REQUEST); 

    bool done = false;
    while(!done)
    {
        // List the pools
        ListIdentityPoolsOutcome outcome = cognitoClient->ListIdentityPools(listPoolsRequest);
        if (!outcome.IsSuccess())
        {
            AWS_LOGSTREAM_ERROR(Example1Tag, "Failed to list identity pools: " << outcome.GetError().GetMessage() << "(" << outcome.GetError().GetExceptionName() << ")" );
            return false;
        }
    
        // Look for the one we created in the instructions in README.txt
        auto poolDescriptions = outcome.GetResult().GetIdentityPools();
        auto poolIter = std::find_if(poolDescriptions.cbegin(), poolDescriptions.cend(), [](const IdentityPoolShortDescription& desc){ return desc.GetIdentityPoolName().find(IdentityPoolPrefix) == 0; });
        if(poolIter != poolDescriptions.cend())
        {
            identityPoolId = poolIter->GetIdentityPoolId();
            return true;
        }

        const Aws::String &nextToken = outcome.GetResult().GetNextToken();
        if(nextToken.size() > 0)
        {
            // If there are more pools in our account, keep looking
            listPoolsRequest.SetNextToken(nextToken);
        }
        else
        {
            // bummer, couldn't find a match, give up
            done = true;
        }
    }

    return false;
}

bool HandleForgeCommand(const std::unique_ptr<DynamoDBClient>& client, const std::string& commandArguments)
{
    std::string pattern("\\s*(\\w+).*");
    std::regex argumentRegex(pattern);

    std::cmatch argumentMatchResults;
    std::regex_search(commandArguments.c_str(), argumentMatchResults, argumentRegex);

    if(argumentMatchResults.size() != 2)
    {
        AWS_LOGSTREAM_INFO(Example1Tag, "Invalid identity for Forge command: \"" << commandArguments << "\"");
        return false;
    }

    std::string identity = argumentMatchResults[1];

    std::unique_ptr<PlayerData> playerData(new PlayerData(identity.c_str(), identity.c_str()));
    if(playerData->ReadFromDb(client))
    {
        std::cout << "Successfully read the data of " << identity << ".  Time to update your cognito role's permission policy!\n";
    }
    else
    {
        std::cout << "Failed to read the data of " << identity << ".  That's good.\n";
    }

    return true;
}

bool HandleLoginCommand(std::unique_ptr<PlayerData>& playerData, std::unique_ptr<DynamoDBClient>& client, const std::string& commandArguments)
{
    std::string pattern("\\s*(\\w+).*");
    std::regex argumentRegex(pattern);

    std::cmatch argumentMatchResults;
    std::regex_search(commandArguments.c_str(), argumentMatchResults, argumentRegex);

    if(argumentMatchResults.size() != 2)
    {
        AWS_LOGSTREAM_INFO(Example1Tag, "Invalid player name for Switch command: \"" << commandArguments << "\"");
        return false;
    }

    if(argumentMatchResults[1] != "unauthenticated")
    {
        std::cout << "Only login as 'unathenticated' is currently supported\n";
        return false;
    }

    ClientConfiguration config;
    config.scheme = Scheme::HTTPS;
    config.connectTimeoutMs = 30000;
    config.requestTimeoutMs = 30000;
    config.region = Aws::Region::US_EAST_1;

    auto credentialsProvider = std::make_shared<ProfileConfigFileAWSCredentialsProvider>(DeveloperCredentialsProfileName);

    std::unique_ptr<CognitoIdentityClient> cognitoClient(new CognitoIdentityClient(credentialsProvider, config));

    Aws::String examplePoolId;
    if(!FindExamplePoolId(cognitoClient, examplePoolId))
    {
        std::cout << "Unable to find necessary cognito identity pool" << std::endl;
        return false;
    }

    // Grab an id from the pool
    GetIdRequest getIdRequest;
    getIdRequest.SetAccountId(ProfileConfigFileAWSCredentialsProvider::GetAccountIdForProfile(DeveloperCredentialsProfileName));  // TODO: use IAM to get this once there's an IAM client
    getIdRequest.SetIdentityPoolId(examplePoolId);

    GetIdOutcome getIdOutcome = cognitoClient->GetId(getIdRequest);
    if(!getIdOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(Example1Tag, "Failed to allocate identity: " << getIdOutcome.GetError().GetMessage() << "(" << getIdOutcome.GetError().GetExceptionName() << ")" );
        std::cout << "Unable to allocate an identity" << std::endl;
        return false;
    }

    Aws::String identityId = getIdOutcome.GetResult().GetIdentityId();

    // make some credentials from the id
    GetCredentialsForIdentityRequest getCredsRequest;
    getCredsRequest.SetIdentityId(identityId);

    GetCredentialsForIdentityOutcome getCredsOutcome = cognitoClient->GetCredentialsForIdentity(getCredsRequest);
    if(!getCredsOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(Example1Tag, "Failed to obtain identity credentials: " << getCredsOutcome.GetError().GetMessage() << "(" << getCredsOutcome.GetError().GetExceptionName() << ")" );
        std::cout << "Unable to get cognito-based credentials" << std::endl;
        return false;
    }

    const Credentials& cognitoCredentials = getCredsOutcome.GetResult().GetCredentials();
    Aws::String rawIdentity = identityId;
    auto cognitoIdCredentialsProvider = std::make_shared<SimpleAWSCredentialsProvider>(cognitoCredentials.GetAccessKeyId(), 
                                                                                                                                                                          cognitoCredentials.GetSecretKey(), 
                                                                                                                                                                          cognitoCredentials.GetSessionToken());
    client.reset(new DynamoDBClient(cognitoIdCredentialsProvider, config));

    playerData.reset(new PlayerData(argumentMatchResults[1].str().c_str(), rawIdentity));
    return playerData->ReadFromDb(client);
}

void PrintCommandList()
{
    std::cout << "Valid commands:" << std::endl;
    std::cout << "  Status - prints the persisted state for the current player" << std::endl;
    std::cout << "  Update <Key> <Value> - updates the persisted state for the current player, where <Key> is one of {Tokens, HighScore, SecondsPlayed, LastPlayTime} and <Value> ";
    std::cout << "    is either an unsigned 32-bit integer (Tokens, HighScore, SecondsPlayed) or a timestamp (LastPlayTime)" << std::endl;
    std::cout << "  Login <player> - switches to a different player; only unauthenticated supported atm" << std::endl;
    std::cout << "  Help - prints this command list" << std::endl << std::endl;
    std::cout << "  Forge <identity> - attempts to read an identity's data with the current credentials, used to test security" << std::endl << std::endl;
}

void WaitForUserInput()
{
    std::cout << "Hit return to exit" << std::endl;

    Aws::String dummy;
    std::cin >> dummy;
}

int32_t RunExample()
{
    if(!InitializePlayerDataSchema())
    {
        std::cout << "Unable to initialize PlayerData schema, quitting!" << std::endl;
        WaitForUserInput();
        return 1;
    }

    std::unique_ptr<DynamoDBClient> client(nullptr);
    std::unique_ptr<PlayerData> playerData(nullptr);

    bool done = false;
    while(!done)
    {
        std::string commandLineString;
        std::getline(std::cin, commandLineString);

        std::string pattern("\\s*(\\w+)(.*)");
        std::regex commandRegex(pattern);

        std::string commandString;
        std::string commandArguments;

        std::cmatch commandMatchResults;
        std::regex_search(commandLineString.c_str(), commandMatchResults, commandRegex);

        commandString = commandMatchResults[1].str().c_str();

        Command currentCommand = CommandFromString(commandString);
        switch(currentCommand)
        {
            case Command::Status:
                HandleStatusCommand(playerData, client);
                break;

            case Command::Update:
                commandArguments = commandMatchResults[2].str().c_str();
                HandleUpdateCommand(playerData, client, commandArguments);
                break;

            case Command::Login:
                commandArguments = commandMatchResults[2].str().c_str();
                HandleLoginCommand(playerData, client, commandArguments);
                break;

            case Command::Help:
                PrintCommandList();
                break;

            case Command::Forge:
                commandArguments = commandMatchResults[2].str().c_str();
                HandleForgeCommand(client, commandArguments);
                break;

            case Command::Quit:
                done = true;
                break;

            default:
                std::cout << "Unknown command: " << commandString << std::endl << std::endl;
                PrintCommandList();
                break;
        }
    }

    return 0;
}

int main(void)
{
    InitializeAWSLogging(std::make_shared<DefaultLogSystem>(LogLevel::Trace, "aws_sdk_example1_"));
    
    int32_t exitCode = RunExample();

    ShutdownAWSLogging();

    return exitCode;
}




