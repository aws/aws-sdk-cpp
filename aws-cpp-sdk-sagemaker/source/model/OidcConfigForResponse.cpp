/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OidcConfigForResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

OidcConfigForResponse::OidcConfigForResponse() : 
    m_clientIdHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_tokenEndpointHasBeenSet(false),
    m_userInfoEndpointHasBeenSet(false),
    m_logoutEndpointHasBeenSet(false),
    m_jwksUriHasBeenSet(false)
{
}

OidcConfigForResponse::OidcConfigForResponse(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_tokenEndpointHasBeenSet(false),
    m_userInfoEndpointHasBeenSet(false),
    m_logoutEndpointHasBeenSet(false),
    m_jwksUriHasBeenSet(false)
{
  *this = jsonValue;
}

OidcConfigForResponse& OidcConfigForResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("AuthorizationEndpoint");

    m_authorizationEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenEndpoint"))
  {
    m_tokenEndpoint = jsonValue.GetString("TokenEndpoint");

    m_tokenEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserInfoEndpoint"))
  {
    m_userInfoEndpoint = jsonValue.GetString("UserInfoEndpoint");

    m_userInfoEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogoutEndpoint"))
  {
    m_logoutEndpoint = jsonValue.GetString("LogoutEndpoint");

    m_logoutEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JwksUri"))
  {
    m_jwksUri = jsonValue.GetString("JwksUri");

    m_jwksUriHasBeenSet = true;
  }

  return *this;
}

JsonValue OidcConfigForResponse::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_authorizationEndpointHasBeenSet)
  {
   payload.WithString("AuthorizationEndpoint", m_authorizationEndpoint);

  }

  if(m_tokenEndpointHasBeenSet)
  {
   payload.WithString("TokenEndpoint", m_tokenEndpoint);

  }

  if(m_userInfoEndpointHasBeenSet)
  {
   payload.WithString("UserInfoEndpoint", m_userInfoEndpoint);

  }

  if(m_logoutEndpointHasBeenSet)
  {
   payload.WithString("LogoutEndpoint", m_logoutEndpoint);

  }

  if(m_jwksUriHasBeenSet)
  {
   payload.WithString("JwksUri", m_jwksUri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
