/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The GlueOAuth2 credentials of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueOAuth2Credentials">AWS
   * API Reference</a></p>
   */
  class GlueOAuth2Credentials
  {
  public:
    AWS_DATAZONE_API GlueOAuth2Credentials() = default;
    AWS_DATAZONE_API GlueOAuth2Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueOAuth2Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access token of a connection.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    GlueOAuth2Credentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jwt token of the connection.</p>
     */
    inline const Aws::String& GetJwtToken() const { return m_jwtToken; }
    inline bool JwtTokenHasBeenSet() const { return m_jwtTokenHasBeenSet; }
    template<typename JwtTokenT = Aws::String>
    void SetJwtToken(JwtTokenT&& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = std::forward<JwtTokenT>(value); }
    template<typename JwtTokenT = Aws::String>
    GlueOAuth2Credentials& WithJwtToken(JwtTokenT&& value) { SetJwtToken(std::forward<JwtTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The refresh token of the connection.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    GlueOAuth2Credentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user managed client application client secret of the connection. </p>
     */
    inline const Aws::String& GetUserManagedClientApplicationClientSecret() const { return m_userManagedClientApplicationClientSecret; }
    inline bool UserManagedClientApplicationClientSecretHasBeenSet() const { return m_userManagedClientApplicationClientSecretHasBeenSet; }
    template<typename UserManagedClientApplicationClientSecretT = Aws::String>
    void SetUserManagedClientApplicationClientSecret(UserManagedClientApplicationClientSecretT&& value) { m_userManagedClientApplicationClientSecretHasBeenSet = true; m_userManagedClientApplicationClientSecret = std::forward<UserManagedClientApplicationClientSecretT>(value); }
    template<typename UserManagedClientApplicationClientSecretT = Aws::String>
    GlueOAuth2Credentials& WithUserManagedClientApplicationClientSecret(UserManagedClientApplicationClientSecretT&& value) { SetUserManagedClientApplicationClientSecret(std::forward<UserManagedClientApplicationClientSecretT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_jwtToken;
    bool m_jwtTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_userManagedClientApplicationClientSecret;
    bool m_userManagedClientApplicationClientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
