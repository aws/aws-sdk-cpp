/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AntennaUplinkConfig.h>
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

AntennaUplinkConfig::AntennaUplinkConfig() : 
    m_spectrumConfigHasBeenSet(false),
    m_targetEirpHasBeenSet(false),
    m_transmitDisabled(false),
    m_transmitDisabledHasBeenSet(false)
{
}

AntennaUplinkConfig::AntennaUplinkConfig(JsonView jsonValue) : 
    m_spectrumConfigHasBeenSet(false),
    m_targetEirpHasBeenSet(false),
    m_transmitDisabled(false),
    m_transmitDisabledHasBeenSet(false)
{
  *this = jsonValue;
}

AntennaUplinkConfig& AntennaUplinkConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spectrumConfig"))
  {
    m_spectrumConfig = jsonValue.GetObject("spectrumConfig");

    m_spectrumConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetEirp"))
  {
    m_targetEirp = jsonValue.GetObject("targetEirp");

    m_targetEirpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transmitDisabled"))
  {
    m_transmitDisabled = jsonValue.GetBool("transmitDisabled");

    m_transmitDisabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AntennaUplinkConfig::Jsonize() const
{
  JsonValue payload;

  if(m_spectrumConfigHasBeenSet)
  {
   payload.WithObject("spectrumConfig", m_spectrumConfig.Jsonize());

  }

  if(m_targetEirpHasBeenSet)
  {
   payload.WithObject("targetEirp", m_targetEirp.Jsonize());

  }

  if(m_transmitDisabledHasBeenSet)
  {
   payload.WithBool("transmitDisabled", m_transmitDisabled);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
