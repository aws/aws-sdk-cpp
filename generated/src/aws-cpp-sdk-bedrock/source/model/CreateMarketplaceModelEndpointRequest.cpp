/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateMarketplaceModelEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMarketplaceModelEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelSourceIdentifierHasBeenSet)
  {
   payload.WithString("modelSourceIdentifier", m_modelSourceIdentifier);

  }

  if(m_endpointConfigHasBeenSet)
  {
   payload.WithObject("endpointConfig", m_endpointConfig.Jsonize());

  }

  if(m_acceptEulaHasBeenSet)
  {
   payload.WithBool("acceptEula", m_acceptEula);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("endpointName", m_endpointName);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

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




