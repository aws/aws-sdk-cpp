/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
