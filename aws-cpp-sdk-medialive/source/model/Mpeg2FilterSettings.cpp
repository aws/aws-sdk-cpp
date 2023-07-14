/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2FilterSettings.h>
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

Mpeg2FilterSettings::Mpeg2FilterSettings() : 
    m_temporalFilterSettingsHasBeenSet(false)
{
}

Mpeg2FilterSettings::Mpeg2FilterSettings(JsonView jsonValue) : 
    m_temporalFilterSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Mpeg2FilterSettings& Mpeg2FilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("temporalFilterSettings"))
  {
    m_temporalFilterSettings = jsonValue.GetObject("temporalFilterSettings");

    m_temporalFilterSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Mpeg2FilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_temporalFilterSettingsHasBeenSet)
  {
   payload.WithObject("temporalFilterSettings", m_temporalFilterSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
