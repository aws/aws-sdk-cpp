/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/GetFeedbackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFeedbackResult::GetFeedbackResult()
{
}

GetFeedbackResult::GetFeedbackResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFeedbackResult& GetFeedbackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyGroupTimeSeriesFeedback"))
  {
    Aws::Utils::Array<JsonView> anomalyGroupTimeSeriesFeedbackJsonList = jsonValue.GetArray("AnomalyGroupTimeSeriesFeedback");
    for(unsigned anomalyGroupTimeSeriesFeedbackIndex = 0; anomalyGroupTimeSeriesFeedbackIndex < anomalyGroupTimeSeriesFeedbackJsonList.GetLength(); ++anomalyGroupTimeSeriesFeedbackIndex)
    {
      m_anomalyGroupTimeSeriesFeedback.push_back(anomalyGroupTimeSeriesFeedbackJsonList[anomalyGroupTimeSeriesFeedbackIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
