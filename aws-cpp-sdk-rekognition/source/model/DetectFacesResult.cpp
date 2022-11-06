/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectFacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectFacesResult::DetectFacesResult() : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
}

DetectFacesResult::DetectFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_orientationCorrection(OrientationCorrection::NOT_SET)
{
  *this = result;
}

DetectFacesResult& DetectFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FaceDetails"))
  {
    Aws::Utils::Array<JsonView> faceDetailsJsonList = jsonValue.GetArray("FaceDetails");
    for(unsigned faceDetailsIndex = 0; faceDetailsIndex < faceDetailsJsonList.GetLength(); ++faceDetailsIndex)
    {
      m_faceDetails.push_back(faceDetailsJsonList[faceDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OrientationCorrection"))
  {
    m_orientationCorrection = OrientationCorrectionMapper::GetOrientationCorrectionForName(jsonValue.GetString("OrientationCorrection"));

  }



  return *this;
}
