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

#include <aws/rekognition/model/DetectLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectLabelsResult::DetectLabelsResult() : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
}

DetectLabelsResult::DetectLabelsResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
  *this = result;
}

DetectLabelsResult& DetectLabelsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Labels"))
  {
    Array<JsonValue> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OrientationCorrection"))
  {
    m_orientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("OrientationCorrection"));

  }



  return *this;
}
