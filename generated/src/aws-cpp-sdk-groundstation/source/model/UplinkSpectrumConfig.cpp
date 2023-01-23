/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/UplinkSpectrumConfig.h>
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

UplinkSpectrumConfig::UplinkSpectrumConfig() : 
    m_centerFrequencyHasBeenSet(false),
    m_polarization(Polarization::NOT_SET),
    m_polarizationHasBeenSet(false)
{
}

UplinkSpectrumConfig::UplinkSpectrumConfig(JsonView jsonValue) : 
    m_centerFrequencyHasBeenSet(false),
    m_polarization(Polarization::NOT_SET),
    m_polarizationHasBeenSet(false)
{
  *this = jsonValue;
}

UplinkSpectrumConfig& UplinkSpectrumConfig::operator =(JsonView jsonValue)
{
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

JsonValue UplinkSpectrumConfig::Jsonize() const
{
  JsonValue payload;

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
