/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeregisterVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterVolumeRequest::DeregisterVolumeRequest() : 
    m_volumeIdHasBeenSet(false)
{
}

Aws::String DeregisterVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeregisterVolume"));
  return headers;

}




