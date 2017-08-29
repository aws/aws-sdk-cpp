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

#include <aws/rekognition/model/RecognizeCelebritiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RecognizeCelebritiesResult::RecognizeCelebritiesResult() : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
}

RecognizeCelebritiesResult::RecognizeCelebritiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
  *this = result;
}

RecognizeCelebritiesResult& RecognizeCelebritiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("CelebrityFaces"))
  {
    Array<JsonValue> celebrityFacesJsonList = jsonValue.GetArray("CelebrityFaces");
    for(unsigned celebrityFacesIndex = 0; celebrityFacesIndex < celebrityFacesJsonList.GetLength(); ++celebrityFacesIndex)
    {
      m_celebrityFaces.push_back(celebrityFacesJsonList[celebrityFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnrecognizedFaces"))
  {
    Array<JsonValue> unrecognizedFacesJsonList = jsonValue.GetArray("UnrecognizedFaces");
    for(unsigned unrecognizedFacesIndex = 0; unrecognizedFacesIndex < unrecognizedFacesJsonList.GetLength(); ++unrecognizedFacesIndex)
    {
      m_unrecognizedFaces.push_back(unrecognizedFacesJsonList[unrecognizedFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OrientationCorrection"))
  {
    m_orientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("OrientationCorrection"));

  }



  return *this;
}
