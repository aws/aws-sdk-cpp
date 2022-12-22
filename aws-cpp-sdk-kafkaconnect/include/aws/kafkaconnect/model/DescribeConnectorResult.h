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
#include <aws/kafkaconnect/model/StateDescription.h>
#include <aws/kafkaconnect/model/WorkerConfigurationDescription.h>
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
    AWS_KAFKACONNECT_API DescribeConnectorResult();
    AWS_KAFKACONNECT_API DescribeConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DescribeConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the capacity of the connector, whether it is auto scaled or
     * provisioned.</p>
     */
    inline const CapacityDescription& GetCapacity() const{ return m_capacity; }

    /**
     * <p>Information about the capacity of the connector, whether it is auto scaled or
     * provisioned.</p>
     */
    inline void SetCapacity(const CapacityDescription& value) { m_capacity = value; }

    /**
     * <p>Information about the capacity of the connector, whether it is auto scaled or
     * provisioned.</p>
     */
    inline void SetCapacity(CapacityDescription&& value) { m_capacity = std::move(value); }

    /**
     * <p>Information about the capacity of the connector, whether it is auto scaled or
     * provisioned.</p>
     */
    inline DescribeConnectorResult& WithCapacity(const CapacityDescription& value) { SetCapacity(value); return *this;}

    /**
     * <p>Information about the capacity of the connector, whether it is auto scaled or
     * provisioned.</p>
     */
    inline DescribeConnectorResult& WithCapacity(CapacityDescription&& value) { SetCapacity(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectorConfiguration() const{ return m_connectorConfiguration; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline void SetConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_connectorConfiguration = value; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline void SetConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_connectorConfiguration = std::move(value); }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectorConfiguration(value); return *this;}

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectorConfiguration(std::move(value)); return *this;}

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(const Aws::String& key, const Aws::String& value) { m_connectorConfiguration.emplace(key, value); return *this; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(Aws::String&& key, const Aws::String& value) { m_connectorConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(const Aws::String& key, Aws::String&& value) { m_connectorConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(Aws::String&& key, Aws::String&& value) { m_connectorConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(const char* key, Aws::String&& value) { m_connectorConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(Aws::String&& key, const char* value) { m_connectorConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline DescribeConnectorResult& AddConnectorConfiguration(const char* key, const char* value) { m_connectorConfiguration.emplace(key, value); return *this; }


    /**
     * <p>A summary description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }

    /**
     * <p>A summary description of the connector.</p>
     */
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescription = value; }

    /**
     * <p>A summary description of the connector.</p>
     */
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescription = std::move(value); }

    /**
     * <p>A summary description of the connector.</p>
     */
    inline void SetConnectorDescription(const char* value) { m_connectorDescription.assign(value); }

    /**
     * <p>A summary description of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}

    /**
     * <p>A summary description of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}

    /**
     * <p>A summary description of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}


    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(const Aws::String& value) { m_connectorName = value; }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(Aws::String&& value) { m_connectorName = std::move(value); }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(const char* value) { m_connectorName.assign(value); }

    /**
     * <p>The name of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}

    /**
     * <p>The name of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}


    /**
     * <p>The state of the connector.</p>
     */
    inline const ConnectorState& GetConnectorState() const{ return m_connectorState; }

    /**
     * <p>The state of the connector.</p>
     */
    inline void SetConnectorState(const ConnectorState& value) { m_connectorState = value; }

    /**
     * <p>The state of the connector.</p>
     */
    inline void SetConnectorState(ConnectorState&& value) { m_connectorState = std::move(value); }

    /**
     * <p>The state of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorState(const ConnectorState& value) { SetConnectorState(value); return *this;}

    /**
     * <p>The state of the connector.</p>
     */
    inline DescribeConnectorResult& WithConnectorState(ConnectorState&& value) { SetConnectorState(std::move(value)); return *this;}


    /**
     * <p>The time the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the connector was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the connector was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the connector was created.</p>
     */
    inline DescribeConnectorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the connector was created.</p>
     */
    inline DescribeConnectorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The current version of the connector.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version of the connector.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersion = value; }

    /**
     * <p>The current version of the connector.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersion = std::move(value); }

    /**
     * <p>The current version of the connector.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersion.assign(value); }

    /**
     * <p>The current version of the connector.</p>
     */
    inline DescribeConnectorResult& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current version of the connector.</p>
     */
    inline DescribeConnectorResult& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the connector.</p>
     */
    inline DescribeConnectorResult& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>The Apache Kafka cluster that the connector is connected to.</p>
     */
    inline const KafkaClusterDescription& GetKafkaCluster() const{ return m_kafkaCluster; }

    /**
     * <p>The Apache Kafka cluster that the connector is connected to.</p>
     */
    inline void SetKafkaCluster(const KafkaClusterDescription& value) { m_kafkaCluster = value; }

    /**
     * <p>The Apache Kafka cluster that the connector is connected to.</p>
     */
    inline void SetKafkaCluster(KafkaClusterDescription&& value) { m_kafkaCluster = std::move(value); }

    /**
     * <p>The Apache Kafka cluster that the connector is connected to.</p>
     */
    inline DescribeConnectorResult& WithKafkaCluster(const KafkaClusterDescription& value) { SetKafkaCluster(value); return *this;}

    /**
     * <p>The Apache Kafka cluster that the connector is connected to.</p>
     */
    inline DescribeConnectorResult& WithKafkaCluster(KafkaClusterDescription&& value) { SetKafkaCluster(std::move(value)); return *this;}


    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline const KafkaClusterClientAuthenticationDescription& GetKafkaClusterClientAuthentication() const{ return m_kafkaClusterClientAuthentication; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline void SetKafkaClusterClientAuthentication(const KafkaClusterClientAuthenticationDescription& value) { m_kafkaClusterClientAuthentication = value; }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationDescription&& value) { m_kafkaClusterClientAuthentication = std::move(value); }

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline DescribeConnectorResult& WithKafkaClusterClientAuthentication(const KafkaClusterClientAuthenticationDescription& value) { SetKafkaClusterClientAuthentication(value); return *this;}

    /**
     * <p>The type of client authentication used to connect to the Apache Kafka
     * cluster. The value is NONE when no client authentication is used.</p>
     */
    inline DescribeConnectorResult& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthenticationDescription&& value) { SetKafkaClusterClientAuthentication(std::move(value)); return *this;}


    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransitDescription& GetKafkaClusterEncryptionInTransit() const{ return m_kafkaClusterEncryptionInTransit; }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline void SetKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransitDescription& value) { m_kafkaClusterEncryptionInTransit = value; }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitDescription&& value) { m_kafkaClusterEncryptionInTransit = std::move(value); }

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline DescribeConnectorResult& WithKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransitDescription& value) { SetKafkaClusterEncryptionInTransit(value); return *this;}

    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline DescribeConnectorResult& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransitDescription&& value) { SetKafkaClusterEncryptionInTransit(std::move(value)); return *this;}


    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline const Aws::String& GetKafkaConnectVersion() const{ return m_kafkaConnectVersion; }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline void SetKafkaConnectVersion(const Aws::String& value) { m_kafkaConnectVersion = value; }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline void SetKafkaConnectVersion(Aws::String&& value) { m_kafkaConnectVersion = std::move(value); }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline void SetKafkaConnectVersion(const char* value) { m_kafkaConnectVersion.assign(value); }

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline DescribeConnectorResult& WithKafkaConnectVersion(const Aws::String& value) { SetKafkaConnectVersion(value); return *this;}

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline DescribeConnectorResult& WithKafkaConnectVersion(Aws::String&& value) { SetKafkaConnectVersion(std::move(value)); return *this;}

    /**
     * <p>The version of Kafka Connect. It has to be compatible with both the Apache
     * Kafka cluster's version and the plugins.</p>
     */
    inline DescribeConnectorResult& WithKafkaConnectVersion(const char* value) { SetKafkaConnectVersion(value); return *this;}


    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline const LogDeliveryDescription& GetLogDelivery() const{ return m_logDelivery; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogDelivery(const LogDeliveryDescription& value) { m_logDelivery = value; }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogDelivery(LogDeliveryDescription&& value) { m_logDelivery = std::move(value); }

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline DescribeConnectorResult& WithLogDelivery(const LogDeliveryDescription& value) { SetLogDelivery(value); return *this;}

    /**
     * <p>Details about delivering logs to Amazon CloudWatch Logs.</p>
     */
    inline DescribeConnectorResult& WithLogDelivery(LogDeliveryDescription&& value) { SetLogDelivery(std::move(value)); return *this;}


    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline const Aws::Vector<PluginDescription>& GetPlugins() const{ return m_plugins; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline void SetPlugins(const Aws::Vector<PluginDescription>& value) { m_plugins = value; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline void SetPlugins(Aws::Vector<PluginDescription>&& value) { m_plugins = std::move(value); }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline DescribeConnectorResult& WithPlugins(const Aws::Vector<PluginDescription>& value) { SetPlugins(value); return *this;}

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline DescribeConnectorResult& WithPlugins(Aws::Vector<PluginDescription>&& value) { SetPlugins(std::move(value)); return *this;}

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline DescribeConnectorResult& AddPlugins(const PluginDescription& value) { m_plugins.push_back(value); return *this; }

    /**
     * <p>Specifies which plugins were used for this connector.</p>
     */
    inline DescribeConnectorResult& AddPlugins(PluginDescription&& value) { m_plugins.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const{ return m_serviceExecutionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline void SetServiceExecutionRoleArn(const Aws::String& value) { m_serviceExecutionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline void SetServiceExecutionRoleArn(Aws::String&& value) { m_serviceExecutionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline void SetServiceExecutionRoleArn(const char* value) { m_serviceExecutionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline DescribeConnectorResult& WithServiceExecutionRoleArn(const Aws::String& value) { SetServiceExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline DescribeConnectorResult& WithServiceExecutionRoleArn(Aws::String&& value) { SetServiceExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access Amazon Web Services resources.</p>
     */
    inline DescribeConnectorResult& WithServiceExecutionRoleArn(const char* value) { SetServiceExecutionRoleArn(value); return *this;}


    /**
     * <p>Details about the state of a connector.</p>
     */
    inline const StateDescription& GetStateDescription() const{ return m_stateDescription; }

    /**
     * <p>Details about the state of a connector.</p>
     */
    inline void SetStateDescription(const StateDescription& value) { m_stateDescription = value; }

    /**
     * <p>Details about the state of a connector.</p>
     */
    inline void SetStateDescription(StateDescription&& value) { m_stateDescription = std::move(value); }

    /**
     * <p>Details about the state of a connector.</p>
     */
    inline DescribeConnectorResult& WithStateDescription(const StateDescription& value) { SetStateDescription(value); return *this;}

    /**
     * <p>Details about the state of a connector.</p>
     */
    inline DescribeConnectorResult& WithStateDescription(StateDescription&& value) { SetStateDescription(std::move(value)); return *this;}


    /**
     * <p>Specifies which worker configuration was used for the connector.</p>
     */
    inline const WorkerConfigurationDescription& GetWorkerConfiguration() const{ return m_workerConfiguration; }

    /**
     * <p>Specifies which worker configuration was used for the connector.</p>
     */
    inline void SetWorkerConfiguration(const WorkerConfigurationDescription& value) { m_workerConfiguration = value; }

    /**
     * <p>Specifies which worker configuration was used for the connector.</p>
     */
    inline void SetWorkerConfiguration(WorkerConfigurationDescription&& value) { m_workerConfiguration = std::move(value); }

    /**
     * <p>Specifies which worker configuration was used for the connector.</p>
     */
    inline DescribeConnectorResult& WithWorkerConfiguration(const WorkerConfigurationDescription& value) { SetWorkerConfiguration(value); return *this;}

    /**
     * <p>Specifies which worker configuration was used for the connector.</p>
     */
    inline DescribeConnectorResult& WithWorkerConfiguration(WorkerConfigurationDescription&& value) { SetWorkerConfiguration(std::move(value)); return *this;}

  private:

    CapacityDescription m_capacity;

    Aws::String m_connectorArn;

    Aws::Map<Aws::String, Aws::String> m_connectorConfiguration;

    Aws::String m_connectorDescription;

    Aws::String m_connectorName;

    ConnectorState m_connectorState;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_currentVersion;

    KafkaClusterDescription m_kafkaCluster;

    KafkaClusterClientAuthenticationDescription m_kafkaClusterClientAuthentication;

    KafkaClusterEncryptionInTransitDescription m_kafkaClusterEncryptionInTransit;

    Aws::String m_kafkaConnectVersion;

    LogDeliveryDescription m_logDelivery;

    Aws::Vector<PluginDescription> m_plugins;

    Aws::String m_serviceExecutionRoleArn;

    StateDescription m_stateDescription;

    WorkerConfigurationDescription m_workerConfiguration;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
