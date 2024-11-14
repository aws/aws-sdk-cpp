/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryIdentityProvider.h>
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

ActiveDirectoryIdentityProvider::ActiveDirectoryIdentityProvider() : 
    m_activeDirectorySettingsHasBeenSet(false),
    m_activeDirectoryType(ActiveDirectoryType::NOT_SET),
    m_activeDirectoryTypeHasBeenSet(false),
    m_directoryIdHasBeenSet(false)
{
}

ActiveDirectoryIdentityProvider::ActiveDirectoryIdentityProvider(JsonView jsonValue)
  : ActiveDirectoryIdentityProvider()
{
  *this = jsonValue;
}

ActiveDirectoryIdentityProvider& ActiveDirectoryIdentityProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveDirectorySettings"))
  {
    m_activeDirectorySettings = jsonValue.GetObject("ActiveDirectorySettings");

    m_activeDirectorySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveDirectoryType"))
  {
    m_activeDirectoryType = ActiveDirectoryTypeMapper::GetActiveDirectoryTypeForName(jsonValue.GetString("ActiveDirectoryType"));

    m_activeDirectoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveDirectoryIdentityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectorySettingsHasBeenSet)
  {
   payload.WithObject("ActiveDirectorySettings", m_activeDirectorySettings.Jsonize());

  }

  if(m_activeDirectoryTypeHasBeenSet)
  {
   payload.WithString("ActiveDirectoryType", ActiveDirectoryTypeMapper::GetNameForActiveDirectoryType(m_activeDirectoryType));
  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
