﻿/**
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
    AWS_KAFKACONNECT_API CreateConnectorRequest();

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
    inline const Capacity& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const Capacity& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(Capacity&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline CreateConnectorRequest& WithCapacity(const Capacity& value) { SetCapacity(value); return *this;}
    inline CreateConnectorRequest& WithCapacity(Capacity&& value) { SetCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectorConfiguration() const{ return m_connectorConfiguration; }
    inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
    inline void SetConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration = value; }
    inline void SetConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration = std::move(value); }
    inline CreateConnectorRequest& WithConnectorConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectorConfiguration(value); return *this;}
    inline CreateConnectorRequest& WithConnectorConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectorConfiguration(std::move(value)); return *this;}
    inline CreateConnectorRequest& AddConnectorConfiguration(const Aws::String& key, const Aws::String& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(key, value); return *this; }
    inline CreateConnectorRequest& AddConnectorConfiguration(Aws::String&& key, const Aws::String& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(std::move(key), value); return *this; }
    inline CreateConnectorRequest& AddConnectorConfiguration(const Aws::String& key, Aws::String&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateConnectorRequest& AddConnectorConfiguration(Aws::String&& key, Aws::String&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConnectorRequest& AddConnectorConfiguration(const char* key, Aws::String&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateConnectorRequest& AddConnectorConfiguration(Aws::String&& key, const char* value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(std::move(key), value); return *this; }
    inline CreateConnectorRequest& AddConnectorConfiguration(const char* key, const char* value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A summary description of the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = value; }
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::move(value); }
    inline void SetConnectorDescription(const char* value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription.assign(value); }
    inline CreateConnectorRequest& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}
    inline CreateConnectorRequest& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}
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
    inline CreateConnectorRequest& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}
    inline CreateConnectorRequest& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which Apache Kafka cluster to connect to.</p>
     */
    inline const KafkaCluster& GetKafkaCluster() const{ return m_kafkaCluster; }
    inline bool KafkaClusterHasBeenSet() const { return m_kafkaClusterHasBeenSet; }
    inline void SetKafkaCluster(const KafkaCluster& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = value; }
    inline void SetKafkaCluster(KafkaCluster&& value) { m_kafkaClusterHasBeenSet = true; m_kafkaCluster = std::move(value); }
    inline CreateConnectorRequest& WithKafkaCluster(const KafkaCluster& value) { SetKafkaCluster(value); return *this;}
    inline CreateConnectorRequest& WithKafkaCluster(KafkaCluster&& value) { SetKafkaCluster(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the client authentication used by the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterClientAuthentication& GetKafkaClusterClientAuthentication() const{ return m_kafkaClusterClientAuthentication; }
    inline bool KafkaClusterClientAuthenticationHasBeenSet() const { return m_kafkaClusterClientAuthenticationHasBeenSet; }
    inline void SetKafkaClusterClientAuthentication(const KafkaClusterClientAuthentication& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = value; }
    inline void SetKafkaClusterClientAuthentication(KafkaClusterClientAuthentication&& value) { m_kafkaClusterClientAuthenticationHasBeenSet = true; m_kafkaClusterClientAuthentication = std::move(value); }
    inline CreateConnectorRequest& WithKafkaClusterClientAuthentication(const KafkaClusterClientAuthentication& value) { SetKafkaClusterClientAuthentication(value); return *this;}
    inline CreateConnectorRequest& WithKafkaClusterClientAuthentication(KafkaClusterClientAuthentication&& value) { SetKafkaClusterClientAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of encryption in transit to the Apache Kafka cluster.</p>
     */
    inline const KafkaClusterEncryptionInTransit& GetKafkaClusterEncryptionInTransit() const{ return m_kafkaClusterEncryptionInTransit; }
    inline bool KafkaClusterEncryptionInTransitHasBeenSet() const { return m_kafkaClusterEncryptionInTransitHasBeenSet; }
    inline void SetKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransit& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = value; }
    inline void SetKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransit&& value) { m_kafkaClusterEncryptionInTransitHasBeenSet = true; m_kafkaClusterEncryptionInTransit = std::move(value); }
    inline CreateConnectorRequest& WithKafkaClusterEncryptionInTransit(const KafkaClusterEncryptionInTransit& value) { SetKafkaClusterEncryptionInTransit(value); return *this;}
    inline CreateConnectorRequest& WithKafkaClusterEncryptionInTransit(KafkaClusterEncryptionInTransit&& value) { SetKafkaClusterEncryptionInTransit(std::move(value)); return *this;}
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
    inline CreateConnectorRequest& WithKafkaConnectVersion(const Aws::String& value) { SetKafkaConnectVersion(value); return *this;}
    inline CreateConnectorRequest& WithKafkaConnectVersion(Aws::String&& value) { SetKafkaConnectVersion(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithKafkaConnectVersion(const char* value) { SetKafkaConnectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about log delivery.</p>
     */
    inline const LogDelivery& GetLogDelivery() const{ return m_logDelivery; }
    inline bool LogDeliveryHasBeenSet() const { return m_logDeliveryHasBeenSet; }
    inline void SetLogDelivery(const LogDelivery& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = value; }
    inline void SetLogDelivery(LogDelivery&& value) { m_logDeliveryHasBeenSet = true; m_logDelivery = std::move(value); }
    inline CreateConnectorRequest& WithLogDelivery(const LogDelivery& value) { SetLogDelivery(value); return *this;}
    inline CreateConnectorRequest& WithLogDelivery(LogDelivery&& value) { SetLogDelivery(std::move(value)); return *this;}
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
    inline const Aws::Vector<Plugin>& GetPlugins() const{ return m_plugins; }
    inline bool PluginsHasBeenSet() const { return m_pluginsHasBeenSet; }
    inline void SetPlugins(const Aws::Vector<Plugin>& value) { m_pluginsHasBeenSet = true; m_plugins = value; }
    inline void SetPlugins(Aws::Vector<Plugin>&& value) { m_pluginsHasBeenSet = true; m_plugins = std::move(value); }
    inline CreateConnectorRequest& WithPlugins(const Aws::Vector<Plugin>& value) { SetPlugins(value); return *this;}
    inline CreateConnectorRequest& WithPlugins(Aws::Vector<Plugin>&& value) { SetPlugins(std::move(value)); return *this;}
    inline CreateConnectorRequest& AddPlugins(const Plugin& value) { m_pluginsHasBeenSet = true; m_plugins.push_back(value); return *this; }
    inline CreateConnectorRequest& AddPlugins(Plugin&& value) { m_pluginsHasBeenSet = true; m_plugins.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the connector to
     * access the Amazon Web Services resources that it needs. The types of resources
     * depends on the logic of the connector. For example, a connector that has Amazon
     * S3 as a destination must have permissions that allow it to write to the S3
     * destination bucket.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const{ return m_serviceExecutionRoleArn; }
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
    inline void SetServiceExecutionRoleArn(const Aws::String& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = value; }
    inline void SetServiceExecutionRoleArn(Aws::String&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::move(value); }
    inline void SetServiceExecutionRoleArn(const char* value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn.assign(value); }
    inline CreateConnectorRequest& WithServiceExecutionRoleArn(const Aws::String& value) { SetServiceExecutionRoleArn(value); return *this;}
    inline CreateConnectorRequest& WithServiceExecutionRoleArn(Aws::String&& value) { SetServiceExecutionRoleArn(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithServiceExecutionRoleArn(const char* value) { SetServiceExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags you want to attach to the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConnectorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateConnectorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConnectorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateConnectorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConnectorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConnectorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConnectorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConnectorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConnectorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies which worker configuration to use with the connector.</p>
     */
    inline const WorkerConfiguration& GetWorkerConfiguration() const{ return m_workerConfiguration; }
    inline bool WorkerConfigurationHasBeenSet() const { return m_workerConfigurationHasBeenSet; }
    inline void SetWorkerConfiguration(const WorkerConfiguration& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = value; }
    inline void SetWorkerConfiguration(WorkerConfiguration&& value) { m_workerConfigurationHasBeenSet = true; m_workerConfiguration = std::move(value); }
    inline CreateConnectorRequest& WithWorkerConfiguration(const WorkerConfiguration& value) { SetWorkerConfiguration(value); return *this;}
    inline CreateConnectorRequest& WithWorkerConfiguration(WorkerConfiguration&& value) { SetWorkerConfiguration(std::move(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    WorkerConfiguration m_workerConfiguration;
    bool m_workerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
