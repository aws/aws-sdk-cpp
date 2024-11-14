/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/LicenseServerSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

LicenseServerSettings::LicenseServerSettings() : 
    m_serverSettingsHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false)
{
}

LicenseServerSettings::LicenseServerSettings(JsonView jsonValue)
  : LicenseServerSettings()
{
  *this = jsonValue;
}

LicenseServerSettings& LicenseServerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerSettings"))
  {
    m_serverSettings = jsonValue.GetObject("ServerSettings");

    m_serverSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerType"))
  {
    m_serverType = ServerTypeMapper::GetServerTypeForName(jsonValue.GetString("ServerType"));

    m_serverTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseServerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_serverSettingsHasBeenSet)
  {
   payload.WithObject("ServerSettings", m_serverSettings.Jsonize());

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("ServerType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
