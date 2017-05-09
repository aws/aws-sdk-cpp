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

#include <aws/rekognition/model/ListCollectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCollectionsResult::ListCollectionsResult()
{
}

ListCollectionsResult::ListCollectionsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollectionsResult& ListCollectionsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("CollectionIds"))
  {
    Array<JsonValue> collectionIdsJsonList = jsonValue.GetArray("CollectionIds");
    for(unsigned collectionIdsIndex = 0; collectionIdsIndex < collectionIdsJsonList.GetLength(); ++collectionIdsIndex)
    {
      m_collectionIds.push_back(collectionIdsJsonList[collectionIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
