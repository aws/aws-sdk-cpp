/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
