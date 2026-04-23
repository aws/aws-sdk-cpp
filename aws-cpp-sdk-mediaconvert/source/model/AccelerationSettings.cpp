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

#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AccelerationSettings::AccelerationSettings() : 
    m_mode(AccelerationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

AccelerationSettings::AccelerationSettings(JsonView jsonValue) : 
    m_mode(AccelerationMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

AccelerationSettings& AccelerationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = AccelerationModeMapper::GetAccelerationModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccelerationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", AccelerationModeMapper::GetNameForAccelerationMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
