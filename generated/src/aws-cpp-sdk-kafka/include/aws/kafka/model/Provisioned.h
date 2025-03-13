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
#include <aws/kafka/model/CustomerActionStatus.h>
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
    AWS_KAFKA_API Provisioned() = default;
    AWS_KAFKA_API Provisioned(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Provisioned& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Provisioned& WithBrokerNodeGroupInfo(BrokerNodeGroupInfoT&& value) { SetBrokerNodeGroupInfo(std::forward<BrokerNodeGroupInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the Apache Kafka version deployed on the
     * brokers.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const { return m_currentBrokerSoftwareInfo; }
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }
    template<typename CurrentBrokerSoftwareInfoT = BrokerSoftwareInfo>
    void SetCurrentBrokerSoftwareInfo(CurrentBrokerSoftwareInfoT&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::forward<CurrentBrokerSoftwareInfoT>(value); }
    template<typename CurrentBrokerSoftwareInfoT = BrokerSoftwareInfo>
    Provisioned& WithCurrentBrokerSoftwareInfo(CurrentBrokerSoftwareInfoT&& value) { SetCurrentBrokerSoftwareInfo(std::forward<CurrentBrokerSoftwareInfoT>(value)); return *this;}
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
    Provisioned& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
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
    Provisioned& WithEncryptionInfo(EncryptionInfoT&& value) { SetEncryptionInfo(std::forward<EncryptionInfoT>(value)); return *this;}
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
    inline Provisioned& WithEnhancedMonitoring(EnhancedMonitoring value) { SetEnhancedMonitoring(value); return *this;}
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
    Provisioned& WithOpenMonitoring(OpenMonitoringT&& value) { SetOpenMonitoring(std::forward<OpenMonitoringT>(value)); return *this;}
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
    Provisioned& WithLoggingInfo(LoggingInfoT&& value) { SetLoggingInfo(std::forward<LoggingInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const { return m_numberOfBrokerNodes; }
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }
    inline Provisioned& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectString() const { return m_zookeeperConnectString; }
    inline bool ZookeeperConnectStringHasBeenSet() const { return m_zookeeperConnectStringHasBeenSet; }
    template<typename ZookeeperConnectStringT = Aws::String>
    void SetZookeeperConnectString(ZookeeperConnectStringT&& value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString = std::forward<ZookeeperConnectStringT>(value); }
    template<typename ZookeeperConnectStringT = Aws::String>
    Provisioned& WithZookeeperConnectString(ZookeeperConnectStringT&& value) { SetZookeeperConnectString(std::forward<ZookeeperConnectStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster on a TLS port.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectStringTls() const { return m_zookeeperConnectStringTls; }
    inline bool ZookeeperConnectStringTlsHasBeenSet() const { return m_zookeeperConnectStringTlsHasBeenSet; }
    template<typename ZookeeperConnectStringTlsT = Aws::String>
    void SetZookeeperConnectStringTls(ZookeeperConnectStringTlsT&& value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls = std::forward<ZookeeperConnectStringTlsT>(value); }
    template<typename ZookeeperConnectStringTlsT = Aws::String>
    Provisioned& WithZookeeperConnectStringTls(ZookeeperConnectStringTlsT&& value) { SetZookeeperConnectStringTls(std::forward<ZookeeperConnectStringTlsT>(value)); return *this;}
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
    inline Provisioned& WithStorageMode(StorageMode value) { SetStorageMode(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Determines if there is an action required from the
     * customer.</p>
         
     */
    inline CustomerActionStatus GetCustomerActionStatus() const { return m_customerActionStatus; }
    inline bool CustomerActionStatusHasBeenSet() const { return m_customerActionStatusHasBeenSet; }
    inline void SetCustomerActionStatus(CustomerActionStatus value) { m_customerActionStatusHasBeenSet = true; m_customerActionStatus = value; }
    inline Provisioned& WithCustomerActionStatus(CustomerActionStatus value) { SetCustomerActionStatus(value); return *this;}
    ///@}
  private:

    BrokerNodeGroupInfo m_brokerNodeGroupInfo;
    bool m_brokerNodeGroupInfoHasBeenSet = false;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet = false;

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring{EnhancedMonitoring::NOT_SET};
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoringInfo m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    int m_numberOfBrokerNodes{0};
    bool m_numberOfBrokerNodesHasBeenSet = false;

    Aws::String m_zookeeperConnectString;
    bool m_zookeeperConnectStringHasBeenSet = false;

    Aws::String m_zookeeperConnectStringTls;
    bool m_zookeeperConnectStringTlsHasBeenSet = false;

    StorageMode m_storageMode{StorageMode::NOT_SET};
    bool m_storageModeHasBeenSet = false;

    CustomerActionStatus m_customerActionStatus{CustomerActionStatus::NOT_SET};
    bool m_customerActionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
