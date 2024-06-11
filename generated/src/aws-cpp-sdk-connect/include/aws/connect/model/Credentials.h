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
    AWS_CONNECT_API Credentials();
    AWS_CONNECT_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An access token generated for a federated user to access Amazon Connect.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline Credentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline Credentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline Credentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetAccessTokenExpiration() const{ return m_accessTokenExpiration; }
    inline bool AccessTokenExpirationHasBeenSet() const { return m_accessTokenExpirationHasBeenSet; }
    inline void SetAccessTokenExpiration(const Aws::Utils::DateTime& value) { m_accessTokenExpirationHasBeenSet = true; m_accessTokenExpiration = value; }
    inline void SetAccessTokenExpiration(Aws::Utils::DateTime&& value) { m_accessTokenExpirationHasBeenSet = true; m_accessTokenExpiration = std::move(value); }
    inline Credentials& WithAccessTokenExpiration(const Aws::Utils::DateTime& value) { SetAccessTokenExpiration(value); return *this;}
    inline Credentials& WithAccessTokenExpiration(Aws::Utils::DateTime&& value) { SetAccessTokenExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline Credentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline Credentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline Credentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshTokenExpiration() const{ return m_refreshTokenExpiration; }
    inline bool RefreshTokenExpirationHasBeenSet() const { return m_refreshTokenExpirationHasBeenSet; }
    inline void SetRefreshTokenExpiration(const Aws::Utils::DateTime& value) { m_refreshTokenExpirationHasBeenSet = true; m_refreshTokenExpiration = value; }
    inline void SetRefreshTokenExpiration(Aws::Utils::DateTime&& value) { m_refreshTokenExpirationHasBeenSet = true; m_refreshTokenExpiration = std::move(value); }
    inline Credentials& WithRefreshTokenExpiration(const Aws::Utils::DateTime& value) { SetRefreshTokenExpiration(value); return *this;}
    inline Credentials& WithRefreshTokenExpiration(Aws::Utils::DateTime&& value) { SetRefreshTokenExpiration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::Utils::DateTime m_accessTokenExpiration;
    bool m_accessTokenExpirationHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::Utils::DateTime m_refreshTokenExpiration;
    bool m_refreshTokenExpirationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
