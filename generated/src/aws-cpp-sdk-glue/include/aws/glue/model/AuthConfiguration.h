/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Property.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The authentication configuration for a connection returned by the
   * <code>DescribeConnectionType</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuthConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthConfiguration
  {
  public:
    AWS_GLUE_API AuthConfiguration() = default;
    AWS_GLUE_API AuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authentication for a connection.</p>
     */
    inline const Property& GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    template<typename AuthenticationTypeT = Property>
    void SetAuthenticationType(AuthenticationTypeT&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::forward<AuthenticationTypeT>(value); }
    template<typename AuthenticationTypeT = Property>
    AuthConfiguration& WithAuthenticationType(AuthenticationTypeT&& value) { SetAuthenticationType(std::forward<AuthenticationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Secrets Manager.</p>
     */
    inline const Property& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Property>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Property>
    AuthConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for the OAuth2 properties. Each value is a a
     * <code>Property</code> object.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetOAuth2Properties() const { return m_oAuth2Properties; }
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
    template<typename OAuth2PropertiesT = Aws::Map<Aws::String, Property>>
    void SetOAuth2Properties(OAuth2PropertiesT&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::forward<OAuth2PropertiesT>(value); }
    template<typename OAuth2PropertiesT = Aws::Map<Aws::String, Property>>
    AuthConfiguration& WithOAuth2Properties(OAuth2PropertiesT&& value) { SetOAuth2Properties(std::forward<OAuth2PropertiesT>(value)); return *this;}
    template<typename OAuth2PropertiesKeyT = Aws::String, typename OAuth2PropertiesValueT = Property>
    AuthConfiguration& AddOAuth2Properties(OAuth2PropertiesKeyT&& key, OAuth2PropertiesValueT&& value) {
      m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(std::forward<OAuth2PropertiesKeyT>(key), std::forward<OAuth2PropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for the OAuth2 properties. Each value is a a
     * <code>Property</code> object.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetBasicAuthenticationProperties() const { return m_basicAuthenticationProperties; }
    inline bool BasicAuthenticationPropertiesHasBeenSet() const { return m_basicAuthenticationPropertiesHasBeenSet; }
    template<typename BasicAuthenticationPropertiesT = Aws::Map<Aws::String, Property>>
    void SetBasicAuthenticationProperties(BasicAuthenticationPropertiesT&& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties = std::forward<BasicAuthenticationPropertiesT>(value); }
    template<typename BasicAuthenticationPropertiesT = Aws::Map<Aws::String, Property>>
    AuthConfiguration& WithBasicAuthenticationProperties(BasicAuthenticationPropertiesT&& value) { SetBasicAuthenticationProperties(std::forward<BasicAuthenticationPropertiesT>(value)); return *this;}
    template<typename BasicAuthenticationPropertiesKeyT = Aws::String, typename BasicAuthenticationPropertiesValueT = Property>
    AuthConfiguration& AddBasicAuthenticationProperties(BasicAuthenticationPropertiesKeyT&& key, BasicAuthenticationPropertiesValueT&& value) {
      m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(std::forward<BasicAuthenticationPropertiesKeyT>(key), std::forward<BasicAuthenticationPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for the custom authentication properties. Each value
     * is a a <code>Property</code> object.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetCustomAuthenticationProperties() const { return m_customAuthenticationProperties; }
    inline bool CustomAuthenticationPropertiesHasBeenSet() const { return m_customAuthenticationPropertiesHasBeenSet; }
    template<typename CustomAuthenticationPropertiesT = Aws::Map<Aws::String, Property>>
    void SetCustomAuthenticationProperties(CustomAuthenticationPropertiesT&& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties = std::forward<CustomAuthenticationPropertiesT>(value); }
    template<typename CustomAuthenticationPropertiesT = Aws::Map<Aws::String, Property>>
    AuthConfiguration& WithCustomAuthenticationProperties(CustomAuthenticationPropertiesT&& value) { SetCustomAuthenticationProperties(std::forward<CustomAuthenticationPropertiesT>(value)); return *this;}
    template<typename CustomAuthenticationPropertiesKeyT = Aws::String, typename CustomAuthenticationPropertiesValueT = Property>
    AuthConfiguration& AddCustomAuthenticationProperties(CustomAuthenticationPropertiesKeyT&& key, CustomAuthenticationPropertiesValueT&& value) {
      m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(std::forward<CustomAuthenticationPropertiesKeyT>(key), std::forward<CustomAuthenticationPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Property m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Property m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_basicAuthenticationProperties;
    bool m_basicAuthenticationPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_customAuthenticationProperties;
    bool m_customAuthenticationPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
