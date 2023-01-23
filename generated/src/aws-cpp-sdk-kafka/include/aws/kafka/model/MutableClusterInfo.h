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
    AWS_KAFKA_API MutableClusterInfo();
    AWS_KAFKA_API MutableClusterInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API MutableClusterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline const Aws::Vector<BrokerEBSVolumeInfo>& GetBrokerEBSVolumeInfo() const{ return m_brokerEBSVolumeInfo; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline bool BrokerEBSVolumeInfoHasBeenSet() const { return m_brokerEBSVolumeInfoHasBeenSet; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline void SetBrokerEBSVolumeInfo(const Aws::Vector<BrokerEBSVolumeInfo>& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo = value; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline void SetBrokerEBSVolumeInfo(Aws::Vector<BrokerEBSVolumeInfo>&& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo = std::move(value); }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& WithBrokerEBSVolumeInfo(const Aws::Vector<BrokerEBSVolumeInfo>& value) { SetBrokerEBSVolumeInfo(value); return *this;}

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& WithBrokerEBSVolumeInfo(Aws::Vector<BrokerEBSVolumeInfo>&& value) { SetBrokerEBSVolumeInfo(std::move(value)); return *this;}

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& AddBrokerEBSVolumeInfo(const BrokerEBSVolumeInfo& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo.push_back(value); return *this; }

    /**
     * 
            <p>Specifies the size of the EBS volume and the ID of the
     * associated broker.</p>
         
     */
    inline MutableClusterInfo& AddBrokerEBSVolumeInfo(BrokerEBSVolumeInfo&& value) { m_brokerEBSVolumeInfoHasBeenSet = true; m_brokerEBSVolumeInfo.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline const ConfigurationInfo& GetConfigurationInfo() const{ return m_configurationInfo; }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline bool ConfigurationInfoHasBeenSet() const { return m_configurationInfoHasBeenSet; }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline void SetConfigurationInfo(const ConfigurationInfo& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = value; }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline void SetConfigurationInfo(ConfigurationInfo&& value) { m_configurationInfoHasBeenSet = true; m_configurationInfo = std::move(value); }

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline MutableClusterInfo& WithConfigurationInfo(const ConfigurationInfo& value) { SetConfigurationInfo(value); return *this;}

    /**
     * 
            <p>Information about the changes in the configuration of the
     * brokers.</p>
         
     */
    inline MutableClusterInfo& WithConfigurationInfo(ConfigurationInfo&& value) { SetConfigurationInfo(std::move(value)); return *this;}


    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const{ return m_numberOfBrokerNodes; }

    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }

    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }

    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline MutableClusterInfo& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}


    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }

    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }

    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }

    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline MutableClusterInfo& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * 
            <p>Specifies which Apache Kafka metrics Amazon MSK gathers and
     * sends to Amazon CloudWatch for this cluster.</p>
         
     */
    inline MutableClusterInfo& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}


    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline const OpenMonitoring& GetOpenMonitoring() const{ return m_openMonitoring; }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline void SetOpenMonitoring(const OpenMonitoring& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = value; }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline void SetOpenMonitoring(OpenMonitoring&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::move(value); }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline MutableClusterInfo& WithOpenMonitoring(const OpenMonitoring& value) { SetOpenMonitoring(value); return *this;}

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline MutableClusterInfo& WithOpenMonitoring(OpenMonitoring&& value) { SetOpenMonitoring(std::move(value)); return *this;}


    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline const Aws::String& GetKafkaVersion() const{ return m_kafkaVersion; }

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline bool KafkaVersionHasBeenSet() const { return m_kafkaVersionHasBeenSet; }

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline void SetKafkaVersion(const Aws::String& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = value; }

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline void SetKafkaVersion(Aws::String&& value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion = std::move(value); }

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline void SetKafkaVersion(const char* value) { m_kafkaVersionHasBeenSet = true; m_kafkaVersion.assign(value); }

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline MutableClusterInfo& WithKafkaVersion(const Aws::String& value) { SetKafkaVersion(value); return *this;}

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline MutableClusterInfo& WithKafkaVersion(Aws::String&& value) { SetKafkaVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The Apache Kafka version.</p>
            
     */
    inline MutableClusterInfo& WithKafkaVersion(const char* value) { SetKafkaVersion(value); return *this;}


    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }

    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }

    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline MutableClusterInfo& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * 
            <p>You can configure your MSK cluster to send broker logs to
     * different destination types. This is a container for the configuration details
     * related to broker logs.</p>
            
     */
    inline MutableClusterInfo& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline MutableClusterInfo& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline MutableClusterInfo& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * 
            <p>Information about the Amazon MSK broker type.</p>
            
     */
    inline MutableClusterInfo& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline const ClientAuthentication& GetClientAuthentication() const{ return m_clientAuthentication; }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline void SetClientAuthentication(const ClientAuthentication& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = value; }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline void SetClientAuthentication(ClientAuthentication&& value) { m_clientAuthenticationHasBeenSet = true; m_clientAuthentication = std::move(value); }

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline MutableClusterInfo& WithClientAuthentication(const ClientAuthentication& value) { SetClientAuthentication(value); return *this;}

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline MutableClusterInfo& WithClientAuthentication(ClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}


    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline const EncryptionInfo& GetEncryptionInfo() const{ return m_encryptionInfo; }

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline bool EncryptionInfoHasBeenSet() const { return m_encryptionInfoHasBeenSet; }

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline void SetEncryptionInfo(const EncryptionInfo& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = value; }

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline void SetEncryptionInfo(EncryptionInfo&& value) { m_encryptionInfoHasBeenSet = true; m_encryptionInfo = std::move(value); }

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline MutableClusterInfo& WithEncryptionInfo(const EncryptionInfo& value) { SetEncryptionInfo(value); return *this;}

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline MutableClusterInfo& WithEncryptionInfo(EncryptionInfo&& value) { SetEncryptionInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline const ConnectivityInfo& GetConnectivityInfo() const{ return m_connectivityInfo; }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline void SetConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = value; }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline void SetConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::move(value); }

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline MutableClusterInfo& WithConnectivityInfo(const ConnectivityInfo& value) { SetConnectivityInfo(value); return *this;}

    /**
     * 
            <p>Information about the broker access configuration.</p>
         
     */
    inline MutableClusterInfo& WithConnectivityInfo(ConnectivityInfo&& value) { SetConnectivityInfo(std::move(value)); return *this;}


    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline const StorageMode& GetStorageMode() const{ return m_storageMode; }

    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline bool StorageModeHasBeenSet() const { return m_storageModeHasBeenSet; }

    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline void SetStorageMode(const StorageMode& value) { m_storageModeHasBeenSet = true; m_storageMode = value; }

    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline void SetStorageMode(StorageMode&& value) { m_storageModeHasBeenSet = true; m_storageMode = std::move(value); }

    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline MutableClusterInfo& WithStorageMode(const StorageMode& value) { SetStorageMode(value); return *this;}

    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline MutableClusterInfo& WithStorageMode(StorageMode&& value) { SetStorageMode(std::move(value)); return *this;}

  private:

    Aws::Vector<BrokerEBSVolumeInfo> m_brokerEBSVolumeInfo;
    bool m_brokerEBSVolumeInfoHasBeenSet = false;

    ConfigurationInfo m_configurationInfo;
    bool m_configurationInfoHasBeenSet = false;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring;
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

    StorageMode m_storageMode;
    bool m_storageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
