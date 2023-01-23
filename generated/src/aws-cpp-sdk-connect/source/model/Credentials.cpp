/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Credentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Credentials::Credentials() : 
    m_accessTokenHasBeenSet(false),
    m_accessTokenExpirationHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_refreshTokenExpirationHasBeenSet(false)
{
}

Credentials::Credentials(JsonView jsonValue) : 
    m_accessTokenHasBeenSet(false),
    m_accessTokenExpirationHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_refreshTokenExpirationHasBeenSet(false)
{
  *this = jsonValue;
}

Credentials& Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessToken"))
  {
    m_accessToken = jsonValue.GetString("AccessToken");

    m_accessTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessTokenExpiration"))
  {
    m_accessTokenExpiration = jsonValue.GetDouble("AccessTokenExpiration");

    m_accessTokenExpirationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshToken"))
  {
    m_refreshToken = jsonValue.GetString("RefreshToken");

    m_refreshTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshTokenExpiration"))
  {
    m_refreshTokenExpiration = jsonValue.GetDouble("RefreshTokenExpiration");

    m_refreshTokenExpirationHasBeenSet = true;
  }

  return *this;
}

JsonValue Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_accessTokenExpirationHasBeenSet)
  {
   payload.WithDouble("AccessTokenExpiration", m_accessTokenExpiration.SecondsWithMSPrecision());
  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("RefreshToken", m_refreshToken);

  }

  if(m_refreshTokenExpirationHasBeenSet)
  {
   payload.WithDouble("RefreshTokenExpiration", m_refreshTokenExpiration.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
