/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ListAnomalyGroupRelatedMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnomalyGroupRelatedMetricsResult::ListAnomalyGroupRelatedMetricsResult()
{
}

ListAnomalyGroupRelatedMetricsResult::ListAnomalyGroupRelatedMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnomalyGroupRelatedMetricsResult& ListAnomalyGroupRelatedMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InterMetricImpactList"))
  {
    Aws::Utils::Array<JsonView> interMetricImpactListJsonList = jsonValue.GetArray("InterMetricImpactList");
    for(unsigned interMetricImpactListIndex = 0; interMetricImpactListIndex < interMetricImpactListJsonList.GetLength(); ++interMetricImpactListIndex)
    {
      m_interMetricImpactList.push_back(interMetricImpactListJsonList[interMetricImpactListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
