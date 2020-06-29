/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DetachVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachVolumeRequest::DetachVolumeRequest() : 
    m_volumeARNHasBeenSet(false),
    m_forceDetach(false),
    m_forceDetachHasBeenSet(false)
{
}

Aws::String DetachVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  if(m_forceDetachHasBeenSet)
  {
   payload.WithBool("ForceDetach", m_forceDetach);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DetachVolume"));
  return headers;

}




