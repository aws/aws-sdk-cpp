/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SalesforceConnectorProfileCredentials::SalesforceConnectorProfileCredentials() : 
    m_accessTokenHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_oAuthRequestHasBeenSet(false),
    m_clientCredentialsArnHasBeenSet(false),
    m_oAuth2GrantType(OAuth2GrantType::NOT_SET),
    m_oAuth2GrantTypeHasBeenSet(false),
    m_jwtTokenHasBeenSet(false)
{
}

SalesforceConnectorProfileCredentials::SalesforceConnectorProfileCredentials(JsonView jsonValue) : 
    m_accessTokenHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_oAuthRequestHasBeenSet(false),
    m_clientCredentialsArnHasBeenSet(false),
    m_oAuth2GrantType(OAuth2GrantType::NOT_SET),
    m_oAuth2GrantTypeHasBeenSet(false),
    m_jwtTokenHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceConnectorProfileCredentials& SalesforceConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");

    m_accessTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");

    m_refreshTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuthRequest"))
  {
    m_oAuthRequest = jsonValue.GetObject("oAuthRequest");

    m_oAuthRequestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientCredentialsArn"))
  {
    m_clientCredentialsArn = jsonValue.GetString("clientCredentialsArn");

    m_clientCredentialsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuth2GrantType"))
  {
    m_oAuth2GrantType = OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(jsonValue.GetString("oAuth2GrantType"));

    m_oAuth2GrantTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jwtToken"))
  {
    m_jwtToken = jsonValue.GetString("jwtToken");

    m_jwtTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("accessToken", m_accessToken);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("refreshToken", m_refreshToken);

  }

  if(m_oAuthRequestHasBeenSet)
  {
   payload.WithObject("oAuthRequest", m_oAuthRequest.Jsonize());

  }

  if(m_clientCredentialsArnHasBeenSet)
  {
   payload.WithString("clientCredentialsArn", m_clientCredentialsArn);

  }

  if(m_oAuth2GrantTypeHasBeenSet)
  {
   payload.WithString("oAuth2GrantType", OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oAuth2GrantType));
  }

  if(m_jwtTokenHasBeenSet)
  {
   payload.WithString("jwtToken", m_jwtToken);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
