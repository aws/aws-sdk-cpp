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

#include <aws/rekognition/model/CompareFacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CompareFacesResult::CompareFacesResult() : 
    m_sourceImageOrientationCorrection(OrientationCorrection::NOT_SET),
    m_targetImageOrientationCorrection(OrientationCorrection::NOT_SET)
{
}

CompareFacesResult::CompareFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sourceImageOrientationCorrection(OrientationCorrection::NOT_SET),
    m_targetImageOrientationCorrection(OrientationCorrection::NOT_SET)
{
  *this = result;
}

CompareFacesResult& CompareFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("SourceImageFace"))
  {
    m_sourceImageFace = jsonValue.GetObject("SourceImageFace");

  }

  if(jsonValue.ValueExists("FaceMatches"))
  {
    Array<JsonValue> faceMatchesJsonList = jsonValue.GetArray("FaceMatches");
    for(unsigned faceMatchesIndex = 0; faceMatchesIndex < faceMatchesJsonList.GetLength(); ++faceMatchesIndex)
    {
      m_faceMatches.push_back(faceMatchesJsonList[faceMatchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnmatchedFaces"))
  {
    Array<JsonValue> unmatchedFacesJsonList = jsonValue.GetArray("UnmatchedFaces");
    for(unsigned unmatchedFacesIndex = 0; unmatchedFacesIndex < unmatchedFacesJsonList.GetLength(); ++unmatchedFacesIndex)
    {
      m_unmatchedFaces.push_back(unmatchedFacesJsonList[unmatchedFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SourceImageOrientationCorrection"))
  {
    m_sourceImageOrientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("SourceImageOrientationCorrection"));

  }

  if(jsonValue.ValueExists("TargetImageOrientationCorrection"))
  {
    m_targetImageOrientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("TargetImageOrientationCorrection"));

  }



  return *this;
}
