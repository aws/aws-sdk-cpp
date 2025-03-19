/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/model/Capacity.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/KafkaCluster.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthentication.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransit.h>
#include <aws/kafkaconnect/model/LogDelivery.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerConfiguration.h>
#include <aws/kafkaconnect/model/Plugin.h>
#include <utility>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class CreateConnectorRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API CreateConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Information about the capacity allocated to the connector. Exactly one of the
     * two properties must be specified.</p>
     */
    inline const Capacity& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = Capacity>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = Capacity>
    CreateConnectorRequest& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectorConfiguration() const { return m_connectorConfiguration; }
    inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
    template<typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectorConfiguration(ConnectorConfigurationT&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value); }
    template<typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
    CreateConnectorRequest& WithConnectorConfiguration(ConnectorConfigurationT&& value) { SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value)); return *this;}
    template<typename ConnectorConfigurationKeyT = Aws::String, typename ConnectorConfigurationValueT = Aws::String>
    CreateConnectorRequest& AddConnectorConfiguration(ConnectorConfigurationKeyT&& key, ConnectorConfigurationValueT&& value) {
      m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(std::forward<ConnectorConfigurationKeyT>(key), std::forward<ConnectorConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A summary description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const { return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    template<typename ConnectorDescriptionT = Aws::String>
    void SetConnectorDescription(ConnectorDescriptionT&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::forward<ConnectorDescriptionT>(value); }
    template<typename ConnectorDescriptionT = Aws::String>
    CreateConnectorRequest& WithConnectorDescription(ConnectorDescriptionT&& value) { SetConnectorDescription(std::forward<ConnectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const { return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    template<typename ConnectorNameT = Aws::String>
    void SetConnectorName(ConnectorNameT&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::forward<ConnectorNameT>(value); }
    template<typename ConnectorNameT = Aws::String>
    CreateConnectorRequest& WithConnectorName(ConnectorNameT&& value) { SetConnectorName(std::forward<ConnectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which Apache Kafka cluster to connect to.</p>
     */
    inline const KafkaCluster& GetKafkaCluster() const { return m_kafkaCluster; }
    inline bool KafkaClusterHasBeenSet() const { return m_kafkaClusterHasBeenSet; }
    template<typename KafkaClusterT = KafkaCluster>
    void SetKafkaCluster(KafkaClusterT&& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = std::forward<KafkaClusterT>(value); }
    template<typename KafkaClusterT = KafkaCluster>
    CreateConnectorRequest& WithKafkaCluster(KafkaClusterT&& value) { SetKafkaCluster(std::forward<KafkaClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the client authentication used by the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterClientAuthentication& GetKafkaClusterClientAuthentication() const { return m_kafkaClusterClientAuthentication; }
    inline bool KafkaClusterClientAuthenticationHasBeenSet() const { return m_kafkaClusterClientAuthenticationHasBeenSet; }
    template<typename KafkaClusterClientAuthenticationT = KafkaClusterClientAuthentication>
    void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationT&& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = std::forward<KafkaClusterClientAuthenticationT>(value); }
    template<typename KafkaClusterClientAuthenticationT = KafkaClusterClientAuthentication>
    CreateConnectorRequest& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationT&& value) { SetKafkaClusterClientAuthentication(std::forward<KafkaClusterClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransit& GetKafkaClusterEncryptionInTransit() const { return m_kafkaClusterEncryptionInTransit; }
    inline bool KafkaClusterEncryptionInTransitHasBeenSet() const { return m_kafkaClusterEncryptionInTransitHasBeenSet; }
    template<typename KafkaClusterEncryptionInTransitT = KafkaClusterEncryptionInTransit>
    void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitT&& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = std::forward<KafkaClusterEncryptionInTransitT>(value); }
    template<typename KafkaClusterEncryptionInTransitT = KafkaClusterEncryptionInTransit>
    CreateConnectorRequest& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitT&& value) { SetKafkaClusterEncryptionInTransit(std::forward<KafkaClusterEncryptionInTransitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline const Aws::String& GetKafkaConnectVersion() const { return m_kafkaConnectVersion; }
    inline bool KafkaConnectVersionHasBeenSet() const { return m_kafkaConnectVersionHasBeenSet; }
    template<typename KafkaConnectVersionT = Aws::String>
    void SetKafkaConnectVersion(KafkaConnectVersionT&& value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion = std::forward<KafkaConnectVersionT>(value); }
    template<typename KafkaConnectVersionT = Aws::String>
    CreateConnectorRequest& WithKafkaConnectVersion(KafkaConnectVersionT&& value) { SetKafkaConnectVersion(std::forward<KafkaConnectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about log delivery.</p>
     */
    inline const LogDelivery& GetLogDelivery() const { return m_logDelivery; }
    inline bool LogDeliveryHasBeenSet() const { return m_logDeliveryHasBeenSet; }
    template<typename LogDeliveryT = LogDelivery>
    void SetLogDelivery(LogDeliveryT&& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = std::forward<LogDeliveryT>(value); }
    template<typename LogDeliveryT = LogDelivery>
    CreateConnectorRequest& WithLogDelivery(LogDeliveryT&& value) { SetLogDelivery(std::forward<LogDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Amazon MSK Connect does not currently support specifying multiple
     * plugins as a list. To use more than one plugin for your connector, you can
     * create a single custom plugin using a ZIP file that bundles multiple plugins
     * together.</p>  <p>Specifies which plugin to use for the connector.
     * You must specify a single-element list containing one <code>customPlugin</code>
     * object.</p>
     */
    inline const Aws::Vector<Plugin>& GetPlugins() const { return m_plugins; }
    inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }
    template<typename PluginsT = Aws::Vector<Plugin>>
    void SetPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins = std::forward<PluginsT>(value); }
    template<typename PluginsT = Aws::Vector<Plugin>>
    CreateConnectorRequest& WithPlugins(PluginsT&& value) { SetPlugins(std::forward<PluginsT>(value)); return *this;}
    template<typename PluginsT = Plugin>
    CreateConnectorRequest& AddPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins.emplace_back(std::forward<PluginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access the Amazon Web Services resources that it needs. The types of resources
     * depends on the logic of the connector. For example, a connector that has Amazon
     * S3 as a destination must have permissions that allow it to write to the S3
     * destination bucket.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value); }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    CreateConnectorRequest& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which worker configuration to use with the connector.</p>
     */
    inline const WorkerConfiguration& GetWorkerConfiguration() const { return m_workerConfiguration; }
    inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }
    template<typename WorkerConfigurationT = WorkerConfiguration>
    void SetWorkerConfiguration(WorkerConfigurationT&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::forward<WorkerConfigurationT>(value); }
    template<typename WorkerConfigurationT = WorkerConfiguration>
    CreateConnectorRequest& WithWorkerConfiguration(WorkerConfigurationT&& value) { SetWorkerConfiguration(std::forward<WorkerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags you want to attach to the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConnectorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConnectorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Capacity m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectorConfiguration;
    bool m_connectorConfigurationHasBeenSet = false;

    Aws::String m_connectorDescription;
    bool m_connectorDescriptionHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    KafkaCluster m_kafkaCluster;
    bool m_kafkaClusterHasBeenSet = false;

    KafkaClusterClientAuthentication m_kafkaClusterClientAuthentication;
    bool m_kafkaClusterClientAuthenticationHasBeenSet = false;

    KafkaClusterEncryptionInTransit m_kafkaClusterEncryptionInTransit;
    bool m_kafkaClusterEncryptionInTransitHasBeenSet = false;

    Aws::String m_kafkaConnectVersion;
    bool m_kafkaConnectVersionHasBeenSet = false;

    LogDelivery m_logDelivery;
    bool m_logDeliveryHasBeenSet = false;

    Aws::Vector<Plugin> m_plugins;
    bool m_pluginsHasBeenSet = false;

    Aws::String m_serviceExecutionRoleArn;
    bool m_serviceExecutionRoleArnHasBeenSet = false;

    WorkerConfiguration m_workerConfiguration;
    bool m_workerConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
