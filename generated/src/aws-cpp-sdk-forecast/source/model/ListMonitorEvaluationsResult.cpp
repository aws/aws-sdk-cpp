/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListMonitorEvaluationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMonitorEvaluationsResult::ListMonitorEvaluationsResult()
{
}

ListMonitorEvaluationsResult::ListMonitorEvaluationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMonitorEvaluationsResult& ListMonitorEvaluationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("PredictorMonitorEvaluations"))
  {
    Aws::Utils::Array<JsonView> predictorMonitorEvaluationsJsonList = jsonValue.GetArray("PredictorMonitorEvaluations");
    for(unsigned predictorMonitorEvaluationsIndex = 0; predictorMonitorEvaluationsIndex < predictorMonitorEvaluationsJsonList.GetLength(); ++predictorMonitorEvaluationsIndex)
    {
      m_predictorMonitorEvaluations.push_back(predictorMonitorEvaluationsJsonList[predictorMonitorEvaluationsIndex].AsObject());
    }
  }



  return *this;
}
