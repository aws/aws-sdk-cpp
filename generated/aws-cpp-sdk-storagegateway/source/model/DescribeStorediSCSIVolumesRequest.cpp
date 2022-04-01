﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeStorediSCSIVolumesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStorediSCSIVolumesRequest::DescribeStorediSCSIVolumesRequest() : 
    m_volumeARNsHasBeenSet(false)
{
}

Aws::String DescribeStorediSCSIVolumesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeARNsHasBeenSet)
  {
   Array<JsonValue> volumeARNsJsonList(m_volumeARNs.size());
   for(unsigned volumeARNsIndex = 0; volumeARNsIndex < volumeARNsJsonList.GetLength(); ++volumeARNsIndex)
   {
     volumeARNsJsonList[volumeARNsIndex].AsString(m_volumeARNs[volumeARNsIndex]);
   }
   payload.WithArray("VolumeARNs", std::move(volumeARNsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStorediSCSIVolumesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeStorediSCSIVolumes"));
  return headers;

}




