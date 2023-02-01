/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetEventPredictionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventPredictionResult::GetEventPredictionResult()
{
}

GetEventPredictionResult::GetEventPredictionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEventPredictionResult& GetEventPredictionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelScores"))
  {
    Aws::Utils::Array<JsonView> modelScoresJsonList = jsonValue.GetArray("modelScores");
    for(unsigned modelScoresIndex = 0; modelScoresIndex < modelScoresJsonList.GetLength(); ++modelScoresIndex)
    {
      m_modelScores.push_back(modelScoresJsonList[modelScoresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ruleResults"))
  {
    Aws::Utils::Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("ruleResults");
    for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
    {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("externalModelOutputs"))
  {
    Aws::Utils::Array<JsonView> externalModelOutputsJsonList = jsonValue.GetArray("externalModelOutputs");
    for(unsigned externalModelOutputsIndex = 0; externalModelOutputsIndex < externalModelOutputsJsonList.GetLength(); ++externalModelOutputsIndex)
    {
      m_externalModelOutputs.push_back(externalModelOutputsJsonList[externalModelOutputsIndex].AsObject());
    }
  }



  return *this;
}
