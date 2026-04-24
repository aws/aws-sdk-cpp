/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AuthenticationType.h>
#include <aws/glue/model/BasicAuthenticationProperties.h>
#include <aws/glue/model/ConnectorOAuth2Properties.h>
#include <aws/glue/model/CustomAuthenticationProperties.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines the supported authentication types and required
 * properties for the connection type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectorAuthenticationConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectorAuthenticationConfiguration {
 public:
  AWS_GLUE_API ConnectorAuthenticationConfiguration() = default;
  AWS_GLUE_API ConnectorAuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ConnectorAuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of authentication types supported by this connection type, such as
   * Basic, OAuth2, or Custom authentication methods.</p>
   */
  inline const Aws::Vector<AuthenticationType>& GetAuthenticationTypes() const { return m_authenticationTypes; }
  inline bool AuthenticationTypesHasBeenSet() const { return m_authenticationTypesHasBeenSet; }
  template <typename AuthenticationTypesT = Aws::Vector<AuthenticationType>>
  void SetAuthenticationTypes(AuthenticationTypesT&& value) {
    m_authenticationTypesHasBeenSet = true;
    m_authenticationTypes = std::forward<AuthenticationTypesT>(value);
  }
  template <typename AuthenticationTypesT = Aws::Vector<AuthenticationType>>
  ConnectorAuthenticationConfiguration& WithAuthenticationTypes(AuthenticationTypesT&& value) {
    SetAuthenticationTypes(std::forward<AuthenticationTypesT>(value));
    return *this;
  }
  inline ConnectorAuthenticationConfiguration& AddAuthenticationTypes(AuthenticationType value) {
    m_authenticationTypesHasBeenSet = true;
    m_authenticationTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ConnectorOAuth2Properties& GetOAuth2Properties() const { return m_oAuth2Properties; }
  inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
  template <typename OAuth2PropertiesT = ConnectorOAuth2Properties>
  void SetOAuth2Properties(OAuth2PropertiesT&& value) {
    m_oAuth2PropertiesHasBeenSet = true;
    m_oAuth2Properties = std::forward<OAuth2PropertiesT>(value);
  }
  template <typename OAuth2PropertiesT = ConnectorOAuth2Properties>
  ConnectorAuthenticationConfiguration& WithOAuth2Properties(OAuth2PropertiesT&& value) {
    SetOAuth2Properties(std::forward<OAuth2PropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BasicAuthenticationProperties& GetBasicAuthenticationProperties() const { return m_basicAuthenticationProperties; }
  inline bool BasicAuthenticationPropertiesHasBeenSet() const { return m_basicAuthenticationPropertiesHasBeenSet; }
  template <typename BasicAuthenticationPropertiesT = BasicAuthenticationProperties>
  void SetBasicAuthenticationProperties(BasicAuthenticationPropertiesT&& value) {
    m_basicAuthenticationPropertiesHasBeenSet = true;
    m_basicAuthenticationProperties = std::forward<BasicAuthenticationPropertiesT>(value);
  }
  template <typename BasicAuthenticationPropertiesT = BasicAuthenticationProperties>
  ConnectorAuthenticationConfiguration& WithBasicAuthenticationProperties(BasicAuthenticationPropertiesT&& value) {
    SetBasicAuthenticationProperties(std::forward<BasicAuthenticationPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CustomAuthenticationProperties& GetCustomAuthenticationProperties() const { return m_customAuthenticationProperties; }
  inline bool CustomAuthenticationPropertiesHasBeenSet() const { return m_customAuthenticationPropertiesHasBeenSet; }
  template <typename CustomAuthenticationPropertiesT = CustomAuthenticationProperties>
  void SetCustomAuthenticationProperties(CustomAuthenticationPropertiesT&& value) {
    m_customAuthenticationPropertiesHasBeenSet = true;
    m_customAuthenticationProperties = std::forward<CustomAuthenticationPropertiesT>(value);
  }
  template <typename CustomAuthenticationPropertiesT = CustomAuthenticationProperties>
  ConnectorAuthenticationConfiguration& WithCustomAuthenticationProperties(CustomAuthenticationPropertiesT&& value) {
    SetCustomAuthenticationProperties(std::forward<CustomAuthenticationPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AuthenticationType> m_authenticationTypes;

  ConnectorOAuth2Properties m_oAuth2Properties;

  BasicAuthenticationProperties m_basicAuthenticationProperties;

  CustomAuthenticationProperties m_customAuthenticationProperties;
  bool m_authenticationTypesHasBeenSet = false;
  bool m_oAuth2PropertiesHasBeenSet = false;
  bool m_basicAuthenticationPropertiesHasBeenSet = false;
  bool m_customAuthenticationPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
