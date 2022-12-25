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


    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline const CapacityDescription& GetCapacity() const{ return m_capacity; }

    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline void SetCapacity(const CapacityDescription& value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline void SetCapacity(CapacityDescription&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }

    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline ConnectorSummary& WithCapacity(const CapacityDescription& value) { SetCapacity(value); return *this;}

    /**
     * <p>The connector's compute capacity settings.</p>
     */
    inline ConnectorSummary& WithCapacity(CapacityDescription&& value) { SetCapacity(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    /**
     * <p>The description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }

    /**
     * <p>The description of the connector.</p>
     */
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }

    /**
     * <p>The description of the connector.</p>
     */
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = value; }

    /**
     * <p>The description of the connector.</p>
     */
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::move(value); }

    /**
     * <p>The description of the connector.</p>
     */
    inline void SetConnectorDescription(const char* value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription.assign(value); }

    /**
     * <p>The description of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}

    /**
     * <p>The description of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}


    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }

    /**
     * <p>The name of the connector.</p>
     */
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }

    /**
     * <p>The name of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}

    /**
     * <p>The name of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}


    /**
     * <p>The state of the connector.</p>
     */
    inline const ConnectorState& GetConnectorState() const{ return m_connectorState; }

    /**
     * <p>The state of the connector.</p>
     */
    inline bool ConnectorStateHasBeenSet() const { return m_connectorStateHasBeenSet; }

    /**
     * <p>The state of the connector.</p>
     */
    inline void SetConnectorState(const ConnectorState& value) { m_connectorStateHasBeenSet = true; m_connectorState = value; }

    /**
     * <p>The state of the connector.</p>
     */
    inline void SetConnectorState(ConnectorState&& value) { m_connectorStateHasBeenSet = true; m_connectorState = std::move(value); }

    /**
     * <p>The state of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorState(const ConnectorState& value) { SetConnectorState(value); return *this;}

    /**
     * <p>The state of the connector.</p>
     */
    inline ConnectorSummary& WithConnectorState(ConnectorState&& value) { SetConnectorState(std::move(value)); return *this;}


    /**
     * <p>The time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the connector was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the connector was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the connector was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the connector was created.</p>
     */
    inline ConnectorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the connector was created.</p>
     */
    inline ConnectorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The current version of the connector.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version of the connector.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current version of the connector.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current version of the connector.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The current version of the connector.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The current version of the connector.</p>
     */
    inline ConnectorSummary& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current version of the connector.</p>
     */
    inline ConnectorSummary& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the connector.</p>
     */
    inline ConnectorSummary& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline const KafkaClusterDescription& GetKafkaCluster() const{ return m_kafkaCluster; }

    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline bool KafkaClusterHasBeenSet() const { return m_kafkaClusterHasBeenSet; }

    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline void SetKafkaCluster(const KafkaClusterDescription& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = value; }

    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline void SetKafkaCluster(KafkaClusterDescription&& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = std::move(value); }

    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline ConnectorSummary& WithKafkaCluster(const KafkaClusterDescription& value) { SetKafkaCluster(value); return *this;}

    /**
     * <p>The details of the Apache Kafka cluster to which the connector is
     * connected.</p>
     */
    inline ConnectorSummary& WithKafkaCluster(KafkaClusterDescription&& value) { SetKafkaCluster(std::move(value)); return *this;}


    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline const KafkaClusterClientAuthenticationDescription& GetKafkaClusterClientAuthentication() const{ return m_kafkaClusterClientAuthentication; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline bool KafkaClusterClientAuthenticationHasBeenSet() const { return m_kafkaClusterClientAuthenticationHasBeenSet; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline void SetKafkaClusterClientAuthentication(const KafkaClusterClientAuthenticationDescription& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = value; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationDescription&& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = std::move(value); }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline ConnectorSummary& WithKafkaClusterClientAuthentication(const KafkaClusterClientAuthenticationDescription& value) { SetKafkaClusterClientAuthentication(value); return *this;}

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline ConnectorSummary& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationDescription&& value) { SetKafkaClusterClientAuthentication(std::move(value)); return *this;}


    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransitDescription& GetKafkaClusterEncryptionInTransit() const{ return m_kafkaClusterEncryptionInTransit; }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline bool KafkaClusterEncryptionInTransitHasBeenSet() const { return m_kafkaClusterEncryptionInTransitHasBeenSet; }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline void SetKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransitDescription& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = value; }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitDescription&& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = std::move(value); }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline ConnectorSummary& WithKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransitDescription& value) { SetKafkaClusterEncryptionInTransit(value); return *this;}

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline ConnectorSummary& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitDescription&& value) { SetKafkaClusterEncryptionInTransit(std::move(value)); return *this;}


    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline const Aws::String& GetKafkaConnectVersion() const{ return m_kafkaConnectVersion; }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline bool KafkaConnectVersionHasBeenSet() const { return m_kafkaConnectVersionHasBeenSet; }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline void SetKafkaConnectVersion(const Aws::String& value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion = value; }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline void SetKafkaConnectVersion(Aws::String&& value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion = std::move(value); }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline void SetKafkaConnectVersion(const char* value) { m_kafkaConnectVersionHasBeenSet = true; m_kafkaConnectVersion.assign(value); }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline ConnectorSummary& WithKafkaConnectVersion(const Aws::String& value) { SetKafkaConnectVersion(value); return *this;}

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline ConnectorSummary& WithKafkaConnectVersion(Aws::String&& value) { SetKafkaConnectVersion(std::move(value)); return *this;}

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline ConnectorSummary& WithKafkaConnectVersion(const char* value) { SetKafkaConnectVersion(value); return *this;}


    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline const LogDeliveryDescription& GetLogDelivery() const{ return m_logDelivery; }

    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline bool LogDeliveryHasBeenSet() const { return m_logDeliveryHasBeenSet; }

    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogDelivery(const LogDeliveryDescription& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = value; }

    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogDelivery(LogDeliveryDescription&& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = std::move(value); }

    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline ConnectorSummary& WithLogDelivery(const LogDeliveryDescription& value) { SetLogDelivery(value); return *this;}

    /**
     * <p>The settings for delivering connector logs to Amazon CloudWatch Logs.</p>
     */
    inline ConnectorSummary& WithLogDelivery(LogDeliveryDescription&& value) { SetLogDelivery(std::move(value)); return *this;}


    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline const Aws::Vector<PluginDescription>& GetPlugins() const{ return m_plugins; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline void SetPlugins(const Aws::Vector<PluginDescription>& value) { m_pluginsHasBeenSet = true; m_plugins = value; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline void SetPlugins(Aws::Vector<PluginDescription>&& value) { m_pluginsHasBeenSet = true; m_plugins = std::move(value); }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline ConnectorSummary& WithPlugins(const Aws::Vector<PluginDescription>& value) { SetPlugins(value); return *this;}

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline ConnectorSummary& WithPlugins(Aws::Vector<PluginDescription>&& value) { SetPlugins(std::move(value)); return *this;}

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline ConnectorSummary& AddPlugins(const PluginDescription& value) { m_pluginsHasBeenSet = true; m_plugins.push_back(value); return *this; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline ConnectorSummary& AddPlugins(PluginDescription&& value) { m_pluginsHasBeenSet = true; m_plugins.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const{ return m_serviceExecutionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline void SetServiceExecutionRoleArn(const Aws::String& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline void SetServiceExecutionRoleArn(Aws::String&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline void SetServiceExecutionRoleArn(const char* value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline ConnectorSummary& WithServiceExecutionRoleArn(const Aws::String& value) { SetServiceExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline ConnectorSummary& WithServiceExecutionRoleArn(Aws::String&& value) { SetServiceExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline ConnectorSummary& WithServiceExecutionRoleArn(const char* value) { SetServiceExecutionRoleArn(value); return *this;}


    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline const WorkerConfigurationDescription& GetWorkerConfiguration() const{ return m_workerConfiguration; }

    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }

    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline void SetWorkerConfiguration(const WorkerConfigurationDescription& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = value; }

    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline void SetWorkerConfiguration(WorkerConfigurationDescription&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::move(value); }

    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline ConnectorSummary& WithWorkerConfiguration(const WorkerConfigurationDescription& value) { SetWorkerConfiguration(value); return *this;}

    /**
     * <p>The worker configurations that are in use with the connector.</p>
     */
    inline ConnectorSummary& WithWorkerConfiguration(WorkerConfigurationDescription&& value) { SetWorkerConfiguration(std::move(value)); return *this;}

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
