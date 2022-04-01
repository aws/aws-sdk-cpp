/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceRegistryLogin.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerServiceRegistryLogin::ContainerServiceRegistryLogin() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_registryHasBeenSet(false)
{
}

ContainerServiceRegistryLogin::ContainerServiceRegistryLogin(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_registryHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceRegistryLogin& ContainerServiceRegistryLogin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");

    m_expiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registry"))
  {
    m_registry = jsonValue.GetString("registry");

    m_registryHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceRegistryLogin::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if(m_registryHasBeenSet)
  {
   payload.WithString("registry", m_registry);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
