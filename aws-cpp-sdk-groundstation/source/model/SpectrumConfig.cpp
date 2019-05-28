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

SpectrumConfig::SpectrumConfig() : 
    m_bandwidthHasBeenSet(false),
    m_centerFrequencyHasBeenSet(false),
    m_polarization(Polarization::NOT_SET),
    m_polarizationHasBeenSet(false)
{
}

SpectrumConfig::SpectrumConfig(JsonView jsonValue) : 
    m_bandwidthHasBeenSet(false),
    m_centerFrequencyHasBeenSet(false),
    m_polarization(Polarization::NOT_SET),
    m_polarizationHasBeenSet(false)
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
