﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBotVersionReplicasResult.h>
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

ListBotVersionReplicasResult::ListBotVersionReplicasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBotVersionReplicasResult& ListBotVersionReplicasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("sourceRegion");
    m_sourceRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicaRegion"))
  {
    m_replicaRegion = jsonValue.GetString("replicaRegion");
    m_replicaRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersionReplicaSummaries"))
  {
    Aws::Utils::Array<JsonView> botVersionReplicaSummariesJsonList = jsonValue.GetArray("botVersionReplicaSummaries");
    for(unsigned botVersionReplicaSummariesIndex = 0; botVersionReplicaSummariesIndex < botVersionReplicaSummariesJsonList.GetLength(); ++botVersionReplicaSummariesIndex)
    {
      m_botVersionReplicaSummaries.push_back(botVersionReplicaSummariesJsonList[botVersionReplicaSummariesIndex].AsObject());
    }
    m_botVersionReplicaSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
