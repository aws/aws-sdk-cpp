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

#include <aws/clouddirectory/model/BatchListAttachedIndicesResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchListAttachedIndicesResponse::BatchListAttachedIndicesResponse() : 
    m_indexAttachmentsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListAttachedIndicesResponse::BatchListAttachedIndicesResponse(const JsonValue& jsonValue) : 
    m_indexAttachmentsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListAttachedIndicesResponse& BatchListAttachedIndicesResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IndexAttachments"))
  {
    Array<JsonValue> indexAttachmentsJsonList = jsonValue.GetArray("IndexAttachments");
    for(unsigned indexAttachmentsIndex = 0; indexAttachmentsIndex < indexAttachmentsJsonList.GetLength(); ++indexAttachmentsIndex)
    {
      m_indexAttachments.push_back(indexAttachmentsJsonList[indexAttachmentsIndex].AsObject());
    }
    m_indexAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListAttachedIndicesResponse::Jsonize() const
{
  JsonValue payload;

  if(m_indexAttachmentsHasBeenSet)
  {
   Array<JsonValue> indexAttachmentsJsonList(m_indexAttachments.size());
   for(unsigned indexAttachmentsIndex = 0; indexAttachmentsIndex < indexAttachmentsJsonList.GetLength(); ++indexAttachmentsIndex)
   {
     indexAttachmentsJsonList[indexAttachmentsIndex].AsObject(m_indexAttachments[indexAttachmentsIndex].Jsonize());
   }
   payload.WithArray("IndexAttachments", std::move(indexAttachmentsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
