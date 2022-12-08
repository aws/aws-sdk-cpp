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
    AWS_APPFLOW_API AuthenticationConfig();
    AWS_APPFLOW_API AuthenticationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API AuthenticationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether basic authentication is supported by the connector.</p>
     */
    inline bool GetIsBasicAuthSupported() const{ return m_isBasicAuthSupported; }

    /**
     * <p>Indicates whether basic authentication is supported by the connector.</p>
     */
    inline bool IsBasicAuthSupportedHasBeenSet() const { return m_isBasicAuthSupportedHasBeenSet; }

    /**
     * <p>Indicates whether basic authentication is supported by the connector.</p>
     */
    inline void SetIsBasicAuthSupported(bool value) { m_isBasicAuthSupportedHasBeenSet = true; m_isBasicAuthSupported = value; }

    /**
     * <p>Indicates whether basic authentication is supported by the connector.</p>
     */
    inline AuthenticationConfig& WithIsBasicAuthSupported(bool value) { SetIsBasicAuthSupported(value); return *this;}


    /**
     * <p>Indicates whether API key authentication is supported by the connector</p>
     */
    inline bool GetIsApiKeyAuthSupported() const{ return m_isApiKeyAuthSupported; }

    /**
     * <p>Indicates whether API key authentication is supported by the connector</p>
     */
    inline bool IsApiKeyAuthSupportedHasBeenSet() const { return m_isApiKeyAuthSupportedHasBeenSet; }

    /**
     * <p>Indicates whether API key authentication is supported by the connector</p>
     */
    inline void SetIsApiKeyAuthSupported(bool value) { m_isApiKeyAuthSupportedHasBeenSet = true; m_isApiKeyAuthSupported = value; }

    /**
     * <p>Indicates whether API key authentication is supported by the connector</p>
     */
    inline AuthenticationConfig& WithIsApiKeyAuthSupported(bool value) { SetIsApiKeyAuthSupported(value); return *this;}


    /**
     * <p>Indicates whether OAuth 2.0 authentication is supported by the connector.</p>
     */
    inline bool GetIsOAuth2Supported() const{ return m_isOAuth2Supported; }

    /**
     * <p>Indicates whether OAuth 2.0 authentication is supported by the connector.</p>
     */
    inline bool IsOAuth2SupportedHasBeenSet() const { return m_isOAuth2SupportedHasBeenSet; }

    /**
     * <p>Indicates whether OAuth 2.0 authentication is supported by the connector.</p>
     */
    inline void SetIsOAuth2Supported(bool value) { m_isOAuth2SupportedHasBeenSet = true; m_isOAuth2Supported = value; }

    /**
     * <p>Indicates whether OAuth 2.0 authentication is supported by the connector.</p>
     */
    inline AuthenticationConfig& WithIsOAuth2Supported(bool value) { SetIsOAuth2Supported(value); return *this;}


    /**
     * <p>Indicates whether custom authentication is supported by the connector</p>
     */
    inline bool GetIsCustomAuthSupported() const{ return m_isCustomAuthSupported; }

    /**
     * <p>Indicates whether custom authentication is supported by the connector</p>
     */
    inline bool IsCustomAuthSupportedHasBeenSet() const { return m_isCustomAuthSupportedHasBeenSet; }

    /**
     * <p>Indicates whether custom authentication is supported by the connector</p>
     */
    inline void SetIsCustomAuthSupported(bool value) { m_isCustomAuthSupportedHasBeenSet = true; m_isCustomAuthSupported = value; }

    /**
     * <p>Indicates whether custom authentication is supported by the connector</p>
     */
    inline AuthenticationConfig& WithIsCustomAuthSupported(bool value) { SetIsCustomAuthSupported(value); return *this;}


    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline const OAuth2Defaults& GetOAuth2Defaults() const{ return m_oAuth2Defaults; }

    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline bool OAuth2DefaultsHasBeenSet() const { return m_oAuth2DefaultsHasBeenSet; }

    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline void SetOAuth2Defaults(const OAuth2Defaults& value) { m_oAuth2DefaultsHasBeenSet = true; m_oAuth2Defaults = value; }

    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline void SetOAuth2Defaults(OAuth2Defaults&& value) { m_oAuth2DefaultsHasBeenSet = true; m_oAuth2Defaults = std::move(value); }

    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline AuthenticationConfig& WithOAuth2Defaults(const OAuth2Defaults& value) { SetOAuth2Defaults(value); return *this;}

    /**
     * <p>Contains the default values required for OAuth 2.0 authentication.</p>
     */
    inline AuthenticationConfig& WithOAuth2Defaults(OAuth2Defaults&& value) { SetOAuth2Defaults(std::move(value)); return *this;}


    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline const Aws::Vector<CustomAuthConfig>& GetCustomAuthConfigs() const{ return m_customAuthConfigs; }

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline bool CustomAuthConfigsHasBeenSet() const { return m_customAuthConfigsHasBeenSet; }

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline void SetCustomAuthConfigs(const Aws::Vector<CustomAuthConfig>& value) { m_customAuthConfigsHasBeenSet = true; m_customAuthConfigs = value; }

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline void SetCustomAuthConfigs(Aws::Vector<CustomAuthConfig>&& value) { m_customAuthConfigsHasBeenSet = true; m_customAuthConfigs = std::move(value); }

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline AuthenticationConfig& WithCustomAuthConfigs(const Aws::Vector<CustomAuthConfig>& value) { SetCustomAuthConfigs(value); return *this;}

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline AuthenticationConfig& WithCustomAuthConfigs(Aws::Vector<CustomAuthConfig>&& value) { SetCustomAuthConfigs(std::move(value)); return *this;}

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline AuthenticationConfig& AddCustomAuthConfigs(const CustomAuthConfig& value) { m_customAuthConfigsHasBeenSet = true; m_customAuthConfigs.push_back(value); return *this; }

    /**
     * <p>Contains information required for custom authentication.</p>
     */
    inline AuthenticationConfig& AddCustomAuthConfigs(CustomAuthConfig&& value) { m_customAuthConfigsHasBeenSet = true; m_customAuthConfigs.push_back(std::move(value)); return *this; }

  private:

    bool m_isBasicAuthSupported;
    bool m_isBasicAuthSupportedHasBeenSet = false;

    bool m_isApiKeyAuthSupported;
    bool m_isApiKeyAuthSupportedHasBeenSet = false;

    bool m_isOAuth2Supported;
    bool m_isOAuth2SupportedHasBeenSet = false;

    bool m_isCustomAuthSupported;
    bool m_isCustomAuthSupportedHasBeenSet = false;

    OAuth2Defaults m_oAuth2Defaults;
    bool m_oAuth2DefaultsHasBeenSet = false;

    Aws::Vector<CustomAuthConfig> m_customAuthConfigs;
    bool m_customAuthConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
