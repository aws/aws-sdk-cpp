/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeVolumesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVolumesRequest::DescribeVolumesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_raidArrayIdHasBeenSet(false),
    m_volumeIdsHasBeenSet(false)
{
}

Aws::String DescribeVolumesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_raidArrayIdHasBeenSet)
  {
   payload.WithString("RaidArrayId", m_raidArrayId);

  }

  if(m_volumeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeIdsJsonList(m_volumeIds.size());
   for(unsigned volumeIdsIndex = 0; volumeIdsIndex < volumeIdsJsonList.GetLength(); ++volumeIdsIndex)
   {
     volumeIdsJsonList[volumeIdsIndex].AsString(m_volumeIds[volumeIdsIndex]);
   }
   payload.WithArray("VolumeIds", std::move(volumeIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeVolumesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeVolumes"));
  return headers;

}




