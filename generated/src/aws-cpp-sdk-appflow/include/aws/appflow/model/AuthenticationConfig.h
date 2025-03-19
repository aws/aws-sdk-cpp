/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/OAuth2Defaults.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/CustomAuthConfig.h>
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
   * <p>Contains information about the authentication config that the connector
   * supports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/AuthenticationConfig">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfig
  {
  public:
    AWS_APPFLOW_API AuthenticationConfig() = default;
    AWS_APPFLOW_API AuthenticationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API AuthenticationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether basic authentication is supported by the connector.</p>
     */
    inline bool GetIsBasicAuthSupported() const { return m_isBasicAuthSupported; }
    inline bool IsBasicAuthSupportedHasBeenSet() const { return m_isBasicAuthSupportedHasBeenSet; }
    inline void SetIsBasicAuthSupported(bool value) { m_isBasicAuthSupportedHasBeenSet = true; m_isBasicAuthSupported = value; }
    inline AuthenticationConfig& WithIsBasicAuthSupported(bool value) { SetIsBasicAuthSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether API key authentication is supported by the connector</p>
     */
    inline bool GetIsApiKeyAuthSupported() const { return m_isApiKeyAuthSupported; }
    inline bool IsApiKeyAuthSupportedHasBeenSet() const { return m_isApiKeyAuthSupportedHasBeenSet; }
    inline void SetIsApiKeyAuthSupported(bool value) { m_isApiKeyAuthSupportedHasBeenSet = true; m_isApiKeyAuthSupported = value; }
    inline AuthenticationConfig& WithIsApiKeyAuthSupported(bool value) { SetIsApiKeyAuthSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether OAuth 2.0 authentication is supported by the connector.</p>
     */
    inline bool GetIsOAuth2Supported() const { return m_isOAuth2Supported; }
    inline bool IsOAuth2SupportedHasBeenSet() const { return m_isOAuth2SupportedHasBeenSet; }
    inline void SetIsOAuth2Supported(bool value) { m_isOAuth2SupportedHasBeenSet = true; m_isOAuth2Supported = value; }
    inline AuthenticationConfig& WithIsOAuth2Supported(bool value) { SetIsOAuth2Supported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom authentication is supported by the connector</p>
     */
    inline bool GetIsCustomAuthSupported() const { return m_isCustomAuthSupported; }
    inline bool IsCustomAuthSupportedHasBeenSet() const { return m_isCustomAuthSupportedHasBeenSet; }
    inline void SetIsCustomAuthSupported(bool value) { m_isCustomAuthSupportedHasBeenSet = true; m_isCustomAuthSupported = value; }
    inline AuthenticationConfig& WithIsCustomAuthSupported(bool value) { SetIsCustomAuthSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline const OAuth2Defaults& GetOAuth2Defaults() const { return m_oAuth2Defaults; }
    inline bool OAuth2DefaultsHasBeenSet() const { return m_oAuth2DefaultsHasBeenSet; }
    template<typename OAuth2DefaultsT = OAuth2Defaults>
    void SetOAuth2Defaults(OAuth2DefaultsT&& value) { m_oAuth2DefaultsHasBeenSet = true; m_oAuth2Defaults = std::forward<OAuth2DefaultsT>(value); }
    template<typename OAuth2DefaultsT = OAuth2Defaults>
    AuthenticationConfig& WithOAuth2Defaults(OAuth2DefaultsT&& value) { SetOAuth2Defaults(std::forward<OAuth2DefaultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline const Aws::Vector<CustomAuthConfig>& GetCustomAuthConfigs() const { return m_customAuthConfigs; }
    inline bool CustomAuthConfigsHasBeenSet() const { return m_customAuthConfigsHasBeenSet; }
    template<typename CustomAuthConfigsT = Aws::Vector<CustomAuthConfig>>
    void SetCustomAuthConfigs(CustomAuthConfigsT&& value) { m_customAuthConfigsHasBeenSet = true; m_customAuthConfigs = std::forward<CustomAuthConfigsT>(value); }
    template<typename CustomAuthConfigsT = Aws::Vector<CustomAuthConfig>>
    AuthenticationConfig& WithCustomAuthConfigs(CustomAuthConfigsT&& value) { SetCustomAuthConfigs(std::forward<CustomAuthConfigsT>(value)); return *this;}
    template<typename CustomAuthConfigsT = CustomAuthConfig>
    AuthenticationConfig& AddCustomAuthConfigs(CustomAuthConfigsT&& value) { m_customAuthConfigsHasBeenSet = true; m_customAuthConfigs.emplace_back(std::forward<CustomAuthConfigsT>(value)); return *this; }
    ///@}
  private:

    bool m_isBasicAuthSupported{false};
    bool m_isBasicAuthSupportedHasBeenSet = false;

    bool m_isApiKeyAuthSupported{false};
    bool m_isApiKeyAuthSupportedHasBeenSet = false;

    bool m_isOAuth2Supported{false};
    bool m_isOAuth2SupportedHasBeenSet = false;

    bool m_isCustomAuthSupported{false};
    bool m_isCustomAuthSupportedHasBeenSet = false;

    OAuth2Defaults m_oAuth2Defaults;
    bool m_oAuth2DefaultsHasBeenSet = false;

    Aws::Vector<CustomAuthConfig> m_customAuthConfigs;
    bool m_customAuthConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
