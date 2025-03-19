/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AuthProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

AuthProvider::AuthProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthProvider& AuthProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cognitoConfig"))
  {
    m_cognitoConfig = jsonValue.GetObject("cognitoConfig");
    m_cognitoConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("openIDConnectConfig"))
  {
    m_openIDConnectConfig = jsonValue.GetObject("openIDConnectConfig");
    m_openIDConnectConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdaAuthorizerConfig"))
  {
    m_lambdaAuthorizerConfig = jsonValue.GetObject("lambdaAuthorizerConfig");
    m_lambdaAuthorizerConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthProvider::Jsonize() const
{
  JsonValue payload;

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authType));
  }

  if(m_cognitoConfigHasBeenSet)
  {
   payload.WithObject("cognitoConfig", m_cognitoConfig.Jsonize());

  }

  if(m_openIDConnectConfigHasBeenSet)
  {
   payload.WithObject("openIDConnectConfig", m_openIDConnectConfig.Jsonize());

  }

  if(m_lambdaAuthorizerConfigHasBeenSet)
  {
   payload.WithObject("lambdaAuthorizerConfig", m_lambdaAuthorizerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
