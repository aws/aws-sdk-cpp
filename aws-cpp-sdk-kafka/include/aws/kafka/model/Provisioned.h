/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/BrokerNodeGroupInfo.h>
#include <aws/kafka/model/BrokerSoftwareInfo.h>
#include <aws/kafka/model/ClientAuthentication.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <aws/kafka/model/OpenMonitoringInfo.h>
#include <aws/kafka/model/LoggingInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
            <p>Provisioned cluster.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Provisioned">AWS
   * API Reference</a></p>
   */
  class Provisioned
  {
  public:
    AWS_KAFKA_API Provisioned();
    AWS_KAFKA_API Provisioned(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Provisioned& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const{ return m_brokerNodeGroupInfo; }

    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }

    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline void SetBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = value; }

    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline void SetBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::move(value); }

    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline Provisioned& WithBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { SetBrokerNodeGroupInfo(value); return *this;}

    /**
     * 
            <p>Information about the brokers.</p>
         
     */
    inline Provisioned& WithBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { SetBrokerNodeGroupInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const{ return m_currentBrokerSoftwareInfo; }

    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }

    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline void SetCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = value; }

    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline void SetCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::move(value); }

    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline Provisioned& WithCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { SetCurrentBrokerSoftwareInfo(value); return *this;}

    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline Provisioned& WithCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { SetCurrentBrokerSoftwareInfo(std::move(value)); return *this;}


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
    inline Provisioned& WithClientAuthentication(const ClientAuthentication& value) { SetClientAuthentication(value); return *this;}

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline Provisioned& WithClientAuthentication(ClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}


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
    inline Provisioned& WithEncryptionInfo(const EncryptionInfo& value) { SetEncryptionInfo(value); return *this;}

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline Provisioned& WithEncryptionInfo(EncryptionInfo&& value) { SetEncryptionInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }

    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }

    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }

    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline Provisioned& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * 
            <p>Specifies the level of monitoring for the MSK cluster. The
     * possible values are DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, and
     * PER_TOPIC_PER_PARTITION.</p>
         
     */
    inline Provisioned& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}


    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline const OpenMonitoringInfo& GetOpenMonitoring() const{ return m_openMonitoring; }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline void SetOpenMonitoring(const OpenMonitoringInfo& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = value; }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline void SetOpenMonitoring(OpenMonitoringInfo&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::move(value); }

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline Provisioned& WithOpenMonitoring(const OpenMonitoringInfo& value) { SetOpenMonitoring(value); return *this;}

    /**
     * 
            <p>The settings for open monitoring.</p>
         
     */
    inline Provisioned& WithOpenMonitoring(OpenMonitoringInfo&& value) { SetOpenMonitoring(std::move(value)); return *this;}


    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }

    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }

    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline Provisioned& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * 
            <p>Log delivery information for the cluster.</p>
         
     */
    inline Provisioned& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


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
    inline Provisioned& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}


    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectString() const{ return m_zookeeperConnectString; }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline bool ZookeeperConnectStringHasBeenSet() const { return m_zookeeperConnectStringHasBeenSet; }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline void SetZookeeperConnectString(const Aws::String& value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString = value; }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline void SetZookeeperConnectString(Aws::String&& value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString = std::move(value); }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline void SetZookeeperConnectString(const char* value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString.assign(value); }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline Provisioned& WithZookeeperConnectString(const Aws::String& value) { SetZookeeperConnectString(value); return *this;}

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline Provisioned& WithZookeeperConnectString(Aws::String&& value) { SetZookeeperConnectString(std::move(value)); return *this;}

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline Provisioned& WithZookeeperConnectString(const char* value) { SetZookeeperConnectString(value); return *this;}


    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectStringTls() const{ return m_zookeeperConnectStringTls; }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline bool ZookeeperConnectStringTlsHasBeenSet() const { return m_zookeeperConnectStringTlsHasBeenSet; }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline void SetZookeeperConnectStringTls(const Aws::String& value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls = value; }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline void SetZookeeperConnectStringTls(Aws::String&& value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls = std::move(value); }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline void SetZookeeperConnectStringTls(const char* value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls.assign(value); }

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline Provisioned& WithZookeeperConnectStringTls(const Aws::String& value) { SetZookeeperConnectStringTls(value); return *this;}

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline Provisioned& WithZookeeperConnectStringTls(Aws::String&& value) { SetZookeeperConnectStringTls(std::move(value)); return *this;}

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline Provisioned& WithZookeeperConnectStringTls(const char* value) { SetZookeeperConnectStringTls(value); return *this;}


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
    inline Provisioned& WithStorageMode(const StorageMode& value) { SetStorageMode(value); return *this;}

    /**
     * 
            <p>This controls storage mode for supported storage tiers.</p>
    
     *     
     */
    inline Provisioned& WithStorageMode(StorageMode&& value) { SetStorageMode(std::move(value)); return *this;}

  private:

    BrokerNodeGroupInfo m_brokerNodeGroupInfo;
    bool m_brokerNodeGroupInfoHasBeenSet = false;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet = false;

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoringInfo m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet = false;

    Aws::String m_zookeeperConnectString;
    bool m_zookeeperConnectStringHasBeenSet = false;

    Aws::String m_zookeeperConnectStringTls;
    bool m_zookeeperConnectStringTlsHasBeenSet = false;

    StorageMode m_storageMode;
    bool m_storageModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
