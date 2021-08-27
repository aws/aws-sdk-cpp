/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
