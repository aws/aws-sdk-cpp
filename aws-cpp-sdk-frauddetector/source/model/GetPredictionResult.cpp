/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetPredictionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPredictionResult::GetPredictionResult()
{
}

GetPredictionResult::GetPredictionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPredictionResult& GetPredictionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("outcomes"))
  {
    Array<JsonView> outcomesJsonList = jsonValue.GetArray("outcomes");
    for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
    {
      m_outcomes.push_back(outcomesJsonList[outcomesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("modelScores"))
  {
    Array<JsonView> modelScoresJsonList = jsonValue.GetArray("modelScores");
    for(unsigned modelScoresIndex = 0; modelScoresIndex < modelScoresJsonList.GetLength(); ++modelScoresIndex)
    {
      m_modelScores.push_back(modelScoresJsonList[modelScoresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ruleResults"))
  {
    Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("ruleResults");
    for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
    {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
  }



  return *this;
}
