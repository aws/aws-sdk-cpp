/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
