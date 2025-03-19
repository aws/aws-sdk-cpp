/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/AuthenticationType.h>
#include <aws/appflow/model/BasicAuthCredentials.h>
#include <aws/appflow/model/OAuth2Credentials.h>
#include <aws/appflow/model/ApiKeyCredentials.h>
#include <aws/appflow/model/CustomAuthCredentials.h>
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
   * <p>The connector-specific profile credentials that are required when using the
   * custom connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class CustomConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API CustomConnectorProfileCredentials() = default;
    AWS_APPFLOW_API CustomConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication type that the custom connector uses for authenticating
     * while creating a connector profile.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline CustomConnectorProfileCredentials& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The basic credentials that are required for the authentication of the
     * user.</p>
     */
    inline const BasicAuthCredentials& GetBasic() const { return m_basic; }
    inline bool BasicHasBeenSet() const { return m_basicHasBeenSet; }
    template<typename BasicT = BasicAuthCredentials>
    void SetBasic(BasicT&& value) { m_basicHasBeenSet = true; m_basic = std::forward<BasicT>(value); }
    template<typename BasicT = BasicAuthCredentials>
    CustomConnectorProfileCredentials& WithBasic(BasicT&& value) { SetBasic(std::forward<BasicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 credentials required for the authentication of the user.</p>
     */
    inline const OAuth2Credentials& GetOauth2() const { return m_oauth2; }
    inline bool Oauth2HasBeenSet() const { return m_oauth2HasBeenSet; }
    template<typename Oauth2T = OAuth2Credentials>
    void SetOauth2(Oauth2T&& value) { m_oauth2HasBeenSet = true; m_oauth2 = std::forward<Oauth2T>(value); }
    template<typename Oauth2T = OAuth2Credentials>
    CustomConnectorProfileCredentials& WithOauth2(Oauth2T&& value) { SetOauth2(std::forward<Oauth2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API keys required for the authentication of the user.</p>
     */
    inline const ApiKeyCredentials& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = ApiKeyCredentials>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = ApiKeyCredentials>
    CustomConnectorProfileCredentials& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the connector uses the custom authentication mechanism, this holds the
     * required credentials.</p>
     */
    inline const CustomAuthCredentials& GetCustom() const { return m_custom; }
    inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
    template<typename CustomT = CustomAuthCredentials>
    void SetCustom(CustomT&& value) { m_customHasBeenSet = true; m_custom = std::forward<CustomT>(value); }
    template<typename CustomT = CustomAuthCredentials>
    CustomConnectorProfileCredentials& WithCustom(CustomT&& value) { SetCustom(std::forward<CustomT>(value)); return *this;}
    ///@}
  private:

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    BasicAuthCredentials m_basic;
    bool m_basicHasBeenSet = false;

    OAuth2Credentials m_oauth2;
    bool m_oauth2HasBeenSet = false;

    ApiKeyCredentials m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    CustomAuthCredentials m_custom;
    bool m_customHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
