/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains credentials to use for federation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_CONNECT_API Credentials() = default;
    AWS_CONNECT_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An access token generated for a federated user to access Amazon Connect.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    Credentials& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetAccessTokenExpiration() const { return m_accessTokenExpiration; }
    inline bool AccessTokenExpirationHasBeenSet() const { return m_accessTokenExpirationHasBeenSet; }
    template<typename AccessTokenExpirationT = Aws::Utils::DateTime>
    void SetAccessTokenExpiration(AccessTokenExpirationT&& value) { m_accessTokenExpirationHasBeenSet = true; m_accessTokenExpiration = std::forward<AccessTokenExpirationT>(value); }
    template<typename AccessTokenExpirationT = Aws::Utils::DateTime>
    Credentials& WithAccessTokenExpiration(AccessTokenExpirationT&& value) { SetAccessTokenExpiration(std::forward<AccessTokenExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    Credentials& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshTokenExpiration() const { return m_refreshTokenExpiration; }
    inline bool RefreshTokenExpirationHasBeenSet() const { return m_refreshTokenExpirationHasBeenSet; }
    template<typename RefreshTokenExpirationT = Aws::Utils::DateTime>
    void SetRefreshTokenExpiration(RefreshTokenExpirationT&& value) { m_refreshTokenExpirationHasBeenSet = true; m_refreshTokenExpiration = std::forward<RefreshTokenExpirationT>(value); }
    template<typename RefreshTokenExpirationT = Aws::Utils::DateTime>
    Credentials& WithRefreshTokenExpiration(RefreshTokenExpirationT&& value) { SetRefreshTokenExpiration(std::forward<RefreshTokenExpirationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::Utils::DateTime m_accessTokenExpiration{};
    bool m_accessTokenExpirationHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::Utils::DateTime m_refreshTokenExpiration{};
    bool m_refreshTokenExpirationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
