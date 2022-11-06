/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/CreateIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIndexRequest::CreateIndexRequest() : 
    m_directoryArnHasBeenSet(false),
    m_orderedIndexedAttributeListHasBeenSet(false),
    m_isUnique(false),
    m_isUniqueHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
}

Aws::String CreateIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_orderedIndexedAttributeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderedIndexedAttributeListJsonList(m_orderedIndexedAttributeList.size());
   for(unsigned orderedIndexedAttributeListIndex = 0; orderedIndexedAttributeListIndex < orderedIndexedAttributeListJsonList.GetLength(); ++orderedIndexedAttributeListIndex)
   {
     orderedIndexedAttributeListJsonList[orderedIndexedAttributeListIndex].AsObject(m_orderedIndexedAttributeList[orderedIndexedAttributeListIndex].Jsonize());
   }
   payload.WithArray("OrderedIndexedAttributeList", std::move(orderedIndexedAttributeListJsonList));

  }

  if(m_isUniqueHasBeenSet)
  {
   payload.WithBool("IsUnique", m_isUnique);

  }

  if(m_parentReferenceHasBeenSet)
  {
   payload.WithObject("ParentReference", m_parentReference.Jsonize());

  }

  if(m_linkNameHasBeenSet)
  {
   payload.WithString("LinkName", m_linkName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIndexRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




