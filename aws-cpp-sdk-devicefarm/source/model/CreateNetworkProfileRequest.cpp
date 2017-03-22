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
#include <aws/devicefarm/model/CreateNetworkProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNetworkProfileRequest::CreateNetworkProfileRequest() : 
    m_projectArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(NetworkProfileType::NOT_SET),
    m_typeHasBeenSet(false),
    m_uplinkBandwidthBits(0),
    m_uplinkBandwidthBitsHasBeenSet(false),
    m_downlinkBandwidthBits(0),
    m_downlinkBandwidthBitsHasBeenSet(false),
    m_uplinkDelayMs(0),
    m_uplinkDelayMsHasBeenSet(false),
    m_downlinkDelayMs(0),
    m_downlinkDelayMsHasBeenSet(false),
    m_uplinkJitterMs(0),
    m_uplinkJitterMsHasBeenSet(false),
    m_downlinkJitterMs(0),
    m_downlinkJitterMsHasBeenSet(false),
    m_uplinkLossPercent(0),
    m_uplinkLossPercentHasBeenSet(false),
    m_downlinkLossPercent(0),
    m_downlinkLossPercentHasBeenSet(false)
{
}

Aws::String CreateNetworkProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NetworkProfileTypeMapper::GetNameForNetworkProfileType(m_type));
  }

  if(m_uplinkBandwidthBitsHasBeenSet)
  {
   payload.WithInt64("uplinkBandwidthBits", m_uplinkBandwidthBits);

  }

  if(m_downlinkBandwidthBitsHasBeenSet)
  {
   payload.WithInt64("downlinkBandwidthBits", m_downlinkBandwidthBits);

  }

  if(m_uplinkDelayMsHasBeenSet)
  {
   payload.WithInt64("uplinkDelayMs", m_uplinkDelayMs);

  }

  if(m_downlinkDelayMsHasBeenSet)
  {
   payload.WithInt64("downlinkDelayMs", m_downlinkDelayMs);

  }

  if(m_uplinkJitterMsHasBeenSet)
  {
   payload.WithInt64("uplinkJitterMs", m_uplinkJitterMs);

  }

  if(m_downlinkJitterMsHasBeenSet)
  {
   payload.WithInt64("downlinkJitterMs", m_downlinkJitterMs);

  }

  if(m_uplinkLossPercentHasBeenSet)
  {
   payload.WithInteger("uplinkLossPercent", m_uplinkLossPercent);

  }

  if(m_downlinkLossPercentHasBeenSet)
  {
   payload.WithInteger("downlinkLossPercent", m_downlinkLossPercent);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateNetworkProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateNetworkProfile"));
  return headers;

}




