/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteBotReplicaResult.h>
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

DeleteBotReplicaResult::DeleteBotReplicaResult() : 
    m_botReplicaStatus(BotReplicaStatus::NOT_SET)
{
}

DeleteBotReplicaResult::DeleteBotReplicaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botReplicaStatus(BotReplicaStatus::NOT_SET)
{
  *this = result;
}

DeleteBotReplicaResult& DeleteBotReplicaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("botReplicaStatus"))
  {
    m_botReplicaStatus = BotReplicaStatusMapper::GetBotReplicaStatusForName(jsonValue.GetString("botReplicaStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
