/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/UpdateTypedLinkFacetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest() : 
    m_schemaArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_attributeUpdatesHasBeenSet(false),
    m_identityAttributeOrderHasBeenSet(false)
{
}

Aws::String UpdateTypedLinkFacetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributeUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeUpdatesJsonList(m_attributeUpdates.size());
   for(unsigned attributeUpdatesIndex = 0; attributeUpdatesIndex < attributeUpdatesJsonList.GetLength(); ++attributeUpdatesIndex)
   {
     attributeUpdatesJsonList[attributeUpdatesIndex].AsObject(m_attributeUpdates[attributeUpdatesIndex].Jsonize());
   }
   payload.WithArray("AttributeUpdates", std::move(attributeUpdatesJsonList));

  }

  if(m_identityAttributeOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identityAttributeOrderJsonList(m_identityAttributeOrder.size());
   for(unsigned identityAttributeOrderIndex = 0; identityAttributeOrderIndex < identityAttributeOrderJsonList.GetLength(); ++identityAttributeOrderIndex)
   {
     identityAttributeOrderJsonList[identityAttributeOrderIndex].AsString(m_identityAttributeOrder[identityAttributeOrderIndex]);
   }
   payload.WithArray("IdentityAttributeOrder", std::move(identityAttributeOrderJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTypedLinkFacetRequest::GetRequestSpecificHeaders() const
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




