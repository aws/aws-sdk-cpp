﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteBotVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteBotVersionResult::DeleteBotVersionResult() : 
    m_botStatus(BotStatus::NOT_SET)
{
}

DeleteBotVersionResult::DeleteBotVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botStatus(BotStatus::NOT_SET)
{
  *this = result;
}

DeleteBotVersionResult& DeleteBotVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("botStatus"))
  {
    m_botStatus = BotStatusMapper::GetBotStatusForName(jsonValue.GetString("botStatus"));

  }



  return *this;
}
