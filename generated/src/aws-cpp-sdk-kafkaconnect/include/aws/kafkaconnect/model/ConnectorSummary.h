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
    AWS_KAFKACONNECT_API ConnectorSummary();
    AWS_KAFKACONNECT_API ConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline const CapacityDescription& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const CapacityDescription& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(CapacityDescription&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline ConnectorSummary& WithCapacity(const CapacityDescription& value) { SetCapacity(value); return *this;}
    inline ConnectorSummary& WithCapacity(CapacityDescription&& value) { SetCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }
    inline ConnectorSummary& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline ConnectorSummary& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline ConnectorSummary& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = value; }
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::move(value); }
    inline void SetConnectorDescription(const char* value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription.assign(value); }
    inline ConnectorSummary& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}
    inline ConnectorSummary& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}
    inline ConnectorSummary& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }
    inline ConnectorSummary& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}
    inline ConnectorSummary& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}
    inline ConnectorSummary& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector.</p>
     */
    inline const ConnectorState& GetConnectorState() const{ return m_connectorState; }
    inline bool ConnectorStateHasBeenSet() const { return m_connectorStateHasBeenSet; }
    inline void SetConnectorState(const ConnectorState& value) { m_connectorStateHasBeenSet = true; m_connectorState = value; }
    inline void SetConnectorState(ConnectorState&& value) { m_connectorStateHasBeenSet = true; m_connectorState = std::move(value); }
    inline ConnectorSummary& WithConnectorState(const ConnectorState& value) { SetConnectorState(value); return *this;}
    inline ConnectorSummary& WithConnectorState(ConnectorState&& value) { SetConnectorState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ConnectorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ConnectorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the connector.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline ConnectorSummary& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline ConnectorSummary& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline ConnectorSummary& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline const KafkaClusterDescription& GetKafkaCluster() const{ return m_kafkaCluster; }
    inline bool KafkaClusterHasBeenSet() const { return m_kafkaClusterHasBeenSet; }
    inline void SetKafkaCluster(const KafkaClusterDescription& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = value; }
    inline void SetKafkaCluster(KafkaClusterDescription&& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = std::move(value); }
    inline ConnectorSummary& WithKafkaCluster(const KafkaClusterDescription& value) { SetKafkaCluster(value); return *this;}
    inline ConnectorSummary& WithKafkaCluster(KafkaClusterDescription&& value) { SetKafkaCluster(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline const KafkaClusterClientAuthenticationDescription& GetKafkaClusterClientAuthentication() const{ return m_kafkaClusterClientAuthentication; }
    inline bool KafkaClusterClientAuthenticationHasBeenSet() const { return m_kafkaClusterClientAuthenticationHasBeenSet; }
    inline void SetKafkaClusterClientAuthentication(const KafkaClusterClientAuthenticationDescription& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = value; }
    inline void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationDescription&& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = std::move(value); }
    inline ConnectorSummary& WithKafkaClusterClientAuthentication(const KafkaClusterClientAuthenticationDescription& value) { SetKafkaClusterClientAuthentication(value); return *this;}
    inline ConnectorSummary& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationDescription&& value) { SetKafkaClusterClientAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransitDescription& GetKafkaClusterEncryptionInTransit() const{ return m_kafkaClusterEncryptionInTransit; }
    inline bool KafkaClusterEncryptionInTransitHasBeenSet() const { return m_kafkaClusterEncryptionInTransitHasBeenSet; }
    inline void SetKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransitDescription& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = value; }
    inline void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitDescription&& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = std::move(value); }
    inline ConnectorSummary& WithKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransitDescription& value) { SetKafkaClusterEncryptionInTransit(value); return *this;}
    inline ConnectorSummary& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitDescription&& value) { SetKafkaClusterEncryptionInTransit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline const Aws::String& GetKafkaConnectVersion() const{ return m_kafkaConnectVersion; }
    inline bool KafkaConnectVersionHasBeenSet() const { return m_kafkaConnectVersionHasBeenSet; }
    inline void SetKafkaConnectVersion(const Aws::String& value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion = value; }
    inline void SetKafkaConnectVersion(Aws::String&& value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion = std::move(value); }
    inline void SetKafkaConnectVersion(const char* value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion.assign(value); }
    inline ConnectorSummary& WithKafkaConnectVersion(const Aws::String& value) { SetKafkaConnectVersion(value); return *this;}
    inline ConnectorSummary& WithKafkaConnectVersion(Aws::String&& value) { SetKafkaConnectVersion(std::move(value)); return *this;}
    inline ConnectorSummary& WithKafkaConnectVersion(const char* value) { SetKafkaConnectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline const LogDeliveryDescription& GetLogDelivery() const{ return m_logDelivery; }
    inline bool LogDeliveryHasBeenSet() const { return m_logDeliveryHasBeenSet; }
    inline void SetLogDelivery(const LogDeliveryDescription& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = value; }
    inline void SetLogDelivery(LogDeliveryDescription&& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = std::move(value); }
    inline ConnectorSummary& WithLogDelivery(const LogDeliveryDescription& value) { SetLogDelivery(value); return *this;}
    inline ConnectorSummary& WithLogDelivery(LogDeliveryDescription&& value) { SetLogDelivery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline const Aws::Vector<PluginDescription>& GetPlugins() const{ return m_plugins; }
    inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }
    inline void SetPlugins(const Aws::Vector<PluginDescription>& value) { m_pluginsHasBeenSet = true; m_plugins = value; }
    inline void SetPlugins(Aws::Vector<PluginDescription>&& value) { m_pluginsHasBeenSet = true; m_plugins = std::move(value); }
    inline ConnectorSummary& WithPlugins(const Aws::Vector<PluginDescription>& value) { SetPlugins(value); return *this;}
    inline ConnectorSummary& WithPlugins(Aws::Vector<PluginDescription>&& value) { SetPlugins(std::move(value)); return *this;}
    inline ConnectorSummary& AddPlugins(const PluginDescription& value) { m_pluginsHasBeenSet = true; m_plugins.push_back(value); return *this; }
    inline ConnectorSummary& AddPlugins(PluginDescription&& value) { m_pluginsHasBeenSet = true; m_plugins.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const{ return m_serviceExecutionRoleArn; }
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
    inline void SetServiceExecutionRoleArn(const Aws::String& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = value; }
    inline void SetServiceExecutionRoleArn(Aws::String&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::move(value); }
    inline void SetServiceExecutionRoleArn(const char* value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn.assign(value); }
    inline ConnectorSummary& WithServiceExecutionRoleArn(const Aws::String& value) { SetServiceExecutionRoleArn(value); return *this;}
    inline ConnectorSummary& WithServiceExecutionRoleArn(Aws::String&& value) { SetServiceExecutionRoleArn(std::move(value)); return *this;}
    inline ConnectorSummary& WithServiceExecutionRoleArn(const char* value) { SetServiceExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline const WorkerConfigurationDescription& GetWorkerConfiguration() const{ return m_workerConfiguration; }
    inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }
    inline void SetWorkerConfiguration(const WorkerConfigurationDescription& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = value; }
    inline void SetWorkerConfiguration(WorkerConfigurationDescription&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::move(value); }
    inline ConnectorSummary& WithWorkerConfiguration(const WorkerConfigurationDescription& value) { SetWorkerConfiguration(value); return *this;}
    inline ConnectorSummary& WithWorkerConfiguration(WorkerConfigurationDescription&& value) { SetWorkerConfiguration(std::move(value)); return *this;}
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

    ConnectorState m_connectorState;
    bool m_connectorStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
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
