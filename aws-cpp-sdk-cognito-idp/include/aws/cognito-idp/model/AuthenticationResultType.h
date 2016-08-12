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
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/NewDeviceMetadataType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The result type of the authentication result.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType
  {
  public:
    AuthenticationResultType();
    AuthenticationResultType(const Aws::Utils::Json::JsonValue& jsonValue);
    AuthenticationResultType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithAccessToken(Aws::String&& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

    /**
     * <p>The expiration period of the authentication result.</p>
     */
    inline int GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>The expiration period of the authentication result.</p>
     */
    inline void SetExpiresIn(int value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }

    /**
     * <p>The expiration period of the authentication result.</p>
     */
    inline AuthenticationResultType& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline const Aws::String& GetTokenType() const{ return m_tokenType; }

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline void SetTokenType(const Aws::String& value) { m_tokenTypeHasBeenSet = true; m_tokenType = value; }

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline void SetTokenType(Aws::String&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = value; }

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline void SetTokenType(const char* value) { m_tokenTypeHasBeenSet = true; m_tokenType.assign(value); }

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline AuthenticationResultType& WithTokenType(const Aws::String& value) { SetTokenType(value); return *this;}

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline AuthenticationResultType& WithTokenType(Aws::String&& value) { SetTokenType(value); return *this;}

    /**
     * <p>The token type of the authentication result.</p>
     */
    inline AuthenticationResultType& WithTokenType(const char* value) { SetTokenType(value); return *this;}

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithRefreshToken(Aws::String&& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>The refresh token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline const Aws::String& GetIdToken() const{ return m_idToken; }

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline void SetIdToken(const Aws::String& value) { m_idTokenHasBeenSet = true; m_idToken = value; }

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline void SetIdToken(Aws::String&& value) { m_idTokenHasBeenSet = true; m_idToken = value; }

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline void SetIdToken(const char* value) { m_idTokenHasBeenSet = true; m_idToken.assign(value); }

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithIdToken(const Aws::String& value) { SetIdToken(value); return *this;}

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithIdToken(Aws::String&& value) { SetIdToken(value); return *this;}

    /**
     * <p>The ID token of the authentication result.</p>
     */
    inline AuthenticationResultType& WithIdToken(const char* value) { SetIdToken(value); return *this;}

    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline const NewDeviceMetadataType& GetNewDeviceMetadata() const{ return m_newDeviceMetadata; }

    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline void SetNewDeviceMetadata(const NewDeviceMetadataType& value) { m_newDeviceMetadataHasBeenSet = true; m_newDeviceMetadata = value; }

    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline void SetNewDeviceMetadata(NewDeviceMetadataType&& value) { m_newDeviceMetadataHasBeenSet = true; m_newDeviceMetadata = value; }

    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline AuthenticationResultType& WithNewDeviceMetadata(const NewDeviceMetadataType& value) { SetNewDeviceMetadata(value); return *this;}

    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline AuthenticationResultType& WithNewDeviceMetadata(NewDeviceMetadataType&& value) { SetNewDeviceMetadata(value); return *this;}

  private:
    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;
    int m_expiresIn;
    bool m_expiresInHasBeenSet;
    Aws::String m_tokenType;
    bool m_tokenTypeHasBeenSet;
    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet;
    Aws::String m_idToken;
    bool m_idTokenHasBeenSet;
    NewDeviceMetadataType m_newDeviceMetadata;
    bool m_newDeviceMetadataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
