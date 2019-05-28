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

#include <aws/groundstation/model/AntennaDownlinkDemodDecodeConfig.h>
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

AntennaDownlinkDemodDecodeConfig::AntennaDownlinkDemodDecodeConfig() : 
    m_decodeConfigHasBeenSet(false),
    m_demodulationConfigHasBeenSet(false),
    m_spectrumConfigHasBeenSet(false)
{
}

AntennaDownlinkDemodDecodeConfig::AntennaDownlinkDemodDecodeConfig(JsonView jsonValue) : 
    m_decodeConfigHasBeenSet(false),
    m_demodulationConfigHasBeenSet(false),
    m_spectrumConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AntennaDownlinkDemodDecodeConfig& AntennaDownlinkDemodDecodeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decodeConfig"))
  {
    m_decodeConfig = jsonValue.GetObject("decodeConfig");

    m_decodeConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("demodulationConfig"))
  {
    m_demodulationConfig = jsonValue.GetObject("demodulationConfig");

    m_demodulationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spectrumConfig"))
  {
    m_spectrumConfig = jsonValue.GetObject("spectrumConfig");

    m_spectrumConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AntennaDownlinkDemodDecodeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_decodeConfigHasBeenSet)
  {
   payload.WithObject("decodeConfig", m_decodeConfig.Jsonize());

  }

  if(m_demodulationConfigHasBeenSet)
  {
   payload.WithObject("demodulationConfig", m_demodulationConfig.Jsonize());

  }

  if(m_spectrumConfigHasBeenSet)
  {
   payload.WithObject("spectrumConfig", m_spectrumConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
