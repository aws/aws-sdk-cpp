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
