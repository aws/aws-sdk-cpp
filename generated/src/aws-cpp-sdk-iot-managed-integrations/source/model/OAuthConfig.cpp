/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OAuthConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OAuthConfig::OAuthConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuthConfig& OAuthConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authUrl"))
  {
    m_authUrl = jsonValue.GetString("authUrl");
    m_authUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenUrl"))
  {
    m_tokenUrl = jsonValue.GetString("tokenUrl");
    m_tokenUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scope"))
  {
    m_scope = jsonValue.GetString("scope");
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenEndpointAuthenticationScheme"))
  {
    m_tokenEndpointAuthenticationScheme = TokenEndpointAuthenticationSchemeMapper::GetTokenEndpointAuthenticationSchemeForName(jsonValue.GetString("tokenEndpointAuthenticationScheme"));
    m_tokenEndpointAuthenticationSchemeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuthCompleteRedirectUrl"))
  {
    m_oAuthCompleteRedirectUrl = jsonValue.GetString("oAuthCompleteRedirectUrl");
    m_oAuthCompleteRedirectUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("proactiveRefreshTokenRenewal"))
  {
    m_proactiveRefreshTokenRenewal = jsonValue.GetObject("proactiveRefreshTokenRenewal");
    m_proactiveRefreshTokenRenewalHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthConfig::Jsonize() const
{
  JsonValue payload;

  if(m_authUrlHasBeenSet)
  {
   payload.WithString("authUrl", m_authUrl);

  }

  if(m_tokenUrlHasBeenSet)
  {
   payload.WithString("tokenUrl", m_tokenUrl);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", m_scope);

  }

  if(m_tokenEndpointAuthenticationSchemeHasBeenSet)
  {
   payload.WithString("tokenEndpointAuthenticationScheme", TokenEndpointAuthenticationSchemeMapper::GetNameForTokenEndpointAuthenticationScheme(m_tokenEndpointAuthenticationScheme));
  }

  if(m_oAuthCompleteRedirectUrlHasBeenSet)
  {
   payload.WithString("oAuthCompleteRedirectUrl", m_oAuthCompleteRedirectUrl);

  }

  if(m_proactiveRefreshTokenRenewalHasBeenSet)
  {
   payload.WithObject("proactiveRefreshTokenRenewal", m_proactiveRefreshTokenRenewal.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
