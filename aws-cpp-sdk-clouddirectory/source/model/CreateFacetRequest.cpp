/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/CreateFacetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFacetRequest::CreateFacetRequest() : 
    m_schemaArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_objectType(ObjectType::NOT_SET),
    m_objectTypeHasBeenSet(false),
    m_facetStyle(FacetStyle::NOT_SET),
    m_facetStyleHasBeenSet(false)
{
}

Aws::String CreateFacetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  if(m_objectTypeHasBeenSet)
  {
   payload.WithString("ObjectType", ObjectTypeMapper::GetNameForObjectType(m_objectType));
  }

  if(m_facetStyleHasBeenSet)
  {
   payload.WithString("FacetStyle", FacetStyleMapper::GetNameForFacetStyle(m_facetStyle));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFacetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_schemaArnHasBeenSet)
  {
    ss << m_schemaArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




