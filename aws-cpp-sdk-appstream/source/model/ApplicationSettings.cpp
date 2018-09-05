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

#include <aws/appstream/model/ApplicationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ApplicationSettings::ApplicationSettings() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_settingsGroupHasBeenSet(false)
{
}

ApplicationSettings::ApplicationSettings(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_settingsGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSettings& ApplicationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SettingsGroup"))
  {
    m_settingsGroup = jsonValue.GetString("SettingsGroup");

    m_settingsGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_settingsGroupHasBeenSet)
  {
   payload.WithString("SettingsGroup", m_settingsGroup);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
