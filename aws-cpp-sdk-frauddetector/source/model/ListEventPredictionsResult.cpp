/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ListEventPredictionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventPredictionsResult::ListEventPredictionsResult()
{
}

ListEventPredictionsResult::ListEventPredictionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventPredictionsResult& ListEventPredictionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventPredictionSummaries"))
  {
    Aws::Utils::Array<JsonView> eventPredictionSummariesJsonList = jsonValue.GetArray("eventPredictionSummaries");
    for(unsigned eventPredictionSummariesIndex = 0; eventPredictionSummariesIndex < eventPredictionSummariesJsonList.GetLength(); ++eventPredictionSummariesIndex)
    {
      m_eventPredictionSummaries.push_back(eventPredictionSummariesJsonList[eventPredictionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
