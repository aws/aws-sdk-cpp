/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListFacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFacesResult::ListFacesResult()
{
}

ListFacesResult::ListFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFacesResult& ListFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Faces"))
  {
    Aws::Utils::Array<JsonView> facesJsonList = jsonValue.GetArray("Faces");
    for(unsigned facesIndex = 0; facesIndex < facesJsonList.GetLength(); ++facesIndex)
    {
      m_faces.push_back(facesJsonList[facesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FaceModelVersion"))
  {
    m_faceModelVersion = jsonValue.GetString("FaceModelVersion");

  }



  return *this;
}
