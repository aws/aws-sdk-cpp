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

#include <aws/medialive/model/InputDeviceConfigurableSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDeviceConfigurableSettings::InputDeviceConfigurableSettings() : 
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false)
{
}

InputDeviceConfigurableSettings::InputDeviceConfigurableSettings(JsonView jsonValue) : 
    m_configuredInput(InputDeviceConfiguredInput::NOT_SET),
    m_configuredInputHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

InputDeviceConfigurableSettings& InputDeviceConfigurableSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuredInput"))
  {
    m_configuredInput = InputDeviceConfiguredInputMapper::GetInputDeviceConfiguredInputForName(jsonValue.GetString("configuredInput"));

    m_configuredInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDeviceConfigurableSettings::Jsonize() const
{
  JsonValue payload;

  if(m_configuredInputHasBeenSet)
  {
   payload.WithString("configuredInput", InputDeviceConfiguredInputMapper::GetNameForInputDeviceConfiguredInput(m_configuredInput));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
