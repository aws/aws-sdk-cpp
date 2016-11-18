﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/DescribeVTLDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVTLDevicesRequest::DescribeVTLDevicesRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_vTLDeviceARNsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeVTLDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_vTLDeviceARNsHasBeenSet)
  {
   Array<JsonValue> vTLDeviceARNsJsonList(m_vTLDeviceARNs.size());
   for(unsigned vTLDeviceARNsIndex = 0; vTLDeviceARNsIndex < vTLDeviceARNsJsonList.GetLength(); ++vTLDeviceARNsIndex)
   {
     vTLDeviceARNsJsonList[vTLDeviceARNsIndex].AsString(m_vTLDeviceARNs[vTLDeviceARNsIndex]);
   }
   payload.WithArray("VTLDeviceARNs", std::move(vTLDeviceARNsJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeVTLDevicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeVTLDevices"));
  return headers;

}



