/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/CapacityDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafkaconnect/model/KafkaClusterDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationDescription.h>
#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitDescription.h>
#include <aws/kafkaconnect/model/LogDeliveryDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/model/WorkerConfigurationDescription.h>
#include <aws/kafkaconnect/model/PluginDescription.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Summary of a connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ConnectorSummary">AWS
   * API Reference</a></p>
   */
  class ConnectorSummary
  {
  public:
    AWS_KAFKACONNECT_API ConnectorSummary() = default;
    AWS_KAFKACONNECT_API ConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline const CapacityDescription& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = CapacityDescription>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = CapacityDescription>
    ConnectorSummary& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    ConnectorSummary& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const { return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    template<typename ConnectorDescriptionT = Aws::String>
    void SetConnectorDescription(ConnectorDescriptionT&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::forward<ConnectorDescriptionT>(value); }
    template<typename ConnectorDescriptionT = Aws::String>
    ConnectorSummary& WithConnectorDescription(ConnectorDescriptionT&& value) { SetConnectorDescription(std::forward<ConnectorDescriptionT>(value)); return *this;}
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
    ConnectorSummary& WithConnectorName(ConnectorNameT&& value) { SetConnectorName(std::forward<ConnectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector.</p>
     */
    inline ConnectorState GetConnectorState() const { return m_connectorState; }
    inline bool ConnectorStateHasBeenSet() const { return m_connectorStateHasBeenSet; }
    inline void SetConnectorState(ConnectorState value) { m_connectorStateHasBeenSet = true; m_connectorState = value; }
    inline ConnectorSummary& WithConnectorState(ConnectorState value) { SetConnectorState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ConnectorSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the connector.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    ConnectorSummary& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline const KafkaClusterDescription& GetKafkaCluster() const { return m_kafkaCluster; }
    inline bool KafkaClusterHasBeenSet() const { return m_kafkaClusterHasBeenSet; }
    template<typename KafkaClusterT = KafkaClusterDescription>
    void SetKafkaCluster(KafkaClusterT&& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = std::forward<KafkaClusterT>(value); }
    template<typename KafkaClusterT = KafkaClusterDescription>
    ConnectorSummary& WithKafkaCluster(KafkaClusterT&& value) { SetKafkaCluster(std::forward<KafkaClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline const KafkaClusterClientAuthenticationDescription& GetKafkaClusterClientAuthentication() const { return m_kafkaClusterClientAuthentication; }
    inline bool KafkaClusterClientAuthenticationHasBeenSet() const { return m_kafkaClusterClientAuthenticationHasBeenSet; }
    template<typename KafkaClusterClientAuthenticationT = KafkaClusterClientAuthenticationDescription>
    void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationT&& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = std::forward<KafkaClusterClientAuthenticationT>(value); }
    template<typename KafkaClusterClientAuthenticationT = KafkaClusterClientAuthenticationDescription>
    ConnectorSummary& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationT&& value) { SetKafkaClusterClientAuthentication(std::forward<KafkaClusterClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransitDescription& GetKafkaClusterEncryptionInTransit() const { return m_kafkaClusterEncryptionInTransit; }
    inline bool KafkaClusterEncryptionInTransitHasBeenSet() const { return m_kafkaClusterEncryptionInTransitHasBeenSet; }
    template<typename KafkaClusterEncryptionInTransitT = KafkaClusterEncryptionInTransitDescription>
    void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitT&& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = std::forward<KafkaClusterEncryptionInTransitT>(value); }
    template<typename KafkaClusterEncryptionInTransitT = KafkaClusterEncryptionInTransitDescription>
    ConnectorSummary& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitT&& value) { SetKafkaClusterEncryptionInTransit(std::forward<KafkaClusterEncryptionInTransitT>(value)); return *this;}
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
    ConnectorSummary& WithKafkaConnectVersion(KafkaConnectVersionT&& value) { SetKafkaConnectVersion(std::forward<KafkaConnectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline const LogDeliveryDescription& GetLogDelivery() const { return m_logDelivery; }
    inline bool LogDeliveryHasBeenSet() const { return m_logDeliveryHasBeenSet; }
    template<typename LogDeliveryT = LogDeliveryDescription>
    void SetLogDelivery(LogDeliveryT&& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = std::forward<LogDeliveryT>(value); }
    template<typename LogDeliveryT = LogDeliveryDescription>
    ConnectorSummary& WithLogDelivery(LogDeliveryT&& value) { SetLogDelivery(std::forward<LogDeliveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline const Aws::Vector<PluginDescription>& GetPlugins() const { return m_plugins; }
    inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }
    template<typename PluginsT = Aws::Vector<PluginDescription>>
    void SetPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins = std::forward<PluginsT>(value); }
    template<typename PluginsT = Aws::Vector<PluginDescription>>
    ConnectorSummary& WithPlugins(PluginsT&& value) { SetPlugins(std::forward<PluginsT>(value)); return *this;}
    template<typename PluginsT = PluginDescription>
    ConnectorSummary& AddPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins.emplace_back(std::forward<PluginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value); }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    ConnectorSummary& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline const WorkerConfigurationDescription& GetWorkerConfiguration() const { return m_workerConfiguration; }
    inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }
    template<typename WorkerConfigurationT = WorkerConfigurationDescription>
    void SetWorkerConfiguration(WorkerConfigurationT&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::forward<WorkerConfigurationT>(value); }
    template<typename WorkerConfigurationT = WorkerConfigurationDescription>
    ConnectorSummary& WithWorkerConfiguration(WorkerConfigurationT&& value) { SetWorkerConfiguration(std::forward<WorkerConfigurationT>(value)); return *this;}
    ///@}
  private:

    CapacityDescription m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

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
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
