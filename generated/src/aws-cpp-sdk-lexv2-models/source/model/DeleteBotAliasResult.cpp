/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteBotAliasResult.h>
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

DeleteBotAliasResult::DeleteBotAliasResult() : 
    m_botAliasStatus(BotAliasStatus::NOT_SET)
{
}

DeleteBotAliasResult::DeleteBotAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botAliasStatus(BotAliasStatus::NOT_SET)
{
  *this = result;
}

DeleteBotAliasResult& DeleteBotAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");

  }

  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botAliasStatus"))
  {
    m_botAliasStatus = BotAliasStatusMapper::GetBotAliasStatusForName(jsonValue.GetString("botAliasStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
