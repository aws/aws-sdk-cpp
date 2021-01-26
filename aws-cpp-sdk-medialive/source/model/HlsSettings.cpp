/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsSettings.h>
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

HlsSettings::HlsSettings() : 
    m_audioOnlyHlsSettingsHasBeenSet(false),
    m_fmp4HlsSettingsHasBeenSet(false),
    m_standardHlsSettingsHasBeenSet(false)
{
}

HlsSettings::HlsSettings(JsonView jsonValue) : 
    m_audioOnlyHlsSettingsHasBeenSet(false),
    m_fmp4HlsSettingsHasBeenSet(false),
    m_standardHlsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsSettings& HlsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioOnlyHlsSettings"))
  {
    m_audioOnlyHlsSettings = jsonValue.GetObject("audioOnlyHlsSettings");

    m_audioOnlyHlsSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fmp4HlsSettings"))
  {
    m_fmp4HlsSettings = jsonValue.GetObject("fmp4HlsSettings");

    m_fmp4HlsSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("standardHlsSettings"))
  {
    m_standardHlsSettings = jsonValue.GetObject("standardHlsSettings");

    m_standardHlsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioOnlyHlsSettingsHasBeenSet)
  {
   payload.WithObject("audioOnlyHlsSettings", m_audioOnlyHlsSettings.Jsonize());

  }

  if(m_fmp4HlsSettingsHasBeenSet)
  {
   payload.WithObject("fmp4HlsSettings", m_fmp4HlsSettings.Jsonize());

  }

  if(m_standardHlsSettingsHasBeenSet)
  {
   payload.WithObject("standardHlsSettings", m_standardHlsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
