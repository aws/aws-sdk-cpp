﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ListAnomalyGroupSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnomalyGroupSummariesResult::ListAnomalyGroupSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnomalyGroupSummariesResult& ListAnomalyGroupSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyGroupSummaryList"))
  {
    Aws::Utils::Array<JsonView> anomalyGroupSummaryListJsonList = jsonValue.GetArray("AnomalyGroupSummaryList");
    for(unsigned anomalyGroupSummaryListIndex = 0; anomalyGroupSummaryListIndex < anomalyGroupSummaryListJsonList.GetLength(); ++anomalyGroupSummaryListIndex)
    {
      m_anomalyGroupSummaryList.push_back(anomalyGroupSummaryListJsonList[anomalyGroupSummaryListIndex].AsObject());
    }
    m_anomalyGroupSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnomalyGroupStatistics"))
  {
    m_anomalyGroupStatistics = jsonValue.GetObject("AnomalyGroupStatistics");
    m_anomalyGroupStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
