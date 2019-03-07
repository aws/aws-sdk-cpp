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
    m_settingsHasBeenSet(false)
{
}

OutputDestination::OutputDestination(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_mediaPackageSettingsHasBeenSet(false),
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
    Array<JsonView> mediaPackageSettingsJsonList = jsonValue.GetArray("mediaPackageSettings");
    for(unsigned mediaPackageSettingsIndex = 0; mediaPackageSettingsIndex < mediaPackageSettingsJsonList.GetLength(); ++mediaPackageSettingsIndex)
    {
      m_mediaPackageSettings.push_back(mediaPackageSettingsJsonList[mediaPackageSettingsIndex].AsObject());
    }
    m_mediaPackageSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    Array<JsonView> settingsJsonList = jsonValue.GetArray("settings");
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
   Array<JsonValue> mediaPackageSettingsJsonList(m_mediaPackageSettings.size());
   for(unsigned mediaPackageSettingsIndex = 0; mediaPackageSettingsIndex < mediaPackageSettingsJsonList.GetLength(); ++mediaPackageSettingsIndex)
   {
     mediaPackageSettingsJsonList[mediaPackageSettingsIndex].AsObject(m_mediaPackageSettings[mediaPackageSettingsIndex].Jsonize());
   }
   payload.WithArray("mediaPackageSettings", std::move(mediaPackageSettingsJsonList));

  }

  if(m_settingsHasBeenSet)
  {
   Array<JsonValue> settingsJsonList(m_settings.size());
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
