/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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



  return *this;
}
