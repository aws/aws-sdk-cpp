/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The OAuth properties required for OAuth type authentication. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/OAuthProperties">AWS
   * API Reference</a></p>
   */
  class OAuthProperties
  {
  public:
    AWS_APPFLOW_API OAuthProperties();
    AWS_APPFLOW_API OAuthProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API OAuthProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline const Aws::String& GetTokenUrl() const{ return m_tokenUrl; }

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline void SetTokenUrl(const Aws::String& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = value; }

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline void SetTokenUrl(Aws::String&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::move(value); }

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline void SetTokenUrl(const char* value) { m_tokenUrlHasBeenSet = true; m_tokenUrl.assign(value); }

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline OAuthProperties& WithTokenUrl(const Aws::String& value) { SetTokenUrl(value); return *this;}

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline OAuthProperties& WithTokenUrl(Aws::String&& value) { SetTokenUrl(std::move(value)); return *this;}

    /**
     * <p> The token url required to fetch access/refresh tokens using authorization
     * code and also to refresh expired access token using refresh token.</p>
     */
    inline OAuthProperties& WithTokenUrl(const char* value) { SetTokenUrl(value); return *this;}


    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline const Aws::String& GetAuthCodeUrl() const{ return m_authCodeUrl; }

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline bool AuthCodeUrlHasBeenSet() const { return m_authCodeUrlHasBeenSet; }

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline void SetAuthCodeUrl(const Aws::String& value) { m_authCodeUrlHasBeenSet = true; m_authCodeUrl = value; }

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline void SetAuthCodeUrl(Aws::String&& value) { m_authCodeUrlHasBeenSet = true; m_authCodeUrl = std::move(value); }

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline void SetAuthCodeUrl(const char* value) { m_authCodeUrlHasBeenSet = true; m_authCodeUrl.assign(value); }

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline OAuthProperties& WithAuthCodeUrl(const Aws::String& value) { SetAuthCodeUrl(value); return *this;}

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline OAuthProperties& WithAuthCodeUrl(Aws::String&& value) { SetAuthCodeUrl(std::move(value)); return *this;}

    /**
     * <p> The authorization code url required to redirect to SAP Login Page to fetch
     * authorization code for OAuth type authentication. </p>
     */
    inline OAuthProperties& WithAuthCodeUrl(const char* value) { SetAuthCodeUrl(value); return *this;}


    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const{ return m_oAuthScopes; }

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline void SetOAuthScopes(const Aws::Vector<Aws::String>& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = value; }

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline void SetOAuthScopes(Aws::Vector<Aws::String>&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::move(value); }

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline OAuthProperties& WithOAuthScopes(const Aws::Vector<Aws::String>& value) { SetOAuthScopes(value); return *this;}

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline OAuthProperties& WithOAuthScopes(Aws::Vector<Aws::String>&& value) { SetOAuthScopes(std::move(value)); return *this;}

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline OAuthProperties& AddOAuthScopes(const Aws::String& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline OAuthProperties& AddOAuthScopes(Aws::String&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p> The OAuth scopes required for OAuth type authentication. </p>
     */
    inline OAuthProperties& AddOAuthScopes(const char* value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.push_back(value); return *this; }

  private:

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    Aws::String m_authCodeUrl;
    bool m_authCodeUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
