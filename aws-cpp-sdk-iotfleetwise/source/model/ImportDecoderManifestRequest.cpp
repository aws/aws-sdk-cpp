/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ImportDecoderManifestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportDecoderManifestRequest::ImportDecoderManifestRequest() : 
    m_nameHasBeenSet(false),
    m_networkFileDefinitionsHasBeenSet(false)
{
}

Aws::String ImportDecoderManifestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networkFileDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkFileDefinitionsJsonList(m_networkFileDefinitions.size());
   for(unsigned networkFileDefinitionsIndex = 0; networkFileDefinitionsIndex < networkFileDefinitionsJsonList.GetLength(); ++networkFileDefinitionsIndex)
   {
     networkFileDefinitionsJsonList[networkFileDefinitionsIndex].AsObject(m_networkFileDefinitions[networkFileDefinitionsIndex].Jsonize());
   }
   payload.WithArray("networkFileDefinitions", std::move(networkFileDefinitionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportDecoderManifestRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.ImportDecoderManifest"));
  return headers;

}




