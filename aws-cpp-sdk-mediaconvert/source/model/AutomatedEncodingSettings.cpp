/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AutomatedEncodingSettings.h>
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

AutomatedEncodingSettings::AutomatedEncodingSettings() : 
    m_abrSettingsHasBeenSet(false)
{
}

AutomatedEncodingSettings::AutomatedEncodingSettings(JsonView jsonValue) : 
    m_abrSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

AutomatedEncodingSettings& AutomatedEncodingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("abrSettings"))
  {
    m_abrSettings = jsonValue.GetObject("abrSettings");

    m_abrSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomatedEncodingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_abrSettingsHasBeenSet)
  {
   payload.WithObject("abrSettings", m_abrSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
