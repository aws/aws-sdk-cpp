/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The credentials used when the authentication type is OAuth2
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OAuth2Credentials">AWS
   * API Reference</a></p>
   */
  class OAuth2Credentials
  {
  public:
    AWS_GLUE_API OAuth2Credentials() = default;
    AWS_GLUE_API OAuth2Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API OAuth2Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The client application client secret if the client application is user
     * managed.</p>
     */
    inline const Aws::String& GetUserManagedClientApplicationClientSecret() const { return m_userManagedClientApplicationClientSecret; }
    inline bool UserManagedClientApplicationClientSecretHasBeenSet() const { return m_userManagedClientApplicationClientSecretHasBeenSet; }
    template<typename UserManagedClientApplicationClientSecretT = Aws::String>
    void SetUserManagedClientApplicationClientSecret(UserManagedClientApplicationClientSecretT&& value) { m_userManagedClientApplicationClientSecretHasBeenSet = true; m_userManagedClientApplicationClientSecret = std::forward<UserManagedClientApplicationClientSecretT>(value); }
    template<typename UserManagedClientApplicationClientSecretT = Aws::String>
    OAuth2Credentials& WithUserManagedClientApplicationClientSecret(UserManagedClientApplicationClientSecretT&& value) { SetUserManagedClientApplicationClientSecret(std::forward<UserManagedClientApplicationClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access token used when the authentication type is OAuth2.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    OAuth2Credentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The refresh token used when the authentication type is OAuth2.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    OAuth2Credentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON Web Token (JWT) used when the authentication type is OAuth2.</p>
     */
    inline const Aws::String& GetJwtToken() const { return m_jwtToken; }
    inline bool JwtTokenHasBeenSet() const { return m_jwtTokenHasBeenSet; }
    template<typename JwtTokenT = Aws::String>
    void SetJwtToken(JwtTokenT&& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = std::forward<JwtTokenT>(value); }
    template<typename JwtTokenT = Aws::String>
    OAuth2Credentials& WithJwtToken(JwtTokenT&& value) { SetJwtToken(std::forward<JwtTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userManagedClientApplicationClientSecret;
    bool m_userManagedClientApplicationClientSecretHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_jwtToken;
    bool m_jwtTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
