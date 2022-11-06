/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListCollectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCollectionsResult::ListCollectionsResult()
{
}

ListCollectionsResult::ListCollectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollectionsResult& ListCollectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CollectionIds"))
  {
    Aws::Utils::Array<JsonView> collectionIdsJsonList = jsonValue.GetArray("CollectionIds");
    for(unsigned collectionIdsIndex = 0; collectionIdsIndex < collectionIdsJsonList.GetLength(); ++collectionIdsIndex)
    {
      m_collectionIds.push_back(collectionIdsJsonList[collectionIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FaceModelVersions"))
  {
    Aws::Utils::Array<JsonView> faceModelVersionsJsonList = jsonValue.GetArray("FaceModelVersions");
    for(unsigned faceModelVersionsIndex = 0; faceModelVersionsIndex < faceModelVersionsJsonList.GetLength(); ++faceModelVersionsIndex)
    {
      m_faceModelVersions.push_back(faceModelVersionsJsonList[faceModelVersionsIndex].AsString());
    }
  }



  return *this;
}
