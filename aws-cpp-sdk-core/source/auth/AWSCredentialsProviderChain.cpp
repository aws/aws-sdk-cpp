/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Auth;

static const char* AWS_ECS_CREDENTIALS_ENVIRONMENT_VARIABLE = "AWS_CONTAINER_CREDENTIALS_RELATIVE_URI";

AWSCredentials AWSCredentialsProviderChain::GetAWSCredentials()
{
    for (auto credentialsProvider : m_providerChain)
    {
        AWSCredentials credentials = credentialsProvider->GetAWSCredentials();
        if (!credentials.GetAWSAccessKeyId().empty() && !credentials.GetAWSSecretKey().empty())
        {
            return credentials;
        }
    }

    return AWSCredentials("", "");
}

static const char* DefaultCredentialsProviderChainTag = "DefaultAWSCredentialsProviderChain";
static const char AWS_EC2_INSTANCE_METADATA_DISABLE_VAR[] = "AWS_EC2_METADATA_DISABLED";

DefaultAWSCredentialsProviderChain::DefaultAWSCredentialsProviderChain() : AWSCredentialsProviderChain()
{
    AddProvider(Aws::MakeShared<EnvironmentAWSCredentialsProvider>(DefaultCredentialsProviderChainTag));
    AddProvider(Aws::MakeShared<ProfileConfigFileAWSCredentialsProvider>(DefaultCredentialsProviderChainTag));
 
    //ECS TaskRole Credentials only available when ENVIRONMENT VARIABLE is set
    auto relativeURIFromVar = Aws::Environment::GetEnv(AWS_ECS_CREDENTIALS_ENVIRONMENT_VARIABLE);
    if (!relativeURIFromVar.empty()) 
    {
        AddProvider(Aws::MakeShared<TaskRoleCredentialsProvider>(DefaultCredentialsProviderChainTag, relativeURIFromVar.c_str()));
    } 
    else if (Aws::Utils::StringUtils::ToLower(Aws::Environment::GetEnv(AWS_EC2_INSTANCE_METADATA_DISABLE_VAR).c_str()) != "true")
    {
        AddProvider(Aws::MakeShared<InstanceProfileCredentialsProvider>(DefaultCredentialsProviderChainTag));
    }
}
