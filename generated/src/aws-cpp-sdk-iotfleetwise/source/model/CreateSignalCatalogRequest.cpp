/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateSignalCatalogRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSignalCatalogRequest::CreateSignalCatalogRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSignalCatalogRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesJsonList(m_nodes.size());
   for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
   {
     nodesJsonList[nodesIndex].AsObject(m_nodes[nodesIndex].Jsonize());
   }
   payload.WithArray("nodes", std::move(nodesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSignalCatalogRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.CreateSignalCatalog"));
  return headers;

}




