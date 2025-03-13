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
    AWS_KAFKA_API ProvisionedRequest() = default;
    AWS_KAFKA_API ProvisionedRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ProvisionedRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const { return m_brokerNodeGroupInfo; }
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }
    template<typename BrokerNodeGroupInfoT = BrokerNodeGroupInfo>
    void SetBrokerNodeGroupInfo(BrokerNodeGroupInfoT&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::forward<BrokerNodeGroupInfoT>(value); }
    template<typename BrokerNodeGroupInfoT = BrokerNodeGroupInfo>
    ProvisionedRequest& WithBrokerNodeGroupInfo(BrokerNodeGroupInfoT&& value) { SetBrokerNodeGroupInfo(std::forward<BrokerNodeGroupInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline const ClientAuthentication& GetClientAuthentication() const { return m_clientAuthentication; }
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
    template<typename ClientAuthenticationT = ClientAuthentication>
    void SetClientAuthentication(ClientAuthenticationT&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::forward<ClientAuthenticationT>(value); }
    template<typename ClientAuthenticationT = ClientAuthentication>
    ProvisionedRequest& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Represents the configuration that you want Amazon MSK to use for
     * the brokers in a cluster.</p>
         
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const { return m_configurationInfo; }
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }
    template<typename ConfigurationInfoT = ConfigurationInfo>
    void SetConfigurationInfo(ConfigurationInfoT&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::forward<ConfigurationInfoT>(value); }
    template<typename ConfigurationInfoT = ConfigurationInfo>
    ProvisionedRequest& WithConfigurationInfo(ConfigurationInfoT&& value) { SetConfigurationInfo(std::forward<ConfigurationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline const EncryptionInfo& GetEncryptionInfo() const { return m_encryptionInfo; }
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }
    template<typename EncryptionInfoT = EncryptionInfo>
    void SetEncryptionInfo(EncryptionInfoT&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::forward<EncryptionInfoT>(value); }
    template<typename EncryptionInfoT = EncryptionInfo>
    ProvisionedRequest& WithEncryptionInfo(EncryptionInfoT&& value) { SetEncryptionInfo(std::forward<EncryptionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline EnhancedMonitoring GetEnhancedMonitoring() const { return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    inline void SetEnhancedMonitoring(EnhancedMonitoring value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }
    inline ProvisionedRequest& WithEnhancedMonitoring(EnhancedMonitoring value) { SetEnhancedMonitoring(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline const OpenMonitoringInfo& GetOpenMonitoring() const { return m_openMonitoring; }
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }
    template<typename OpenMonitoringT = OpenMonitoringInfo>
    void SetOpenMonitoring(OpenMonitoringT&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::forward<OpenMonitoringT>(value); }
    template<typename OpenMonitoringT = OpenMonitoringInfo>
    ProvisionedRequest& WithOpenMonitoring(OpenMonitoringT&& value) { SetOpenMonitoring(std::forward<OpenMonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Apache Kafka version that you want for the cluster.</p>
    
     *     
     */
    inline const Aws::String& GetKafkaVersion() const { return m_kafkaVersion; }
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }
    template<typename KafkaVersionT = Aws::String>
    void SetKafkaVersion(KafkaVersionT&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::forward<KafkaVersionT>(value); }
    template<typename KafkaVersionT = Aws::String>
    ProvisionedRequest& WithKafkaVersion(KafkaVersionT&& value) { SetKafkaVersion(std::forward<KafkaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline const LoggingInfo& GetLoggingInfo() const { return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    template<typename LoggingInfoT = LoggingInfo>
    void SetLoggingInfo(LoggingInfoT&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::forward<LoggingInfoT>(value); }
    template<typename LoggingInfoT = LoggingInfo>
    ProvisionedRequest& WithLoggingInfo(LoggingInfoT&& value) { SetLoggingInfo(std::forward<LoggingInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const { return m_numberOfBrokerNodes; }
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
    inline StorageMode GetStorageMode() const { return m_storageMode; }
    inline bool StorageModeHasBeenSet() const { return m_storageModeHasBeenSet; }
    inline void SetStorageMode(StorageMode value) { m_storageModeHasBeenSet = true; m_storageMode = value; }
    inline ProvisionedRequest& WithStorageMode(StorageMode value) { SetStorageMode(value); return *this;}
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

    EnhancedMonitoring m_enhancedMonitoring{EnhancedMonitoring::NOT_SET};
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoringInfo m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    Aws::String m_kafkaVersion;
    bool m_kafkaVersionHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    int m_numberOfBrokerNodes{0};
    bool m_numberOfBrokerNodesHasBeenSet = false;

    StorageMode m_storageMode{StorageMode::NOT_SET};
    bool m_storageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
