/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AuthenticationConfigurationPatch.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Contains the connectivity settings to update on an existing connection.
 * Include only the fields you want to change.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectivityPropertiesPatch">AWS
 * API Reference</a></p>
 */
class ConnectivityPropertiesPatch {
 public:
  AWS_DATAZONE_API ConnectivityPropertiesPatch() = default;
  AWS_DATAZONE_API ConnectivityPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ConnectivityPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the connectivity properties update.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ConnectivityPropertiesPatch& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection properties to update.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
  inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
  template <typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetConnectionProperties(ConnectionPropertiesT&& value) {
    m_connectionPropertiesHasBeenSet = true;
    m_connectionProperties = std::forward<ConnectionPropertiesT>(value);
  }
  template <typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
  ConnectivityPropertiesPatch& WithConnectionProperties(ConnectionPropertiesT&& value) {
    SetConnectionProperties(std::forward<ConnectionPropertiesT>(value));
    return *this;
  }
  template <typename ConnectionPropertiesKeyT = Aws::String, typename ConnectionPropertiesValueT = Aws::String>
  ConnectivityPropertiesPatch& AddConnectionProperties(ConnectionPropertiesKeyT&& key, ConnectionPropertiesValueT&& value) {
    m_connectionPropertiesHasBeenSet = true;
    m_connectionProperties.emplace(std::forward<ConnectionPropertiesKeyT>(key), std::forward<ConnectionPropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication settings to update.</p>
   */
  inline const AuthenticationConfigurationPatch& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
  inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
  template <typename AuthenticationConfigurationT = AuthenticationConfigurationPatch>
  void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) {
    m_authenticationConfigurationHasBeenSet = true;
    m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value);
  }
  template <typename AuthenticationConfigurationT = AuthenticationConfigurationPatch>
  ConnectivityPropertiesPatch& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) {
    SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_connectionProperties;

  AuthenticationConfigurationPatch m_authenticationConfiguration;
  bool m_descriptionHasBeenSet = false;
  bool m_connectionPropertiesHasBeenSet = false;
  bool m_authenticationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
