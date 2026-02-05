/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectionPropertiesConfiguration.h>
#include <aws/glue/model/ConnectorAuthenticationConfiguration.h>
#include <aws/glue/model/IntegrationType.h>
#include <aws/glue/model/RestConfiguration.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class RegisterConnectionTypeRequest : public GlueRequest {
 public:
  AWS_GLUE_API RegisterConnectionTypeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterConnectionType"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the connection type. Must be between 1 and 255 characters and
   * must be prefixed with "REST-" to indicate it is a REST-based connector.</p>
   */
  inline const Aws::String& GetConnectionType() const { return m_connectionType; }
  inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
  template <typename ConnectionTypeT = Aws::String>
  void SetConnectionType(ConnectionTypeT&& value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = std::forward<ConnectionTypeT>(value);
  }
  template <typename ConnectionTypeT = Aws::String>
  RegisterConnectionTypeRequest& WithConnectionType(ConnectionTypeT&& value) {
    SetConnectionType(std::forward<ConnectionTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The integration type for the connection. Currently only "REST" protocol is
   * supported.</p>
   */
  inline IntegrationType GetIntegrationType() const { return m_integrationType; }
  inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }
  inline void SetIntegrationType(IntegrationType value) {
    m_integrationTypeHasBeenSet = true;
    m_integrationType = value;
  }
  inline RegisterConnectionTypeRequest& WithIntegrationType(IntegrationType value) {
    SetIntegrationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the connection type. Can be up to 2048 characters and
   * provides details about the purpose and functionality of the connection type.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RegisterConnectionTypeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the base URL and additional request parameters needed during
   * connection creation for this connection type.</p>
   */
  inline const ConnectionPropertiesConfiguration& GetConnectionProperties() const { return m_connectionProperties; }
  inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
  template <typename ConnectionPropertiesT = ConnectionPropertiesConfiguration>
  void SetConnectionProperties(ConnectionPropertiesT&& value) {
    m_connectionPropertiesHasBeenSet = true;
    m_connectionProperties = std::forward<ConnectionPropertiesT>(value);
  }
  template <typename ConnectionPropertiesT = ConnectionPropertiesConfiguration>
  RegisterConnectionTypeRequest& WithConnectionProperties(ConnectionPropertiesT&& value) {
    SetConnectionProperties(std::forward<ConnectionPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the supported authentication types and required properties for this
   * connection type, including Basic, OAuth2, and Custom authentication methods.</p>
   */
  inline const ConnectorAuthenticationConfiguration& GetConnectorAuthenticationConfiguration() const {
    return m_connectorAuthenticationConfiguration;
  }
  inline bool ConnectorAuthenticationConfigurationHasBeenSet() const { return m_connectorAuthenticationConfigurationHasBeenSet; }
  template <typename ConnectorAuthenticationConfigurationT = ConnectorAuthenticationConfiguration>
  void SetConnectorAuthenticationConfiguration(ConnectorAuthenticationConfigurationT&& value) {
    m_connectorAuthenticationConfigurationHasBeenSet = true;
    m_connectorAuthenticationConfiguration = std::forward<ConnectorAuthenticationConfigurationT>(value);
  }
  template <typename ConnectorAuthenticationConfigurationT = ConnectorAuthenticationConfiguration>
  RegisterConnectionTypeRequest& WithConnectorAuthenticationConfiguration(ConnectorAuthenticationConfigurationT&& value) {
    SetConnectorAuthenticationConfiguration(std::forward<ConnectorAuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the HTTP request and response configuration, validation endpoint, and
   * entity configurations for REST API interactions.</p>
   */
  inline const RestConfiguration& GetRestConfiguration() const { return m_restConfiguration; }
  inline bool RestConfigurationHasBeenSet() const { return m_restConfigurationHasBeenSet; }
  template <typename RestConfigurationT = RestConfiguration>
  void SetRestConfiguration(RestConfigurationT&& value) {
    m_restConfigurationHasBeenSet = true;
    m_restConfiguration = std::forward<RestConfigurationT>(value);
  }
  template <typename RestConfigurationT = RestConfiguration>
  RegisterConnectionTypeRequest& WithRestConfiguration(RestConfigurationT&& value) {
    SetRestConfiguration(std::forward<RestConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags you assign to the connection type.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RegisterConnectionTypeRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RegisterConnectionTypeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionType;

  IntegrationType m_integrationType{IntegrationType::NOT_SET};

  Aws::String m_description;

  ConnectionPropertiesConfiguration m_connectionProperties;

  ConnectorAuthenticationConfiguration m_connectorAuthenticationConfiguration;

  RestConfiguration m_restConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_connectionTypeHasBeenSet = false;
  bool m_integrationTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_connectionPropertiesHasBeenSet = false;
  bool m_connectorAuthenticationConfigurationHasBeenSet = false;
  bool m_restConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
