/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CapacityUpdate.h>
#include <aws/kafkaconnect/model/PluginUpdate.h>
#include <aws/kafkaconnect/model/WorkerConfigurationUpdate.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace KafkaConnect {
namespace Model {

/**
 */
class UpdateConnectorRequest : public KafkaConnectRequest {
 public:
  AWS_KAFKACONNECT_API UpdateConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

  AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;

  AWS_KAFKACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The target capacity.</p>
   */
  inline const CapacityUpdate& GetCapacity() const { return m_capacity; }
  inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
  template <typename CapacityT = CapacityUpdate>
  void SetCapacity(CapacityT&& value) {
    m_capacityHasBeenSet = true;
    m_capacity = std::forward<CapacityT>(value);
  }
  template <typename CapacityT = CapacityUpdate>
  UpdateConnectorRequest& WithCapacity(CapacityT&& value) {
    SetCapacity(std::forward<CapacityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of keys to values that represent the configuration for the
   * connector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetConnectorConfiguration() const { return m_connectorConfiguration; }
  inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
  template <typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
  void SetConnectorConfiguration(ConnectorConfigurationT&& value) {
    m_connectorConfigurationHasBeenSet = true;
    m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value);
  }
  template <typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
  UpdateConnectorRequest& WithConnectorConfiguration(ConnectorConfigurationT&& value) {
    SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value));
    return *this;
  }
  template <typename ConnectorConfigurationKeyT = Aws::String, typename ConnectorConfigurationValueT = Aws::String>
  UpdateConnectorRequest& AddConnectorConfiguration(ConnectorConfigurationKeyT&& key, ConnectorConfigurationValueT&& value) {
    m_connectorConfigurationHasBeenSet = true;
    m_connectorConfiguration.emplace(std::forward<ConnectorConfigurationKeyT>(key), std::forward<ConnectorConfigurationValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the update bypasses connector-level and task-level health
   * checks. If <code>true</code>, the update skips the health checks. The update
   * stays in effect even if the connector or its tasks are unhealthy, and Amazon MSK
   * Connect doesn't roll it back. If <code>false</code> or not specified, the health
   * checks run. If they fail, MSK Connect automatically rolls the connector back to
   * its previous configuration, and the update doesn't take effect. To update a
   * connector that is in the <code>PAUSED</code> state, you must set this parameter
   * to <code>true</code>.</p>
   */
  inline bool GetSkipHealthValidation() const { return m_skipHealthValidation; }
  inline bool SkipHealthValidationHasBeenSet() const { return m_skipHealthValidationHasBeenSet; }
  inline void SetSkipHealthValidation(bool value) {
    m_skipHealthValidationHasBeenSet = true;
    m_skipHealthValidation = value;
  }
  inline UpdateConnectorRequest& WithSkipHealthValidation(bool value) {
    SetSkipHealthValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  UpdateConnectorRequest& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current version of the connector that you want to update.</p>
   */
  inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
  inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
  template <typename CurrentVersionT = Aws::String>
  void SetCurrentVersion(CurrentVersionT&& value) {
    m_currentVersionHasBeenSet = true;
    m_currentVersion = std::forward<CurrentVersionT>(value);
  }
  template <typename CurrentVersionT = Aws::String>
  UpdateConnectorRequest& WithCurrentVersion(CurrentVersionT&& value) {
    SetCurrentVersion(std::forward<CurrentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <p>Amazon MSK Connect does not currently support specifying
   * multiple plugins as a list. To use more than one plugin for your connector, you
   * can create a single custom plugin using a ZIP file that bundles multiple plugins
   * together.</p>  <p>Specifies which plugin to use for the connector.
   * You must specify a single-element list containing one <code>customPlugin</code>
   * object. If you don't specify this parameter, the connector keeps its current
   * plugin.</p></p>
   */
  inline const Aws::Vector<PluginUpdate>& GetPlugins() const { return m_plugins; }
  inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }
  template <typename PluginsT = Aws::Vector<PluginUpdate>>
  void SetPlugins(PluginsT&& value) {
    m_pluginsHasBeenSet = true;
    m_plugins = std::forward<PluginsT>(value);
  }
  template <typename PluginsT = Aws::Vector<PluginUpdate>>
  UpdateConnectorRequest& WithPlugins(PluginsT&& value) {
    SetPlugins(std::forward<PluginsT>(value));
    return *this;
  }
  template <typename PluginsT = PluginUpdate>
  UpdateConnectorRequest& AddPlugins(PluginsT&& value) {
    m_pluginsHasBeenSet = true;
    m_plugins.emplace_back(std::forward<PluginsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker configuration to use with the connector. Specify the Amazon
   * Resource Name (ARN) and the revision of the worker configuration. You can't
   * specify both <code>workerConfiguration</code> and
   * <code>useDefaultWorkerConfiguration</code> in the same request. If you specify
   * neither parameter, the connector keeps its current worker configuration.</p>
   */
  inline const WorkerConfigurationUpdate& GetWorkerConfiguration() const { return m_workerConfiguration; }
  inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }
  template <typename WorkerConfigurationT = WorkerConfigurationUpdate>
  void SetWorkerConfiguration(WorkerConfigurationT&& value) {
    m_workerConfigurationHasBeenSet = true;
    m_workerConfiguration = std::forward<WorkerConfigurationT>(value);
  }
  template <typename WorkerConfigurationT = WorkerConfigurationUpdate>
  UpdateConnectorRequest& WithWorkerConfiguration(WorkerConfigurationT&& value) {
    SetWorkerConfiguration(std::forward<WorkerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to switch the connector to the default worker configuration
   * that Amazon MSK Connect provides. If <code>true</code>, the connector stops
   * using its custom worker configuration and uses the default worker configuration
   * instead. If <code>false</code> or not specified, the connector keeps its current
   * worker configuration. You can't specify both
   * <code>useDefaultWorkerConfiguration</code> and <code>workerConfiguration</code>
   * in the same request.</p>
   */
  inline bool GetUseDefaultWorkerConfiguration() const { return m_useDefaultWorkerConfiguration; }
  inline bool UseDefaultWorkerConfigurationHasBeenSet() const { return m_useDefaultWorkerConfigurationHasBeenSet; }
  inline void SetUseDefaultWorkerConfiguration(bool value) {
    m_useDefaultWorkerConfigurationHasBeenSet = true;
    m_useDefaultWorkerConfiguration = value;
  }
  inline UpdateConnectorRequest& WithUseDefaultWorkerConfiguration(bool value) {
    SetUseDefaultWorkerConfiguration(value);
    return *this;
  }
  ///@}
 private:
  CapacityUpdate m_capacity;

  Aws::Map<Aws::String, Aws::String> m_connectorConfiguration;

  bool m_skipHealthValidation{false};

  Aws::String m_connectorArn;

  Aws::String m_currentVersion;

  Aws::Vector<PluginUpdate> m_plugins;

  WorkerConfigurationUpdate m_workerConfiguration;

  bool m_useDefaultWorkerConfiguration{false};
  bool m_capacityHasBeenSet = false;
  bool m_connectorConfigurationHasBeenSet = false;
  bool m_skipHealthValidationHasBeenSet = false;
  bool m_connectorArnHasBeenSet = false;
  bool m_currentVersionHasBeenSet = false;
  bool m_pluginsHasBeenSet = false;
  bool m_workerConfigurationHasBeenSet = false;
  bool m_useDefaultWorkerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
