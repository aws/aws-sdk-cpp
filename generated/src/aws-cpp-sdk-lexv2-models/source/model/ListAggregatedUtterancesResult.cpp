/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListAggregatedUtterancesResult.h>
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

ListAggregatedUtterancesResult::ListAggregatedUtterancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAggregatedUtterancesResult& ListAggregatedUtterancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");
    m_botAliasIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationDuration"))
  {
    m_aggregationDuration = jsonValue.GetObject("aggregationDuration");
    m_aggregationDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationWindowStartTime"))
  {
    m_aggregationWindowStartTime = jsonValue.GetDouble("aggregationWindowStartTime");
    m_aggregationWindowStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationWindowEndTime"))
  {
    m_aggregationWindowEndTime = jsonValue.GetDouble("aggregationWindowEndTime");
    m_aggregationWindowEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationLastRefreshedDateTime"))
  {
    m_aggregationLastRefreshedDateTime = jsonValue.GetDouble("aggregationLastRefreshedDateTime");
    m_aggregationLastRefreshedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedUtterancesSummaries"))
  {
    Aws::Utils::Array<JsonView> aggregatedUtterancesSummariesJsonList = jsonValue.GetArray("aggregatedUtterancesSummaries");
    for(unsigned aggregatedUtterancesSummariesIndex = 0; aggregatedUtterancesSummariesIndex < aggregatedUtterancesSummariesJsonList.GetLength(); ++aggregatedUtterancesSummariesIndex)
    {
      m_aggregatedUtterancesSummaries.push_back(aggregatedUtterancesSummariesJsonList[aggregatedUtterancesSummariesIndex].AsObject());
    }
    m_aggregatedUtterancesSummariesHasBeenSet = true;
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
