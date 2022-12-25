/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchListIndexResponse.h>
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

BatchListIndexResponse::BatchListIndexResponse() : 
    m_indexAttachmentsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

BatchListIndexResponse::BatchListIndexResponse(JsonView jsonValue) : 
    m_indexAttachmentsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListIndexResponse& BatchListIndexResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexAttachments"))
  {
    Aws::Utils::Array<JsonView> indexAttachmentsJsonList = jsonValue.GetArray("IndexAttachments");
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

JsonValue BatchListIndexResponse::Jsonize() const
{
  JsonValue payload;

  if(m_indexAttachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> indexAttachmentsJsonList(m_indexAttachments.size());
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
