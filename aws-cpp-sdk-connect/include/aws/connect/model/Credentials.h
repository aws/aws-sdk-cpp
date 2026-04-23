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
   * <p>The credentials to use for federation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Credentials">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API Credentials
  {
  public:
    Credentials();
    Credentials(Aws::Utils::Json::JsonView jsonValue);
    Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline Credentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline Credentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>An access token generated for a federated user to access Amazon Connect</p>
     */
    inline Credentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect</p>
     */
    inline const Aws::Utils::DateTime& GetAccessTokenExpiration() const{ return m_accessTokenExpiration; }

    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect</p>
     */
    inline bool AccessTokenExpirationHasBeenSet() const { return m_accessTokenExpirationHasBeenSet; }

    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect</p>
     */
    inline void SetAccessTokenExpiration(const Aws::Utils::DateTime& value) { m_accessTokenExpirationHasBeenSet = true; m_accessTokenExpiration = value; }

    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect</p>
     */
    inline void SetAccessTokenExpiration(Aws::Utils::DateTime&& value) { m_accessTokenExpirationHasBeenSet = true; m_accessTokenExpiration = std::move(value); }

    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect</p>
     */
    inline Credentials& WithAccessTokenExpiration(const Aws::Utils::DateTime& value) { SetAccessTokenExpiration(value); return *this;}

    /**
     * <p>A token generated with an expiration time for the session a user is logged in
     * to Amazon Connect</p>
     */
    inline Credentials& WithAccessTokenExpiration(Aws::Utils::DateTime&& value) { SetAccessTokenExpiration(std::move(value)); return *this;}


    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline Credentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline Credentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>Renews a token generated for a user to access the Amazon Connect
     * instance.</p>
     */
    inline Credentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshTokenExpiration() const{ return m_refreshTokenExpiration; }

    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline bool RefreshTokenExpirationHasBeenSet() const { return m_refreshTokenExpirationHasBeenSet; }

    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline void SetRefreshTokenExpiration(const Aws::Utils::DateTime& value) { m_refreshTokenExpirationHasBeenSet = true; m_refreshTokenExpiration = value; }

    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline void SetRefreshTokenExpiration(Aws::Utils::DateTime&& value) { m_refreshTokenExpirationHasBeenSet = true; m_refreshTokenExpiration = std::move(value); }

    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline Credentials& WithRefreshTokenExpiration(const Aws::Utils::DateTime& value) { SetRefreshTokenExpiration(value); return *this;}

    /**
     * <p>Renews the expiration timer for a generated token.</p>
     */
    inline Credentials& WithRefreshTokenExpiration(Aws::Utils::DateTime&& value) { SetRefreshTokenExpiration(std::move(value)); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::Utils::DateTime m_accessTokenExpiration;
    bool m_accessTokenExpirationHasBeenSet;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet;

    Aws::Utils::DateTime m_refreshTokenExpiration;
    bool m_refreshTokenExpirationHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
