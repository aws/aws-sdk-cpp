/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/GetAccuracyMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccuracyMetricsResult::GetAccuracyMetricsResult()
{
}

GetAccuracyMetricsResult::GetAccuracyMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAccuracyMetricsResult& GetAccuracyMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredictorEvaluationResults"))
  {
    Array<JsonView> predictorEvaluationResultsJsonList = jsonValue.GetArray("PredictorEvaluationResults");
    for(unsigned predictorEvaluationResultsIndex = 0; predictorEvaluationResultsIndex < predictorEvaluationResultsJsonList.GetLength(); ++predictorEvaluationResultsIndex)
    {
      m_predictorEvaluationResults.push_back(predictorEvaluationResultsJsonList[predictorEvaluationResultsIndex].AsObject());
    }
  }



  return *this;
}
