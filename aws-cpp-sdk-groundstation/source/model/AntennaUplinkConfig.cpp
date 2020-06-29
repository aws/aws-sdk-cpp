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
    m_targetEirpHasBeenSet(false)
{
}

AntennaUplinkConfig::AntennaUplinkConfig(JsonView jsonValue) : 
    m_spectrumConfigHasBeenSet(false),
    m_targetEirpHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
