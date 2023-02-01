/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ListMetricSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMetricSetsResult::ListMetricSetsResult()
{
}

ListMetricSetsResult::ListMetricSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMetricSetsResult& ListMetricSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MetricSetSummaryList"))
  {
    Aws::Utils::Array<JsonView> metricSetSummaryListJsonList = jsonValue.GetArray("MetricSetSummaryList");
    for(unsigned metricSetSummaryListIndex = 0; metricSetSummaryListIndex < metricSetSummaryListJsonList.GetLength(); ++metricSetSummaryListIndex)
    {
      m_metricSetSummaryList.push_back(metricSetSummaryListJsonList[metricSetSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
