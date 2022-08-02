/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
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

IdentityProvider::IdentityProvider() : 
    m_activeDirectoryIdentityProviderHasBeenSet(false)
{
}

IdentityProvider::IdentityProvider(JsonView jsonValue) : 
    m_activeDirectoryIdentityProviderHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProvider& IdentityProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveDirectoryIdentityProvider"))
  {
    m_activeDirectoryIdentityProvider = jsonValue.GetObject("ActiveDirectoryIdentityProvider");

    m_activeDirectoryIdentityProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryIdentityProviderHasBeenSet)
  {
   payload.WithObject("ActiveDirectoryIdentityProvider", m_activeDirectoryIdentityProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
