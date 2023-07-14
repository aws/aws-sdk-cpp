/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/KeyProviderSettings.h>
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

KeyProviderSettings::KeyProviderSettings() : 
    m_staticKeySettingsHasBeenSet(false)
{
}

KeyProviderSettings::KeyProviderSettings(JsonView jsonValue) : 
    m_staticKeySettingsHasBeenSet(false)
{
  *this = jsonValue;
}

KeyProviderSettings& KeyProviderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("staticKeySettings"))
  {
    m_staticKeySettings = jsonValue.GetObject("staticKeySettings");

    m_staticKeySettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyProviderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_staticKeySettingsHasBeenSet)
  {
   payload.WithObject("staticKeySettings", m_staticKeySettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
