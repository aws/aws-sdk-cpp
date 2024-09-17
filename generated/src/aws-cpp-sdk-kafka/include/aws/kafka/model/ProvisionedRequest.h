/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/BrokerNodeGroupInfo.h>
#include <aws/kafka/model/ClientAuthentication.h>
#include <aws/kafka/model/ConfigurationInfo.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <aws/kafka/model/OpenMonitoringInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/LoggingInfo.h>
#include <aws/kafka/model/StorageMode.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Provisioned cluster request.</p>
         <p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ProvisionedRequest">AWS
   * API Reference</a></p>
   */
  class ProvisionedRequest
  {
  public:
    AWS_KAFKA_API ProvisionedRequest();
    AWS_KAFKA_API ProvisionedRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ProvisionedRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const{ return m_brokerNodeGroupInfo; }
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }
    inline void SetBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = value; }
    inline void SetBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::move(value); }
    inline ProvisionedRequest& WithBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { SetBrokerNodeGroupInfo(value); return *this;}
    inline ProvisionedRequest& WithBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { SetBrokerNodeGroupInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline const ClientAuthentication& GetClientAuthentication() const{ return m_clientAuthentication; }
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
    inline void SetClientAuthentication(const ClientAuthentication& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = value; }
    inline void SetClientAuthentication(ClientAuthentication&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::move(value); }
    inline ProvisionedRequest& WithClientAuthentication(const ClientAuthentication& value) { SetClientAuthentication(value); return *this;}
    inline ProvisionedRequest& WithClientAuthentication(ClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Represents the configuration that you want Amazon MSK to use for
     * the brokers in a cluster.</p>
         
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const{ return m_configurationInfo; }
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }
    inline void SetConfigurationInfo(const ConfigurationInfo& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = value; }
    inline void SetConfigurationInfo(ConfigurationInfo&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::move(value); }
    inline ProvisionedRequest& WithConfigurationInfo(const ConfigurationInfo& value) { SetConfigurationInfo(value); return *this;}
    inline ProvisionedRequest& WithConfigurationInfo(ConfigurationInfo&& value) { SetConfigurationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline const EncryptionInfo& GetEncryptionInfo() const{ return m_encryptionInfo; }
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }
    inline void SetEncryptionInfo(const EncryptionInfo& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = value; }
    inline void SetEncryptionInfo(EncryptionInfo&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::move(value); }
    inline ProvisionedRequest& WithEncryptionInfo(const EncryptionInfo& value) { SetEncryptionInfo(value); return *this;}
    inline ProvisionedRequest& WithEncryptionInfo(EncryptionInfo&& value) { SetEncryptionInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }
    inline ProvisionedRequest& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}
    inline ProvisionedRequest& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline const OpenMonitoringInfo& GetOpenMonitoring() const{ return m_openMonitoring; }
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }
    inline void SetOpenMonitoring(const OpenMonitoringInfo& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = value; }
    inline void SetOpenMonitoring(OpenMonitoringInfo&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::move(value); }
    inline ProvisionedRequest& WithOpenMonitoring(const OpenMonitoringInfo& value) { SetOpenMonitoring(value); return *this;}
    inline ProvisionedRequest& WithOpenMonitoring(OpenMonitoringInfo&& value) { SetOpenMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Apache Kafka version that you want for the cluster.</p>
    
     *     
     */
    inline const Aws::String& GetKafkaVersion() const{ return m_kafkaVersion; }
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }
    inline void SetKafkaVersion(const Aws::String& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = value; }
    inline void SetKafkaVersion(Aws::String&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::move(value); }
    inline void SetKafkaVersion(const char* value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion.assign(value); }
    inline ProvisionedRequest& WithKafkaVersion(const Aws::String& value) { SetKafkaVersion(value); return *this;}
    inline ProvisionedRequest& WithKafkaVersion(Aws::String&& value) { SetKafkaVersion(std::move(value)); return *this;}
    inline ProvisionedRequest& WithKafkaVersion(const char* value) { SetKafkaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }
    inline ProvisionedRequest& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}
    inline ProvisionedRequest& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const{ return m_numberOfBrokerNodes; }
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }
    inline ProvisionedRequest& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline const StorageMode& GetStorageMode() const{ return m_storageMode; }
    inline bool StorageModeHasBeenSet() const { return m_storageModeHasBeenSet; }
    inline void SetStorageMode(const StorageMode& value) { m_storageModeHasBeenSet = true; m_storageMode = value; }
    inline void SetStorageMode(StorageMode&& value) { m_storageModeHasBeenSet = true; m_storageMode = std::move(value); }
    inline ProvisionedRequest& WithStorageMode(const StorageMode& value) { SetStorageMode(value); return *this;}
    inline ProvisionedRequest& WithStorageMode(StorageMode&& value) { SetStorageMode(std::move(value)); return *this;}
    ///@}
  private:

    BrokerNodeGroupInfo m_brokerNodeGroupInfo;
    bool m_brokerNodeGroupInfoHasBeenSet = false;

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    ConfigurationInfo m_configurationInfo;
    bool m_configurationInfoHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoringInfo m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    Aws::String m_kafkaVersion;
    bool m_kafkaVersionHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet = false;

    StorageMode m_storageMode;
    bool m_storageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
