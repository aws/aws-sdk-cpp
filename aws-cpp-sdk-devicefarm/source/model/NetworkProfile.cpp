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
#include <aws/devicefarm/model/NetworkProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

NetworkProfile::NetworkProfile() : 
    m_arnHasBeenSet(false),
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

NetworkProfile::NetworkProfile(const JsonValue& jsonValue) : 
    m_arnHasBeenSet(false),
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
  *this = jsonValue;
}

NetworkProfile& NetworkProfile::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = NetworkProfileTypeMapper::GetNetworkProfileTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uplinkBandwidthBits"))
  {
    m_uplinkBandwidthBits = jsonValue.GetInt64("uplinkBandwidthBits");

    m_uplinkBandwidthBitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("downlinkBandwidthBits"))
  {
    m_downlinkBandwidthBits = jsonValue.GetInt64("downlinkBandwidthBits");

    m_downlinkBandwidthBitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uplinkDelayMs"))
  {
    m_uplinkDelayMs = jsonValue.GetInt64("uplinkDelayMs");

    m_uplinkDelayMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("downlinkDelayMs"))
  {
    m_downlinkDelayMs = jsonValue.GetInt64("downlinkDelayMs");

    m_downlinkDelayMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uplinkJitterMs"))
  {
    m_uplinkJitterMs = jsonValue.GetInt64("uplinkJitterMs");

    m_uplinkJitterMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("downlinkJitterMs"))
  {
    m_downlinkJitterMs = jsonValue.GetInt64("downlinkJitterMs");

    m_downlinkJitterMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uplinkLossPercent"))
  {
    m_uplinkLossPercent = jsonValue.GetInteger("uplinkLossPercent");

    m_uplinkLossPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("downlinkLossPercent"))
  {
    m_downlinkLossPercent = jsonValue.GetInteger("downlinkLossPercent");

    m_downlinkLossPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkProfile::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

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

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws