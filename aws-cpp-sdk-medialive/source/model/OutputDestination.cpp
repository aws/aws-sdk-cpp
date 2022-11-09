/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputDestination.h>
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

OutputDestination::OutputDestination() : 
    m_idHasBeenSet(false),
    m_mediaPackageSettingsHasBeenSet(false),
    m_multiplexSettingsHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

OutputDestination::OutputDestination(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_mediaPackageSettingsHasBeenSet(false),
    m_multiplexSettingsHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDestination& OutputDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaPackageSettings"))
  {
    Aws::Utils::Array<JsonView> mediaPackageSettingsJsonList = jsonValue.GetArray("mediaPackageSettings");
    for(unsigned mediaPackageSettingsIndex = 0; mediaPackageSettingsIndex < mediaPackageSettingsJsonList.GetLength(); ++mediaPackageSettingsIndex)
    {
      m_mediaPackageSettings.push_back(mediaPackageSettingsJsonList[mediaPackageSettingsIndex].AsObject());
    }
    m_mediaPackageSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multiplexSettings"))
  {
    m_multiplexSettings = jsonValue.GetObject("multiplexSettings");

    m_multiplexSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    Aws::Utils::Array<JsonView> settingsJsonList = jsonValue.GetArray("settings");
    for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
    {
      m_settings.push_back(settingsJsonList[settingsIndex].AsObject());
    }
    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputDestination::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_mediaPackageSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaPackageSettingsJsonList(m_mediaPackageSettings.size());
   for(unsigned mediaPackageSettingsIndex = 0; mediaPackageSettingsIndex < mediaPackageSettingsJsonList.GetLength(); ++mediaPackageSettingsIndex)
   {
     mediaPackageSettingsJsonList[mediaPackageSettingsIndex].AsObject(m_mediaPackageSettings[mediaPackageSettingsIndex].Jsonize());
   }
   payload.WithArray("mediaPackageSettings", std::move(mediaPackageSettingsJsonList));

  }

  if(m_multiplexSettingsHasBeenSet)
  {
   payload.WithObject("multiplexSettings", m_multiplexSettings.Jsonize());

  }

  if(m_settingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> settingsJsonList(m_settings.size());
   for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
   {
     settingsJsonList[settingsIndex].AsObject(m_settings[settingsIndex].Jsonize());
   }
   payload.WithArray("settings", std::move(settingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
