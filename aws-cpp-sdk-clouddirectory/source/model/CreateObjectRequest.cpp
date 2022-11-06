/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/CreateObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateObjectRequest::CreateObjectRequest() : 
    m_directoryArnHasBeenSet(false),
    m_schemaFacetsHasBeenSet(false),
    m_objectAttributeListHasBeenSet(false),
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
}

Aws::String CreateObjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaFacetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaFacetsJsonList(m_schemaFacets.size());
   for(unsigned schemaFacetsIndex = 0; schemaFacetsIndex < schemaFacetsJsonList.GetLength(); ++schemaFacetsIndex)
   {
     schemaFacetsJsonList[schemaFacetsIndex].AsObject(m_schemaFacets[schemaFacetsIndex].Jsonize());
   }
   payload.WithArray("SchemaFacets", std::move(schemaFacetsJsonList));

  }

  if(m_objectAttributeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectAttributeListJsonList(m_objectAttributeList.size());
   for(unsigned objectAttributeListIndex = 0; objectAttributeListIndex < objectAttributeListJsonList.GetLength(); ++objectAttributeListIndex)
   {
     objectAttributeListJsonList[objectAttributeListIndex].AsObject(m_objectAttributeList[objectAttributeListIndex].Jsonize());
   }
   payload.WithArray("ObjectAttributeList", std::move(objectAttributeListJsonList));

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

Aws::Http::HeaderValueCollection CreateObjectRequest::GetRequestSpecificHeaders() const
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




