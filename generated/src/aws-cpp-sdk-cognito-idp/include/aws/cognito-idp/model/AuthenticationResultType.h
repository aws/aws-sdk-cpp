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
   * <p>The object that your application receives after authentication. Contains
   * tokens and information for device authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AuthenticationResultType">AWS
   * API Reference</a></p>
   */
  class AuthenticationResultType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AuthenticationResultType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Your user's access token.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    AuthenticationResultType& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration period of the authentication result in seconds.</p>
     */
    inline int GetExpiresIn() const { return m_expiresIn; }
    inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
    inline void SetExpiresIn(int value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }
    inline AuthenticationResultType& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The intended use of the token, for example <code>Bearer</code>.</p>
     */
    inline const Aws::String& GetTokenType() const { return m_tokenType; }
    inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
    template<typename TokenTypeT = Aws::String>
    void SetTokenType(TokenTypeT&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = std::forward<TokenTypeT>(value); }
    template<typename TokenTypeT = Aws::String>
    AuthenticationResultType& WithTokenType(TokenTypeT&& value) { SetTokenType(std::forward<TokenTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your user's refresh token.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    AuthenticationResultType& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your user's ID token.</p>
     */
    inline const Aws::String& GetIdToken() const { return m_idToken; }
    inline bool IdTokenHasBeenSet() const { return m_idTokenHasBeenSet; }
    template<typename IdTokenT = Aws::String>
    void SetIdToken(IdTokenT&& value) { m_idTokenHasBeenSet = true; m_idToken = std::forward<IdTokenT>(value); }
    template<typename IdTokenT = Aws::String>
    AuthenticationResultType& WithIdToken(IdTokenT&& value) { SetIdToken(std::forward<IdTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new device metadata from an authentication result.</p>
     */
    inline const NewDeviceMetadataType& GetNewDeviceMetadata() const { return m_newDeviceMetadata; }
    inline bool NewDeviceMetadataHasBeenSet() const { return m_newDeviceMetadataHasBeenSet; }
    template<typename NewDeviceMetadataT = NewDeviceMetadataType>
    void SetNewDeviceMetadata(NewDeviceMetadataT&& value) { m_newDeviceMetadataHasBeenSet = true; m_newDeviceMetadata = std::forward<NewDeviceMetadataT>(value); }
    template<typename NewDeviceMetadataT = NewDeviceMetadataType>
    AuthenticationResultType& WithNewDeviceMetadata(NewDeviceMetadataT&& value) { SetNewDeviceMetadata(std::forward<NewDeviceMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    int m_expiresIn{0};
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
