/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuthCredentials.h>
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

OAuthCredentials::OAuthCredentials() : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_oAuthRequestHasBeenSet(false)
{
}

OAuthCredentials::OAuthCredentials(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_oAuthRequestHasBeenSet(false)
{
  *this = jsonValue;
}

OAuthCredentials& OAuthCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientSecret"))
  {
    m_clientSecret = jsonValue.GetString("clientSecret");

    m_clientSecretHasBeenSet = true;
  }

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

  return *this;
}

JsonValue OAuthCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("clientSecret", m_clientSecret);

  }

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

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
