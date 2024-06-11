/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/NewDeviceMetadataType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The authentication result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AuthenticationResultType">AWS
   * API Reference</a></p>
   */
  class AuthenticationResultType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType();
    AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user who you want to
     * authenticate.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline AuthenticationResultType& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline AuthenticationResultType& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline AuthenticationResultType& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration period of the authentication result in seconds.</p>
     */
    inline int GetExpiresIn() const{ return m_expiresIn; }
    inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
    inline void SetExpiresIn(int value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }
    inline AuthenticationResultType& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token type.</p>
     */
    inline const Aws::String& GetTokenType() const{ return m_tokenType; }
    inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
    inline void SetTokenType(const Aws::String& value) { m_tokenTypeHasBeenSet = true; m_tokenType = value; }
    inline void SetTokenType(Aws::String&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = std::move(value); }
    inline void SetTokenType(const char* value) { m_tokenTypeHasBeenSet = true; m_tokenType.assign(value); }
    inline AuthenticationResultType& WithTokenType(const Aws::String& value) { SetTokenType(value); return *this;}
    inline AuthenticationResultType& WithTokenType(Aws::String&& value) { SetTokenType(std::move(value)); return *this;}
    inline AuthenticationResultType& WithTokenType(const char* value) { SetTokenType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The refresh token.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline AuthenticationResultType& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline AuthenticationResultType& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline AuthenticationResultType& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID token.</p>
     */
    inline const Aws::String& GetIdToken() const{ return m_idToken; }
    inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }
    inline void SetIdToken(const Aws::String& value) { m_idTokenHasBeenSet = true; m_idToken = value; }
    inline void SetIdToken(Aws::String&& value) { m_idTokenHasBeenSet = true; m_idToken = std::move(value); }
    inline void SetIdToken(const char* value) { m_idTokenHasBeenSet = true; m_idToken.assign(value); }
    inline AuthenticationResultType& WithIdToken(const Aws::String& value) { SetIdToken(value); return *this;}
    inline AuthenticationResultType& WithIdToken(Aws::String&& value) { SetIdToken(std::move(value)); return *this;}
    inline AuthenticationResultType& WithIdToken(const char* value) { SetIdToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline const NewDeviceMetadataType& GetNewDeviceMetadata() const{ return m_newDeviceMetadata; }
    inline bool NewDeviceMetadataHasBeenSet() const { return m_newDeviceMetadataHasBeenSet; }
    inline void SetNewDeviceMetadata(const NewDeviceMetadataType& value) { m_newDeviceMetadataHasBeenSet = true; m_newDeviceMetadata = value; }
    inline void SetNewDeviceMetadata(NewDeviceMetadataType&& value) { m_newDeviceMetadataHasBeenSet = true; m_newDeviceMetadata = std::move(value); }
    inline AuthenticationResultType& WithNewDeviceMetadata(const NewDeviceMetadataType& value) { SetNewDeviceMetadata(value); return *this;}
    inline AuthenticationResultType& WithNewDeviceMetadata(NewDeviceMetadataType&& value) { SetNewDeviceMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    int m_expiresIn;
    bool m_expiresInHasBeenSet = false;

    Aws::String m_tokenType;
    bool m_tokenTypeHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_idToken;
    bool m_idTokenHasBeenSet = false;

    NewDeviceMetadataType m_newDeviceMetadata;
    bool m_newDeviceMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
