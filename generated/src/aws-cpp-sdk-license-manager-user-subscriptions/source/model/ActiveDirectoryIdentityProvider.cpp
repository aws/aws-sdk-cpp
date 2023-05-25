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
    m_directoryIdHasBeenSet(false)
{
}

ActiveDirectoryIdentityProvider::ActiveDirectoryIdentityProvider(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveDirectoryIdentityProvider& ActiveDirectoryIdentityProvider::operator =(JsonView jsonValue)
{
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

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
