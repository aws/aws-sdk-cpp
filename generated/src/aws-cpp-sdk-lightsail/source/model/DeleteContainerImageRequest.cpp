/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteContainerImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteContainerImageRequest::DeleteContainerImageRequest() : 
    m_serviceNameHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

Aws::String DeleteContainerImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteContainerImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteContainerImage"));
  return headers;

}




