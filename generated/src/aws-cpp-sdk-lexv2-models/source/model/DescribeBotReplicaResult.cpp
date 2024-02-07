/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotReplicaResult.h>
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

DescribeBotReplicaResult::DescribeBotReplicaResult() : 
    m_botReplicaStatus(BotReplicaStatus::NOT_SET)
{
}

DescribeBotReplicaResult::DescribeBotReplicaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botReplicaStatus(BotReplicaStatus::NOT_SET)
{
  *this = result;
}

DescribeBotReplicaResult& DescribeBotReplicaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("replicaRegion"))
  {
    m_replicaRegion = jsonValue.GetString("replicaRegion");

  }

  if(jsonValue.ValueExists("sourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("sourceRegion");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("botReplicaStatus"))
  {
    m_botReplicaStatus = BotReplicaStatusMapper::GetBotReplicaStatusForName(jsonValue.GetString("botReplicaStatus"));

  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
