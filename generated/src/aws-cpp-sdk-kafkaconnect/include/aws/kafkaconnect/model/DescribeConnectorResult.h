/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CapacityDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafkaconnect/model/ConnectorState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafkaconnect/model/KafkaClusterDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitDescription.h>
#include <aws/kafkaconnect/model/LogDeliveryDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerConfigurationDescription.h>
#include <aws/kafkaconnect/model/StateDescription.h>
#include <aws/kafkaconnect/model/PluginDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KafkaConnect
{
namespace Model
{
  class DescribeConnectorResult
  {
  public:
    AWS_KAFKACONNECT_API DescribeConnectorResult() = default;
    AWS_KAFKACONNECT_API DescribeConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DescribeConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the capacity of the connector, whether it is auto scaled or
     * provisioned.</p>
     */
    inline const CapacityDescription& GetCapacity() const { return m_capacity; }
    template<typename CapacityT = CapacityDescription>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = CapacityDescription>
    DescribeConnectorResult& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    DescribeConnectorResult& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectorConfiguration() const { return m_connectorConfiguration; }
    template<typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectorConfiguration(ConnectorConfigurationT&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value); }
    template<typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
    DescribeConnectorResult& WithConnectorConfiguration(ConnectorConfigurationT&& value) { SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value)); return *this;}
    template<typename ConnectorConfigurationKeyT = Aws::String, typename ConnectorConfigurationValueT = Aws::String>
    DescribeConnectorResult& AddConnectorConfiguration(ConnectorConfigurationKeyT&& key, ConnectorConfigurationValueT&& value) {
      m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(std::forward<ConnectorConfigurationKeyT>(key), std::forward<ConnectorConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A summary description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const { return m_connectorDescription; }
    template<typename ConnectorDescriptionT = Aws::String>
    void SetConnectorDescription(ConnectorDescriptionT&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::forward<ConnectorDescriptionT>(value); }
    template<typename ConnectorDescriptionT = Aws::String>
    DescribeConnectorResult& WithConnectorDescription(ConnectorDescriptionT&& value) { SetConnectorDescription(std::forward<ConnectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const { return m_connectorName; }
    template<typename ConnectorNameT = Aws::String>
    void SetConnectorName(ConnectorNameT&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::forward<ConnectorNameT>(value); }
    template<typename ConnectorNameT = Aws::String>
    DescribeConnectorResult& WithConnectorName(ConnectorNameT&& value) { SetConnectorName(std::forward<ConnectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector.</p>
     */
    inline ConnectorState GetConnectorState() const { return m_connectorState; }
    inline void SetConnectorState(ConnectorState value) { m_connectorStateHasBeenSet = true; m_connectorState = value; }
    inline DescribeConnectorResult& WithConnectorState(ConnectorState value) { SetConnectorState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeConnectorResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the connector.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    DescribeConnectorResult& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Apache Kafka cluster that the connector is connected to.</p>
     */
    inline const KafkaClusterDescription& GetKafkaCluster() const { return m_kafkaCluster; }
    template<typename KafkaClusterT = KafkaClusterDescription>
    void SetKafkaCluster(KafkaClusterT&& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = std::forward<KafkaClusterT>(value); }
    template<typename KafkaClusterT = KafkaClusterDescription>
    DescribeConnectorResult& WithKafkaCluster(KafkaClusterT&& value) { SetKafkaCluster(std::forward<KafkaClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline const KafkaClusterClientAuthenticationDescription& GetKafkaClusterClientAuthentication() const { return m_kafkaClusterClientAuthentication; }
    template<typename KafkaClusterClientAuthenticationT = KafkaClusterClientAuthenticationDescription>
    void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationT&& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = std::forward<KafkaClusterClientAuthenticationT>(value); }
    template<typename KafkaClusterClientAuthenticationT = KafkaClusterClientAuthenticationDescription>
    DescribeConnectorResult& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationT&& value) { SetKafkaClusterClientAuthentication(std::forward<KafkaClusterClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransitDescription& GetKafkaClusterEncryptionInTransit() const { return m_kafkaClusterEncryptionInTransit; }
    template<typename KafkaClusterEncryptionInTransitT = KafkaClusterEncryptionInTransitDescription>
    void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitT&& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = std::forward<KafkaClusterEncryptionInTransitT>(value); }
    template<typename KafkaClusterEncryptionInTransitT = KafkaClusterEncryptionInTransitDescription>
    DescribeConnectorResult& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitT&& value) { SetKafkaClusterEncryptionInTransit(std::forward<KafkaClusterEncryptionInTransitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline const Aws::String& GetKafkaConnectVersion() const { return m_kafkaConnectVersion; }
    template<typename KafkaConnectVersionT = Aws::String>
    void SetKafkaConnectVersion(KafkaConnectVersionT&& value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion = std::forward<KafkaConnectVersionT>(value); }
    template<typename KafkaConnectVersionT = Aws::String>
    DescribeConnectorResult& WithKafkaConnectVersion(KafkaConnectVersionT&& value) { SetKafkaConnectVersion(std::forward<KafkaConnectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline const LogDeliveryDescription& GetLogDelivery() const { return m_logDelivery; }
    template<typename LogDeliveryT = LogDeliveryDescription>
    void SetLogDelivery(LogDeliveryT&& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = std::forward<LogDeliveryT>(value); }
    template<typename LogDeliveryT = LogDeliveryDescription>
    DescribeConnectorResult& WithLogDelivery(LogDeliveryT&& value) { SetLogDelivery(std::forward<LogDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline const Aws::Vector<PluginDescription>& GetPlugins() const { return m_plugins; }
    template<typename PluginsT = Aws::Vector<PluginDescription>>
    void SetPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins = std::forward<PluginsT>(value); }
    template<typename PluginsT = Aws::Vector<PluginDescription>>
    DescribeConnectorResult& WithPlugins(PluginsT&& value) { SetPlugins(std::forward<PluginsT>(value)); return *this;}
    template<typename PluginsT = PluginDescription>
    DescribeConnectorResult& AddPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins.emplace_back(std::forward<PluginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value); }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    DescribeConnectorResult& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which worker configuration was used for the connector.</p>
     */
    inline const WorkerConfigurationDescription& GetWorkerConfiguration() const { return m_workerConfiguration; }
    template<typename WorkerConfigurationT = WorkerConfigurationDescription>
    void SetWorkerConfiguration(WorkerConfigurationT&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::forward<WorkerConfigurationT>(value); }
    template<typename WorkerConfigurationT = WorkerConfigurationDescription>
    DescribeConnectorResult& WithWorkerConfiguration(WorkerConfigurationT&& value) { SetWorkerConfiguration(std::forward<WorkerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the state of a connector.</p>
     */
    inline const StateDescription& GetStateDescription() const { return m_stateDescription; }
    template<typename StateDescriptionT = StateDescription>
    void SetStateDescription(StateDescriptionT&& value) { m_stateDescriptionHasBeenSet = true; m_stateDescription = std::forward<StateDescriptionT>(value); }
    template<typename StateDescriptionT = StateDescription>
    DescribeConnectorResult& WithStateDescription(StateDescriptionT&& value) { SetStateDescription(std::forward<StateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CapacityDescription m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectorConfiguration;
    bool m_connectorConfigurationHasBeenSet = false;

    Aws::String m_connectorDescription;
    bool m_connectorDescriptionHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    ConnectorState m_connectorState{ConnectorState::NOT_SET};
    bool m_connectorStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    KafkaClusterDescription m_kafkaCluster;
    bool m_kafkaClusterHasBeenSet = false;

    KafkaClusterClientAuthenticationDescription m_kafkaClusterClientAuthentication;
    bool m_kafkaClusterClientAuthenticationHasBeenSet = false;

    KafkaClusterEncryptionInTransitDescription m_kafkaClusterEncryptionInTransit;
    bool m_kafkaClusterEncryptionInTransitHasBeenSet = false;

    Aws::String m_kafkaConnectVersion;
    bool m_kafkaConnectVersionHasBeenSet = false;

    LogDeliveryDescription m_logDelivery;
    bool m_logDeliveryHasBeenSet = false;

    Aws::Vector<PluginDescription> m_plugins;
    bool m_pluginsHasBeenSet = false;

    Aws::String m_serviceExecutionRoleArn;
    bool m_serviceExecutionRoleArnHasBeenSet = false;

    WorkerConfigurationDescription m_workerConfiguration;
    bool m_workerConfigurationHasBeenSet = false;

    StateDescription m_stateDescription;
    bool m_stateDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
