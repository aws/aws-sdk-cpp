/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CelebrityFaces"))
  {
    Aws::Utils::Array<JsonView> celebrityFacesJsonList = jsonValue.GetArray("CelebrityFaces");
    for(unsigned celebrityFacesIndex = 0; celebrityFacesIndex < celebrityFacesJsonList.GetLength(); ++celebrityFacesIndex)
    {
      m_celebrityFaces.push_back(celebrityFacesJsonList[celebrityFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnrecognizedFaces"))
  {
    Aws::Utils::Array<JsonView> unrecognizedFacesJsonList = jsonValue.GetArray("UnrecognizedFaces");
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
