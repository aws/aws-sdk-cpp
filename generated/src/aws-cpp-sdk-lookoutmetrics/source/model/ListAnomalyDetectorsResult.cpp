/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ListAnomalyDetectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnomalyDetectorsResult::ListAnomalyDetectorsResult()
{
}

ListAnomalyDetectorsResult::ListAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnomalyDetectorsResult& ListAnomalyDetectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyDetectorSummaryList"))
  {
    Aws::Utils::Array<JsonView> anomalyDetectorSummaryListJsonList = jsonValue.GetArray("AnomalyDetectorSummaryList");
    for(unsigned anomalyDetectorSummaryListIndex = 0; anomalyDetectorSummaryListIndex < anomalyDetectorSummaryListJsonList.GetLength(); ++anomalyDetectorSummaryListIndex)
    {
      m_anomalyDetectorSummaryList.push_back(anomalyDetectorSummaryListJsonList[anomalyDetectorSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
