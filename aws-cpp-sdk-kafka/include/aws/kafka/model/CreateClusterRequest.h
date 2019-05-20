/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/model/BrokerNodeGroupInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ConfigurationInfo.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class AWS_KAFKA_API CreateClusterRequest : public KafkaRequest
  {
  public:
    CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Information about the broker nodes in the cluster.</p>
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const{ return m_brokerNodeGroupInfo; }

    /**
     * <p>Information about the broker nodes in the cluster.</p>
     */
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }

    /**
     * <p>Information about the broker nodes in the cluster.</p>
     */
    inline void SetBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = value; }

    /**
     * <p>Information about the broker nodes in the cluster.</p>
     */
    inline void SetBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::move(value); }

    /**
     * <p>Information about the broker nodes in the cluster.</p>
     */
    inline CreateClusterRequest& WithBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { SetBrokerNodeGroupInfo(value); return *this;}

    /**
     * <p>Information about the broker nodes in the cluster.</p>
     */
    inline CreateClusterRequest& WithBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { SetBrokerNodeGroupInfo(std::move(value)); return *this;}


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>Comprises of the Configuration to be used on Kafka brokers in a cluster.</p>
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const{ return m_configurationInfo; }

    /**
     * <p>Comprises of the Configuration to be used on Kafka brokers in a cluster.</p>
     */
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }

    /**
     * <p>Comprises of the Configuration to be used on Kafka brokers in a cluster.</p>
     */
    inline void SetConfigurationInfo(const ConfigurationInfo& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = value; }

    /**
     * <p>Comprises of the Configuration to be used on Kafka brokers in a cluster.</p>
     */
    inline void SetConfigurationInfo(ConfigurationInfo&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::move(value); }

    /**
     * <p>Comprises of the Configuration to be used on Kafka brokers in a cluster.</p>
     */
    inline CreateClusterRequest& WithConfigurationInfo(const ConfigurationInfo& value) { SetConfigurationInfo(value); return *this;}

    /**
     * <p>Comprises of the Configuration to be used on Kafka brokers in a cluster.</p>
     */
    inline CreateClusterRequest& WithConfigurationInfo(ConfigurationInfo&& value) { SetConfigurationInfo(std::move(value)); return *this;}


    /**
     * <p>Includes all encryption-related information.</p>
     */
    inline const EncryptionInfo& GetEncryptionInfo() const{ return m_encryptionInfo; }

    /**
     * <p>Includes all encryption-related information.</p>
     */
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }

    /**
     * <p>Includes all encryption-related information.</p>
     */
    inline void SetEncryptionInfo(const EncryptionInfo& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = value; }

    /**
     * <p>Includes all encryption-related information.</p>
     */
    inline void SetEncryptionInfo(EncryptionInfo&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::move(value); }

    /**
     * <p>Includes all encryption-related information.</p>
     */
    inline CreateClusterRequest& WithEncryptionInfo(const EncryptionInfo& value) { SetEncryptionInfo(value); return *this;}

    /**
     * <p>Includes all encryption-related information.</p>
     */
    inline CreateClusterRequest& WithEncryptionInfo(EncryptionInfo&& value) { SetEncryptionInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the level of monitoring for the MSK cluster. The possible values
     * are DEFAULT, PER_BROKER, and PER_TOPIC_PER_BROKER.</p>
     */
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }

    /**
     * <p>Specifies the level of monitoring for the MSK cluster. The possible values
     * are DEFAULT, PER_BROKER, and PER_TOPIC_PER_BROKER.</p>
     */
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }

    /**
     * <p>Specifies the level of monitoring for the MSK cluster. The possible values
     * are DEFAULT, PER_BROKER, and PER_TOPIC_PER_BROKER.</p>
     */
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * <p>Specifies the level of monitoring for the MSK cluster. The possible values
     * are DEFAULT, PER_BROKER, and PER_TOPIC_PER_BROKER.</p>
     */
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }

    /**
     * <p>Specifies the level of monitoring for the MSK cluster. The possible values
     * are DEFAULT, PER_BROKER, and PER_TOPIC_PER_BROKER.</p>
     */
    inline CreateClusterRequest& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * <p>Specifies the level of monitoring for the MSK cluster. The possible values
     * are DEFAULT, PER_BROKER, and PER_TOPIC_PER_BROKER.</p>
     */
    inline CreateClusterRequest& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}


    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline const Aws::String& GetKafkaVersion() const{ return m_kafkaVersion; }

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline void SetKafkaVersion(const Aws::String& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = value; }

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline void SetKafkaVersion(Aws::String&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::move(value); }

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline void SetKafkaVersion(const char* value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion.assign(value); }

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline CreateClusterRequest& WithKafkaVersion(const Aws::String& value) { SetKafkaVersion(value); return *this;}

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline CreateClusterRequest& WithKafkaVersion(Aws::String&& value) { SetKafkaVersion(std::move(value)); return *this;}

    /**
     * <p>The version of Apache Kafka.</p>
     */
    inline CreateClusterRequest& WithKafkaVersion(const char* value) { SetKafkaVersion(value); return *this;}


    /**
     * <p>The number of Kafka broker nodes in the Amazon MSK cluster.</p>
     */
    inline int GetNumberOfBrokerNodes() const{ return m_numberOfBrokerNodes; }

    /**
     * <p>The number of Kafka broker nodes in the Amazon MSK cluster.</p>
     */
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }

    /**
     * <p>The number of Kafka broker nodes in the Amazon MSK cluster.</p>
     */
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }

    /**
     * <p>The number of Kafka broker nodes in the Amazon MSK cluster.</p>
     */
    inline CreateClusterRequest& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}

  private:

    BrokerNodeGroupInfo m_brokerNodeGroupInfo;
    bool m_brokerNodeGroupInfoHasBeenSet;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    ConfigurationInfo m_configurationInfo;
    bool m_configurationInfoHasBeenSet;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet;

    EnhancedMonitoring m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet;

    Aws::String m_kafkaVersion;
    bool m_kafkaVersionHasBeenSet;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
