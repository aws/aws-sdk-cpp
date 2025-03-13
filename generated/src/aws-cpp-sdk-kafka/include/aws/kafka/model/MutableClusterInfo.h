/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ConfigurationInfo.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <aws/kafka/model/OpenMonitoring.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/LoggingInfo.h>
#include <aws/kafka/model/ClientAuthentication.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/kafka/model/ConnectivityInfo.h>
#include <aws/kafka/model/StorageMode.h>
#include <aws/kafka/model/BrokerCountUpdateInfo.h>
#include <aws/kafka/model/BrokerEBSVolumeInfo.h>
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
            <p>Information about cluster attributes that can be updated via
   * update APIs.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/MutableClusterInfo">AWS
   * API Reference</a></p>
   */
  class MutableClusterInfo
  {
  public:
    AWS_KAFKA_API MutableClusterInfo() = default;
    AWS_KAFKA_API MutableClusterInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API MutableClusterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline const Aws::Vector<BrokerEBSVolumeInfo>& GetBrokerEBSVolumeInfo() const { return m_brokerEBSVolumeInfo; }
    inline bool BrokerEBSVolumeInfoHasBeenSet() const { return m_brokerEBSVolumeInfoHasBeenSet; }
    template<typename BrokerEBSVolumeInfoT = Aws::Vector<BrokerEBSVolumeInfo>>
    void SetBrokerEBSVolumeInfo(BrokerEBSVolumeInfoT&& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo = std::forward<BrokerEBSVolumeInfoT>(value); }
    template<typename BrokerEBSVolumeInfoT = Aws::Vector<BrokerEBSVolumeInfo>>
    MutableClusterInfo& WithBrokerEBSVolumeInfo(BrokerEBSVolumeInfoT&& value) { SetBrokerEBSVolumeInfo(std::forward<BrokerEBSVolumeInfoT>(value)); return *this;}
    template<typename BrokerEBSVolumeInfoT = BrokerEBSVolumeInfo>
    MutableClusterInfo& AddBrokerEBSVolumeInfo(BrokerEBSVolumeInfoT&& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo.emplace_back(std::forward<BrokerEBSVolumeInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const { return m_configurationInfo; }
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }
    template<typename ConfigurationInfoT = ConfigurationInfo>
    void SetConfigurationInfo(ConfigurationInfoT&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::forward<ConfigurationInfoT>(value); }
    template<typename ConfigurationInfoT = ConfigurationInfo>
    MutableClusterInfo& WithConfigurationInfo(ConfigurationInfoT&& value) { SetConfigurationInfo(std::forward<ConfigurationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const { return m_numberOfBrokerNodes; }
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }
    inline MutableClusterInfo& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline EnhancedMonitoring GetEnhancedMonitoring() const { return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    inline void SetEnhancedMonitoring(EnhancedMonitoring value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }
    inline MutableClusterInfo& WithEnhancedMonitoring(EnhancedMonitoring value) { SetEnhancedMonitoring(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline const OpenMonitoring& GetOpenMonitoring() const { return m_openMonitoring; }
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }
    template<typename OpenMonitoringT = OpenMonitoring>
    void SetOpenMonitoring(OpenMonitoringT&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::forward<OpenMonitoringT>(value); }
    template<typename OpenMonitoringT = OpenMonitoring>
    MutableClusterInfo& WithOpenMonitoring(OpenMonitoringT&& value) { SetOpenMonitoring(std::forward<OpenMonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline const Aws::String& GetKafkaVersion() const { return m_kafkaVersion; }
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }
    template<typename KafkaVersionT = Aws::String>
    void SetKafkaVersion(KafkaVersionT&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::forward<KafkaVersionT>(value); }
    template<typename KafkaVersionT = Aws::String>
    MutableClusterInfo& WithKafkaVersion(KafkaVersionT&& value) { SetKafkaVersion(std::forward<KafkaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline const LoggingInfo& GetLoggingInfo() const { return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    template<typename LoggingInfoT = LoggingInfo>
    void SetLoggingInfo(LoggingInfoT&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::forward<LoggingInfoT>(value); }
    template<typename LoggingInfoT = LoggingInfo>
    MutableClusterInfo& WithLoggingInfo(LoggingInfoT&& value) { SetLoggingInfo(std::forward<LoggingInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    MutableClusterInfo& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
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
    MutableClusterInfo& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
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
    MutableClusterInfo& WithEncryptionInfo(EncryptionInfoT&& value) { SetEncryptionInfo(std::forward<EncryptionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline const ConnectivityInfo& GetConnectivityInfo() const { return m_connectivityInfo; }
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    void SetConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::forward<ConnectivityInfoT>(value); }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    MutableClusterInfo& WithConnectivityInfo(ConnectivityInfoT&& value) { SetConnectivityInfo(std::forward<ConnectivityInfoT>(value)); return *this;}
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
    inline MutableClusterInfo& WithStorageMode(StorageMode value) { SetStorageMode(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Describes brokers being changed during a broker count
     * update.</p>
         
     */
    inline const BrokerCountUpdateInfo& GetBrokerCountUpdateInfo() const { return m_brokerCountUpdateInfo; }
    inline bool BrokerCountUpdateInfoHasBeenSet() const { return m_brokerCountUpdateInfoHasBeenSet; }
    template<typename BrokerCountUpdateInfoT = BrokerCountUpdateInfo>
    void SetBrokerCountUpdateInfo(BrokerCountUpdateInfoT&& value) { m_brokerCountUpdateInfoHasBeenSet = true; m_brokerCountUpdateInfo = std::forward<BrokerCountUpdateInfoT>(value); }
    template<typename BrokerCountUpdateInfoT = BrokerCountUpdateInfo>
    MutableClusterInfo& WithBrokerCountUpdateInfo(BrokerCountUpdateInfoT&& value) { SetBrokerCountUpdateInfo(std::forward<BrokerCountUpdateInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BrokerEBSVolumeInfo> m_brokerEBSVolumeInfo;
    bool m_brokerEBSVolumeInfoHasBeenSet = false;

    ConfigurationInfo m_configurationInfo;
    bool m_configurationInfoHasBeenSet = false;

    int m_numberOfBrokerNodes{0};
    bool m_numberOfBrokerNodesHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring{EnhancedMonitoring::NOT_SET};
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoring m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    Aws::String m_kafkaVersion;
    bool m_kafkaVersionHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    ConnectivityInfo m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    StorageMode m_storageMode{StorageMode::NOT_SET};
    bool m_storageModeHasBeenSet = false;

    BrokerCountUpdateInfo m_brokerCountUpdateInfo;
    bool m_brokerCountUpdateInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
