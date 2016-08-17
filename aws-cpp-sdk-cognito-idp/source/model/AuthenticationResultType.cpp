/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/AuthenticationResultType.h>
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

AuthenticationResultType::AuthenticationResultType() : 
    m_accessTokenHasBeenSet(false),
    m_expiresIn(0),
    m_expiresInHasBeenSet(false),
    m_tokenTypeHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_idTokenHasBeenSet(false),
    m_newDeviceMetadataHasBeenSet(false)
{
}

AuthenticationResultType::AuthenticationResultType(const JsonValue& jsonValue) : 
    m_accessTokenHasBeenSet(false),
    m_expiresIn(0),
    m_expiresInHasBeenSet(false),
    m_tokenTypeHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_idTokenHasBeenSet(false),
    m_newDeviceMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationResultType& AuthenticationResultType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AccessToken"))
  {
    m_accessToken = jsonValue.GetString("AccessToken");

    m_accessTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("ExpiresIn");

    m_expiresInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenType"))
  {
    m_tokenType = jsonValue.GetString("TokenType");

    m_tokenTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshToken"))
  {
    m_refreshToken = jsonValue.GetString("RefreshToken");

    m_refreshTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdToken"))
  {
    m_idToken = jsonValue.GetString("IdToken");

    m_idTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewDeviceMetadata"))
  {
    m_newDeviceMetadata = jsonValue.GetObject("NewDeviceMetadata");

    m_newDeviceMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationResultType::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_expiresInHasBeenSet)
  {
   payload.WithInteger("ExpiresIn", m_expiresIn);

  }

  if(m_tokenTypeHasBeenSet)
  {
   payload.WithString("TokenType", m_tokenType);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("RefreshToken", m_refreshToken);

  }

  if(m_idTokenHasBeenSet)
  {
   payload.WithString("IdToken", m_idToken);

  }

  if(m_newDeviceMetadataHasBeenSet)
  {
   payload.WithObject("NewDeviceMetadata", m_newDeviceMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws