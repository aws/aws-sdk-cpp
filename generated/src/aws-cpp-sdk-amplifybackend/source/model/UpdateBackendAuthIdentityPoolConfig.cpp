/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendAuthIdentityPoolConfig.h>
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

UpdateBackendAuthIdentityPoolConfig::UpdateBackendAuthIdentityPoolConfig() : 
    m_unauthenticatedLogin(false),
    m_unauthenticatedLoginHasBeenSet(false)
{
}

UpdateBackendAuthIdentityPoolConfig::UpdateBackendAuthIdentityPoolConfig(JsonView jsonValue) : 
    m_unauthenticatedLogin(false),
    m_unauthenticatedLoginHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBackendAuthIdentityPoolConfig& UpdateBackendAuthIdentityPoolConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unauthenticatedLogin"))
  {
    m_unauthenticatedLogin = jsonValue.GetBool("unauthenticatedLogin");

    m_unauthenticatedLoginHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBackendAuthIdentityPoolConfig::Jsonize() const
{
  JsonValue payload;

  if(m_unauthenticatedLoginHasBeenSet)
  {
   payload.WithBool("unauthenticatedLogin", m_unauthenticatedLogin);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
