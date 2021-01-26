/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/GoogleAnalyticsConnectorProfileCredentials.h>
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

GoogleAnalyticsConnectorProfileCredentials::GoogleAnalyticsConnectorProfileCredentials() : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_oAuthRequestHasBeenSet(false)
{
}

GoogleAnalyticsConnectorProfileCredentials::GoogleAnalyticsConnectorProfileCredentials(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_oAuthRequestHasBeenSet(false)
{
  *this = jsonValue;
}

GoogleAnalyticsConnectorProfileCredentials& GoogleAnalyticsConnectorProfileCredentials::operator =(JsonView jsonValue)
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

JsonValue GoogleAnalyticsConnectorProfileCredentials::Jsonize() const
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
