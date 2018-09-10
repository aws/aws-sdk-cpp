﻿/*
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

#include <aws/lex-models/model/GetBotChannelAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBotChannelAssociationResult::GetBotChannelAssociationResult() : 
    m_type(ChannelType::NOT_SET),
    m_status(ChannelStatus::NOT_SET)
{
}

GetBotChannelAssociationResult::GetBotChannelAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(ChannelType::NOT_SET),
    m_status(ChannelStatus::NOT_SET)
{
  *this = result;
}

GetBotChannelAssociationResult& GetBotChannelAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("botAlias"))
  {
    m_botAlias = jsonValue.GetString("botAlias");

  }

  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("botConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> botConfigurationJsonMap = jsonValue.GetObject("botConfiguration").GetAllObjects();
    for(auto& botConfigurationItem : botConfigurationJsonMap)
    {
      m_botConfiguration[botConfigurationItem.first] = botConfigurationItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }



  return *this;
}
