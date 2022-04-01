/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AntennaDownlinkConfig.h>
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

AntennaDownlinkConfig::AntennaDownlinkConfig() : 
    m_spectrumConfigHasBeenSet(false)
{
}

AntennaDownlinkConfig::AntennaDownlinkConfig(JsonView jsonValue) : 
    m_spectrumConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AntennaDownlinkConfig& AntennaDownlinkConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spectrumConfig"))
  {
    m_spectrumConfig = jsonValue.GetObject("spectrumConfig");

    m_spectrumConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AntennaDownlinkConfig::Jsonize() const
{
  JsonValue payload;

  if(m_spectrumConfigHasBeenSet)
  {
   payload.WithObject("spectrumConfig", m_spectrumConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
