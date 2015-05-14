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

#include <PlayerData.h>

#include <SchemaSetup.h>
#include <SimpleAttributeBinding.h>

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/DeleteItemRequest.h>
#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/PutItemResult.h>

#include <iostream>
#include <sstream>

using namespace Aws::Utils;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;
using namespace Aws::Http;

namespace Aws
{
namespace Example1
{

static const char *DisplayNameColumnName = "DisplayName";
static const char *TokensColumnName = "Tokens";
static const char *HighScoreColumnName = "HighScore";
static const char *SecondsPlayedColumnName = "SecondsPlayed";
static const char *LastTimePlayedColumnName = "LastTimePlayed";

// All you need to do in order to add new persisted data members to PlayerData is add a binding to the map here
template<>
DynamoDBDataRowBase::BindingMapType DynamoDBDataRow<PlayerData>::s_bindings = {
    { StringUtils::ToLower(DisplayNameColumnName),     MakeSimpleBinding(DisplayNameColumnName, ScalarAttributeType::S, &PlayerData::m_displayName) },
    { StringUtils::ToLower(TokensColumnName), MakeSimpleBinding(TokensColumnName, ScalarAttributeType::N, &PlayerData::m_tokens) },
    { StringUtils::ToLower(HighScoreColumnName), MakeSimpleBinding(HighScoreColumnName, ScalarAttributeType::N, &PlayerData::m_highScore) },
    { StringUtils::ToLower(SecondsPlayedColumnName), MakeSimpleBinding(SecondsPlayedColumnName, ScalarAttributeType::N, &PlayerData::m_secondsPlayed) },
    { StringUtils::ToLower(LastTimePlayedColumnName), MakeSimpleBinding(LastTimePlayedColumnName, ScalarAttributeType::N, &PlayerData::m_lastTimePlayed) }
};

PlayerData::PlayerData(const Aws::String& playerName, const Aws::String& identityKey) :
    Base(ExampleTableName, IdentityColumnName, identityKey),
    m_playerName(playerName),
    m_displayName(""),
    m_tokens(0),
    m_highScore(0),
    m_secondsPlayed(0),
    m_lastTimePlayed()
{
}

std::ostream& operator<<(std::ostream& os, const PlayerData& playerData)
{
    os << "Player: " << playerData.m_playerName << std::endl;

    const DynamoDBDataRowBase& base = playerData;
    return os << base;
}

} // namespace Example1
} // namespace Aws

