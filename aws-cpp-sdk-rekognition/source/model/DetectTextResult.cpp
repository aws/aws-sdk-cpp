/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> textDetectionsJsonList = jsonValue.GetArray("TextDetections");
    for(unsigned textDetectionsIndex = 0; textDetectionsIndex < textDetectionsJsonList.GetLength(); ++textDetectionsIndex)
    {
      m_textDetections.push_back(textDetectionsJsonList[textDetectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TextModelVersion"))
  {
    m_textModelVersion = jsonValue.GetString("TextModelVersion");

  }



  return *this;
}
