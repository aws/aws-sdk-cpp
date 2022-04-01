/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetRegistryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRegistryRequest::GetRegistryRequest() : 
    m_registryIdHasBeenSet(false)
{
}

Aws::String GetRegistryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithObject("RegistryId", m_registryId.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRegistryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetRegistry"));
  return headers;

}




