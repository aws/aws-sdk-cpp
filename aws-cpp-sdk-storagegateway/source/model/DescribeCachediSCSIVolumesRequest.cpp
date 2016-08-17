/*
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
#include <aws/storagegateway/model/DescribeCachediSCSIVolumesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCachediSCSIVolumesRequest::DescribeCachediSCSIVolumesRequest() : 
    m_volumeARNsHasBeenSet(false)
{
}

Aws::String DescribeCachediSCSIVolumesRequest::SerializePayload() const
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCachediSCSIVolumesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeCachediSCSIVolumes"));
  return headers;

}



