/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListAggregatedUtterancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAggregatedUtterancesResult::ListAggregatedUtterancesResult()
{
}

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

  }

  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }

  if(jsonValue.ValueExists("aggregationDuration"))
  {
    m_aggregationDuration = jsonValue.GetObject("aggregationDuration");

  }

  if(jsonValue.ValueExists("aggregationWindowStartTime"))
  {
    m_aggregationWindowStartTime = jsonValue.GetDouble("aggregationWindowStartTime");

  }

  if(jsonValue.ValueExists("aggregationWindowEndTime"))
  {
    m_aggregationWindowEndTime = jsonValue.GetDouble("aggregationWindowEndTime");

  }

  if(jsonValue.ValueExists("aggregationLastRefreshedDateTime"))
  {
    m_aggregationLastRefreshedDateTime = jsonValue.GetDouble("aggregationLastRefreshedDateTime");

  }

  if(jsonValue.ValueExists("aggregatedUtterancesSummaries"))
  {
    Aws::Utils::Array<JsonView> aggregatedUtterancesSummariesJsonList = jsonValue.GetArray("aggregatedUtterancesSummaries");
    for(unsigned aggregatedUtterancesSummariesIndex = 0; aggregatedUtterancesSummariesIndex < aggregatedUtterancesSummariesJsonList.GetLength(); ++aggregatedUtterancesSummariesIndex)
    {
      m_aggregatedUtterancesSummaries.push_back(aggregatedUtterancesSummariesJsonList[aggregatedUtterancesSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
