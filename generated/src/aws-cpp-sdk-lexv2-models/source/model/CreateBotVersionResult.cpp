/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateBotVersionResult::CreateBotVersionResult() : 
    m_botStatus(BotStatus::NOT_SET)
{
}

CreateBotVersionResult::CreateBotVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botStatus(BotStatus::NOT_SET)
{
  *this = result;
}

CreateBotVersionResult& CreateBotVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("botVersionLocaleSpecification"))
  {
    Aws::Map<Aws::String, JsonView> botVersionLocaleSpecificationJsonMap = jsonValue.GetObject("botVersionLocaleSpecification").GetAllObjects();
    for(auto& botVersionLocaleSpecificationItem : botVersionLocaleSpecificationJsonMap)
    {
      m_botVersionLocaleSpecification[botVersionLocaleSpecificationItem.first] = botVersionLocaleSpecificationItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("botStatus"))
  {
    m_botStatus = BotStatusMapper::GetBotStatusForName(jsonValue.GetString("botStatus"));

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
