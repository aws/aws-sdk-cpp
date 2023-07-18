/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MotionGraphicsSettings.h>
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

MotionGraphicsSettings::MotionGraphicsSettings() : 
    m_htmlMotionGraphicsSettingsHasBeenSet(false)
{
}

MotionGraphicsSettings::MotionGraphicsSettings(JsonView jsonValue) : 
    m_htmlMotionGraphicsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

MotionGraphicsSettings& MotionGraphicsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("htmlMotionGraphicsSettings"))
  {
    m_htmlMotionGraphicsSettings = jsonValue.GetObject("htmlMotionGraphicsSettings");

    m_htmlMotionGraphicsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue MotionGraphicsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_htmlMotionGraphicsSettingsHasBeenSet)
  {
   payload.WithObject("htmlMotionGraphicsSettings", m_htmlMotionGraphicsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
