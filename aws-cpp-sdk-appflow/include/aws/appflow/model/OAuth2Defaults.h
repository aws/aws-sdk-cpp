/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/OAuth2GrantType.h>
#include <aws/appflow/model/OAuth2CustomParameter.h>
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
   * <p>Contains the default values required for OAuth 2.0
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/OAuth2Defaults">AWS
   * API Reference</a></p>
   */
  class OAuth2Defaults
  {
  public:
    AWS_APPFLOW_API OAuth2Defaults();
    AWS_APPFLOW_API OAuth2Defaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API OAuth2Defaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOauthScopes() const{ return m_oauthScopes; }

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline bool OauthScopesHasBeenSet() const { return m_oauthScopesHasBeenSet; }

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline void SetOauthScopes(const Aws::Vector<Aws::String>& value) { m_oauthScopesHasBeenSet = true; m_oauthScopes = value; }

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline void SetOauthScopes(Aws::Vector<Aws::String>&& value) { m_oauthScopesHasBeenSet = true; m_oauthScopes = std::move(value); }

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline OAuth2Defaults& WithOauthScopes(const Aws::Vector<Aws::String>& value) { SetOauthScopes(value); return *this;}

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline OAuth2Defaults& WithOauthScopes(Aws::Vector<Aws::String>&& value) { SetOauthScopes(std::move(value)); return *this;}

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline OAuth2Defaults& AddOauthScopes(const Aws::String& value) { m_oauthScopesHasBeenSet = true; m_oauthScopes.push_back(value); return *this; }

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline OAuth2Defaults& AddOauthScopes(Aws::String&& value) { m_oauthScopesHasBeenSet = true; m_oauthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>OAuth 2.0 scopes that the connector supports.</p>
     */
    inline OAuth2Defaults& AddOauthScopes(const char* value) { m_oauthScopesHasBeenSet = true; m_oauthScopes.push_back(value); return *this; }


    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenUrls() const{ return m_tokenUrls; }

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline bool TokenUrlsHasBeenSet() const { return m_tokenUrlsHasBeenSet; }

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline void SetTokenUrls(const Aws::Vector<Aws::String>& value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls = value; }

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline void SetTokenUrls(Aws::Vector<Aws::String>&& value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls = std::move(value); }

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& WithTokenUrls(const Aws::Vector<Aws::String>& value) { SetTokenUrls(value); return *this;}

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& WithTokenUrls(Aws::Vector<Aws::String>&& value) { SetTokenUrls(std::move(value)); return *this;}

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddTokenUrls(const Aws::String& value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls.push_back(value); return *this; }

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddTokenUrls(Aws::String&& value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls.push_back(std::move(value)); return *this; }

    /**
     * <p>Token URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddTokenUrls(const char* value) { m_tokenUrlsHasBeenSet = true; m_tokenUrls.push_back(value); return *this; }


    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthCodeUrls() const{ return m_authCodeUrls; }

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline bool AuthCodeUrlsHasBeenSet() const { return m_authCodeUrlsHasBeenSet; }

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline void SetAuthCodeUrls(const Aws::Vector<Aws::String>& value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls = value; }

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline void SetAuthCodeUrls(Aws::Vector<Aws::String>&& value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls = std::move(value); }

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& WithAuthCodeUrls(const Aws::Vector<Aws::String>& value) { SetAuthCodeUrls(value); return *this;}

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& WithAuthCodeUrls(Aws::Vector<Aws::String>&& value) { SetAuthCodeUrls(std::move(value)); return *this;}

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddAuthCodeUrls(const Aws::String& value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls.push_back(value); return *this; }

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddAuthCodeUrls(Aws::String&& value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls.push_back(std::move(value)); return *this; }

    /**
     * <p>Auth code URLs that can be used for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddAuthCodeUrls(const char* value) { m_authCodeUrlsHasBeenSet = true; m_authCodeUrls.push_back(value); return *this; }


    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline const Aws::Vector<OAuth2GrantType>& GetOauth2GrantTypesSupported() const{ return m_oauth2GrantTypesSupported; }

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline bool Oauth2GrantTypesSupportedHasBeenSet() const { return m_oauth2GrantTypesSupportedHasBeenSet; }

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline void SetOauth2GrantTypesSupported(const Aws::Vector<OAuth2GrantType>& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported = value; }

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline void SetOauth2GrantTypesSupported(Aws::Vector<OAuth2GrantType>&& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported = std::move(value); }

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline OAuth2Defaults& WithOauth2GrantTypesSupported(const Aws::Vector<OAuth2GrantType>& value) { SetOauth2GrantTypesSupported(value); return *this;}

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline OAuth2Defaults& WithOauth2GrantTypesSupported(Aws::Vector<OAuth2GrantType>&& value) { SetOauth2GrantTypesSupported(std::move(value)); return *this;}

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline OAuth2Defaults& AddOauth2GrantTypesSupported(const OAuth2GrantType& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported.push_back(value); return *this; }

    /**
     * <p>OAuth 2.0 grant types supported by the connector.</p>
     */
    inline OAuth2Defaults& AddOauth2GrantTypesSupported(OAuth2GrantType&& value) { m_oauth2GrantTypesSupportedHasBeenSet = true; m_oauth2GrantTypesSupported.push_back(std::move(value)); return *this; }


    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline const Aws::Vector<OAuth2CustomParameter>& GetOauth2CustomProperties() const{ return m_oauth2CustomProperties; }

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline bool Oauth2CustomPropertiesHasBeenSet() const { return m_oauth2CustomPropertiesHasBeenSet; }

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline void SetOauth2CustomProperties(const Aws::Vector<OAuth2CustomParameter>& value) { m_oauth2CustomPropertiesHasBeenSet = true; m_oauth2CustomProperties = value; }

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline void SetOauth2CustomProperties(Aws::Vector<OAuth2CustomParameter>&& value) { m_oauth2CustomPropertiesHasBeenSet = true; m_oauth2CustomProperties = std::move(value); }

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& WithOauth2CustomProperties(const Aws::Vector<OAuth2CustomParameter>& value) { SetOauth2CustomProperties(value); return *this;}

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& WithOauth2CustomProperties(Aws::Vector<OAuth2CustomParameter>&& value) { SetOauth2CustomProperties(std::move(value)); return *this;}

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddOauth2CustomProperties(const OAuth2CustomParameter& value) { m_oauth2CustomPropertiesHasBeenSet = true; m_oauth2CustomProperties.push_back(value); return *this; }

    /**
     * <p>List of custom parameters required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Defaults& AddOauth2CustomProperties(OAuth2CustomParameter&& value) { m_oauth2CustomPropertiesHasBeenSet = true; m_oauth2CustomProperties.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_oauthScopes;
    bool m_oauthScopesHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenUrls;
    bool m_tokenUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_authCodeUrls;
    bool m_authCodeUrlsHasBeenSet = false;

    Aws::Vector<OAuth2GrantType> m_oauth2GrantTypesSupported;
    bool m_oauth2GrantTypesSupportedHasBeenSet = false;

    Aws::Vector<OAuth2CustomParameter> m_oauth2CustomProperties;
    bool m_oauth2CustomPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
