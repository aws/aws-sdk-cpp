﻿/*
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

#include <aws/rekognition/model/SearchFacesByImageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchFacesByImageResult::SearchFacesByImageResult() : 
    m_searchedFaceConfidence(0.0)
{
}

SearchFacesByImageResult::SearchFacesByImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_searchedFaceConfidence(0.0)
{
  *this = result;
}

SearchFacesByImageResult& SearchFacesByImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SearchedFaceBoundingBox"))
  {
    m_searchedFaceBoundingBox = jsonValue.GetObject("SearchedFaceBoundingBox");

  }

  if(jsonValue.ValueExists("SearchedFaceConfidence"))
  {
    m_searchedFaceConfidence = jsonValue.GetDouble("SearchedFaceConfidence");

  }

  if(jsonValue.ValueExists("FaceMatches"))
  {
    Array<JsonView> faceMatchesJsonList = jsonValue.GetArray("FaceMatches");
    for(unsigned faceMatchesIndex = 0; faceMatchesIndex < faceMatchesJsonList.GetLength(); ++faceMatchesIndex)
    {
      m_faceMatches.push_back(faceMatchesJsonList[faceMatchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");

  }



  return *this;
}
