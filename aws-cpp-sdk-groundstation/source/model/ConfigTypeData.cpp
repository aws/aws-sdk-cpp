/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/groundstation/model/ConfigTypeData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ConfigTypeData::ConfigTypeData() : 
    m_antennaDownlinkConfigHasBeenSet(false),
    m_antennaDownlinkDemodDecodeConfigHasBeenSet(false),
    m_antennaUplinkConfigHasBeenSet(false),
    m_dataflowEndpointConfigHasBeenSet(false),
    m_trackingConfigHasBeenSet(false),
    m_uplinkEchoConfigHasBeenSet(false)
{
}

ConfigTypeData::ConfigTypeData(JsonView jsonValue) : 
    m_antennaDownlinkConfigHasBeenSet(false),
    m_antennaDownlinkDemodDecodeConfigHasBeenSet(false),
    m_antennaUplinkConfigHasBeenSet(false),
    m_dataflowEndpointConfigHasBeenSet(false),
    m_trackingConfigHasBeenSet(false),
    m_uplinkEchoConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigTypeData& ConfigTypeData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("antennaDownlinkConfig"))
  {
    m_antennaDownlinkConfig = jsonValue.GetObject("antennaDownlinkConfig");

    m_antennaDownlinkConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antennaDownlinkDemodDecodeConfig"))
  {
    m_antennaDownlinkDemodDecodeConfig = jsonValue.GetObject("antennaDownlinkDemodDecodeConfig");

    m_antennaDownlinkDemodDecodeConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antennaUplinkConfig"))
  {
    m_antennaUplinkConfig = jsonValue.GetObject("antennaUplinkConfig");

    m_antennaUplinkConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataflowEndpointConfig"))
  {
    m_dataflowEndpointConfig = jsonValue.GetObject("dataflowEndpointConfig");

    m_dataflowEndpointConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trackingConfig"))
  {
    m_trackingConfig = jsonValue.GetObject("trackingConfig");

    m_trackingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uplinkEchoConfig"))
  {
    m_uplinkEchoConfig = jsonValue.GetObject("uplinkEchoConfig");

    m_uplinkEchoConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigTypeData::Jsonize() const
{
  JsonValue payload;

  if(m_antennaDownlinkConfigHasBeenSet)
  {
   payload.WithObject("antennaDownlinkConfig", m_antennaDownlinkConfig.Jsonize());

  }

  if(m_antennaDownlinkDemodDecodeConfigHasBeenSet)
  {
   payload.WithObject("antennaDownlinkDemodDecodeConfig", m_antennaDownlinkDemodDecodeConfig.Jsonize());

  }

  if(m_antennaUplinkConfigHasBeenSet)
  {
   payload.WithObject("antennaUplinkConfig", m_antennaUplinkConfig.Jsonize());

  }

  if(m_dataflowEndpointConfigHasBeenSet)
  {
   payload.WithObject("dataflowEndpointConfig", m_dataflowEndpointConfig.Jsonize());

  }

  if(m_trackingConfigHasBeenSet)
  {
   payload.WithObject("trackingConfig", m_trackingConfig.Jsonize());

  }

  if(m_uplinkEchoConfigHasBeenSet)
  {
   payload.WithObject("uplinkEchoConfig", m_uplinkEchoConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
