/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendAuthIdentityPoolConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

CreateBackendAuthIdentityPoolConfig::CreateBackendAuthIdentityPoolConfig() : 
    m_identityPoolNameHasBeenSet(false),
    m_unauthenticatedLogin(false),
    m_unauthenticatedLoginHasBeenSet(false)
{
}

CreateBackendAuthIdentityPoolConfig::CreateBackendAuthIdentityPoolConfig(JsonView jsonValue) : 
    m_identityPoolNameHasBeenSet(false),
    m_unauthenticatedLogin(false),
    m_unauthenticatedLoginHasBeenSet(false)
{
  *this = jsonValue;
}

CreateBackendAuthIdentityPoolConfig& CreateBackendAuthIdentityPoolConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityPoolName"))
  {
    m_identityPoolName = jsonValue.GetString("identityPoolName");

    m_identityPoolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unauthenticatedLogin"))
  {
    m_unauthenticatedLogin = jsonValue.GetBool("unauthenticatedLogin");

    m_unauthenticatedLoginHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateBackendAuthIdentityPoolConfig::Jsonize() const
{
  JsonValue payload;

  if(m_identityPoolNameHasBeenSet)
  {
   payload.WithString("identityPoolName", m_identityPoolName);

  }

  if(m_unauthenticatedLoginHasBeenSet)
  {
   payload.WithBool("unauthenticatedLogin", m_unauthenticatedLogin);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
