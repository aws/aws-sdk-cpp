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

#include <aws/rekognition/model/DetectTextResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectTextResult::DetectTextResult()
{
}

DetectTextResult::DetectTextResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectTextResult& DetectTextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TextDetections"))
  {
    Array<JsonView> textDetectionsJsonList = jsonValue.GetArray("TextDetections");
    for(unsigned textDetectionsIndex = 0; textDetectionsIndex < textDetectionsJsonList.GetLength(); ++textDetectionsIndex)
    {
      m_textDetections.push_back(textDetectionsJsonList[textDetectionsIndex].AsObject());
    }
  }



  return *this;
}
