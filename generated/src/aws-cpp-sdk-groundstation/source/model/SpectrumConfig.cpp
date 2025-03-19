/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/SpectrumConfig.h>
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

SpectrumConfig::SpectrumConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SpectrumConfig& SpectrumConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bandwidth"))
  {
    m_bandwidth = jsonValue.GetObject("bandwidth");
    m_bandwidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("centerFrequency"))
  {
    m_centerFrequency = jsonValue.GetObject("centerFrequency");
    m_centerFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("polarization"))
  {
    m_polarization = PolarizationMapper::GetPolarizationForName(jsonValue.GetString("polarization"));
    m_polarizationHasBeenSet = true;
  }
  return *this;
}

JsonValue SpectrumConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bandwidthHasBeenSet)
  {
   payload.WithObject("bandwidth", m_bandwidth.Jsonize());

  }

  if(m_centerFrequencyHasBeenSet)
  {
   payload.WithObject("centerFrequency", m_centerFrequency.Jsonize());

  }

  if(m_polarizationHasBeenSet)
  {
   payload.WithString("polarization", PolarizationMapper::GetNameForPolarization(m_polarization));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
