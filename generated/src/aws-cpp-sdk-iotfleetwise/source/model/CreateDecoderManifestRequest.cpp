/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateDecoderManifestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDecoderManifestRequest::CreateDecoderManifestRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelManifestArnHasBeenSet(false),
    m_signalDecodersHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDecoderManifestRequest::SerializePayload() const
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

  if(m_modelManifestArnHasBeenSet)
  {
   payload.WithString("modelManifestArn", m_modelManifestArn);

  }

  if(m_signalDecodersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalDecodersJsonList(m_signalDecoders.size());
   for(unsigned signalDecodersIndex = 0; signalDecodersIndex < signalDecodersJsonList.GetLength(); ++signalDecodersIndex)
   {
     signalDecodersJsonList[signalDecodersIndex].AsObject(m_signalDecoders[signalDecodersIndex].Jsonize());
   }
   payload.WithArray("signalDecoders", std::move(signalDecodersJsonList));

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

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

Aws::Http::HeaderValueCollection CreateDecoderManifestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.CreateDecoderManifest"));
  return headers;

}




