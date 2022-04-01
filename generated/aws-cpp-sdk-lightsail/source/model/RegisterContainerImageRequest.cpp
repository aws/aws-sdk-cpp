/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RegisterContainerImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterContainerImageRequest::RegisterContainerImageRequest() : 
    m_serviceNameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_digestHasBeenSet(false)
{
}

Aws::String RegisterContainerImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  if(m_digestHasBeenSet)
  {
   payload.WithString("digest", m_digest);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterContainerImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.RegisterContainerImage"));
  return headers;

}




