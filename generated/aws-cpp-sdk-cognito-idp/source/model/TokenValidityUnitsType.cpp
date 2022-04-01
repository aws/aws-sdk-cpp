/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TokenValidityUnitsType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

TokenValidityUnitsType::TokenValidityUnitsType() : 
    m_accessToken(TimeUnitsType::NOT_SET),
    m_accessTokenHasBeenSet(false),
    m_idToken(TimeUnitsType::NOT_SET),
    m_idTokenHasBeenSet(false),
    m_refreshToken(TimeUnitsType::NOT_SET),
    m_refreshTokenHasBeenSet(false)
{
}

TokenValidityUnitsType::TokenValidityUnitsType(JsonView jsonValue) : 
    m_accessToken(TimeUnitsType::NOT_SET),
    m_accessTokenHasBeenSet(false),
    m_idToken(TimeUnitsType::NOT_SET),
    m_idTokenHasBeenSet(false),
    m_refreshToken(TimeUnitsType::NOT_SET),
    m_refreshTokenHasBeenSet(false)
{
  *this = jsonValue;
}

TokenValidityUnitsType& TokenValidityUnitsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessToken"))
  {
    m_accessToken = TimeUnitsTypeMapper::GetTimeUnitsTypeForName(jsonValue.GetString("AccessToken"));

    m_accessTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdToken"))
  {
    m_idToken = TimeUnitsTypeMapper::GetTimeUnitsTypeForName(jsonValue.GetString("IdToken"));

    m_idTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshToken"))
  {
    m_refreshToken = TimeUnitsTypeMapper::GetTimeUnitsTypeForName(jsonValue.GetString("RefreshToken"));

    m_refreshTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue TokenValidityUnitsType::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", TimeUnitsTypeMapper::GetNameForTimeUnitsType(m_accessToken));
  }

  if(m_idTokenHasBeenSet)
  {
   payload.WithString("IdToken", TimeUnitsTypeMapper::GetNameForTimeUnitsType(m_idToken));
  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("RefreshToken", TimeUnitsTypeMapper::GetNameForTimeUnitsType(m_refreshToken));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
