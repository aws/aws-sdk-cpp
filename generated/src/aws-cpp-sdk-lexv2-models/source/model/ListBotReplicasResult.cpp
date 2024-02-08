/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBotReplicasResult.h>
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

ListBotReplicasResult::ListBotReplicasResult()
{
}

ListBotReplicasResult::ListBotReplicasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBotReplicasResult& ListBotReplicasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("sourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("sourceRegion");

  }

  if(jsonValue.ValueExists("botReplicaSummaries"))
  {
    Aws::Utils::Array<JsonView> botReplicaSummariesJsonList = jsonValue.GetArray("botReplicaSummaries");
    for(unsigned botReplicaSummariesIndex = 0; botReplicaSummariesIndex < botReplicaSummariesJsonList.GetLength(); ++botReplicaSummariesIndex)
    {
      m_botReplicaSummaries.push_back(botReplicaSummariesJsonList[botReplicaSummariesIndex].AsObject());
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
