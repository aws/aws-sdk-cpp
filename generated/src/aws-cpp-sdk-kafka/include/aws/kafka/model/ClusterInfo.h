/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/BrokerNodeGroupInfo.h>
#include <aws/kafka/model/ClientAuthentication.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/BrokerSoftwareInfo.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <aws/kafka/model/OpenMonitoring.h>
#include <aws/kafka/model/LoggingInfo.h>
#include <aws/kafka/model/ClusterState.h>
#include <aws/kafka/model/StateInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
            <p>Returns information about a cluster.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterInfo">AWS
   * API Reference</a></p>
   */
  class ClusterInfo
  {
  public:
    AWS_KAFKA_API ClusterInfo() = default;
    AWS_KAFKA_API ClusterInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline const Aws::String& GetActiveOperationArn() const { return m_activeOperationArn; }
    inline bool ActiveOperationArnHasBeenSet() const { return m_activeOperationArnHasBeenSet; }
    template<typename ActiveOperationArnT = Aws::String>
    void SetActiveOperationArn(ActiveOperationArnT&& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = std::forward<ActiveOperationArnT>(value); }
    template<typename ActiveOperationArnT = Aws::String>
    ClusterInfo& WithActiveOperationArn(ActiveOperationArnT&& value) { SetActiveOperationArn(std::forward<ActiveOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const { return m_brokerNodeGroupInfo; }
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }
    template<typename BrokerNodeGroupInfoT = BrokerNodeGroupInfo>
    void SetBrokerNodeGroupInfo(BrokerNodeGroupInfoT&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::forward<BrokerNodeGroupInfoT>(value); }
    template<typename BrokerNodeGroupInfoT = BrokerNodeGroupInfo>
    ClusterInfo& WithBrokerNodeGroupInfo(BrokerNodeGroupInfoT&& value) { SetBrokerNodeGroupInfo(std::forward<BrokerNodeGroupInfoT>(value)); return *this;}
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
    ClusterInfo& WithClientAuthentication(ClientAuthenticationT&& value) { SetClientAuthentication(std::forward<ClientAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ClusterInfo& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    ClusterInfo& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ClusterInfo& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Apache Kafka brokers in the cluster.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const { return m_currentBrokerSoftwareInfo; }
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }
    template<typename CurrentBrokerSoftwareInfoT = BrokerSoftwareInfo>
    void SetCurrentBrokerSoftwareInfo(CurrentBrokerSoftwareInfoT&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::forward<CurrentBrokerSoftwareInfoT>(value); }
    template<typename CurrentBrokerSoftwareInfoT = BrokerSoftwareInfo>
    ClusterInfo& WithCurrentBrokerSoftwareInfo(CurrentBrokerSoftwareInfoT&& value) { SetCurrentBrokerSoftwareInfo(std::forward<CurrentBrokerSoftwareInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    ClusterInfo& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
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
    ClusterInfo& WithEncryptionInfo(EncryptionInfoT&& value) { SetEncryptionInfo(std::forward<EncryptionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has the following possible values: DEFAULT, PER_BROKER,
     * PER_TOPIC_PER_BROKER, and PER_TOPIC_PER_PARTITION. For a list of the metrics
     * associated with each of these levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline EnhancedMonitoring GetEnhancedMonitoring() const { return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    inline void SetEnhancedMonitoring(EnhancedMonitoring value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }
    inline ClusterInfo& WithEnhancedMonitoring(EnhancedMonitoring value) { SetEnhancedMonitoring(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Settings for open monitoring using Prometheus.</p>
         
     */
    inline const OpenMonitoring& GetOpenMonitoring() const { return m_openMonitoring; }
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }
    template<typename OpenMonitoringT = OpenMonitoring>
    void SetOpenMonitoring(OpenMonitoringT&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::forward<OpenMonitoringT>(value); }
    template<typename OpenMonitoringT = OpenMonitoring>
    ClusterInfo& WithOpenMonitoring(OpenMonitoringT&& value) { SetOpenMonitoring(std::forward<OpenMonitoringT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingInfo& GetLoggingInfo() const { return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    template<typename LoggingInfoT = LoggingInfo>
    void SetLoggingInfo(LoggingInfoT&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::forward<LoggingInfoT>(value); }
    template<typename LoggingInfoT = LoggingInfo>
    ClusterInfo& WithLoggingInfo(LoggingInfoT&& value) { SetLoggingInfo(std::forward<LoggingInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const { return m_numberOfBrokerNodes; }
    inline bool NumberOfBrokerNodesHasBeenSet() const { return m_numberOfBrokerNodesHasBeenSet; }
    inline void SetNumberOfBrokerNodes(int value) { m_numberOfBrokerNodesHasBeenSet = true; m_numberOfBrokerNodes = value; }
    inline ClusterInfo& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline ClusterState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ClusterState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ClusterInfo& WithState(ClusterState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const StateInfo& GetStateInfo() const { return m_stateInfo; }
    inline bool StateInfoHasBeenSet() const { return m_stateInfoHasBeenSet; }
    template<typename StateInfoT = StateInfo>
    void SetStateInfo(StateInfoT&& value) { m_stateInfoHasBeenSet = true; m_stateInfo = std::forward<StateInfoT>(value); }
    template<typename StateInfoT = StateInfo>
    ClusterInfo& WithStateInfo(StateInfoT&& value) { SetStateInfo(std::forward<StateInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ClusterInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ClusterInfo& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    ClusterInfo& WithZookeeperConnectString(ZookeeperConnectStringT&& value) { SetZookeeperConnectString(std::forward<ZookeeperConnectStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The connection string to use to connect to zookeeper cluster on
     * Tls port.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectStringTls() const { return m_zookeeperConnectStringTls; }
    inline bool ZookeeperConnectStringTlsHasBeenSet() const { return m_zookeeperConnectStringTlsHasBeenSet; }
    template<typename ZookeeperConnectStringTlsT = Aws::String>
    void SetZookeeperConnectStringTls(ZookeeperConnectStringTlsT&& value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls = std::forward<ZookeeperConnectStringTlsT>(value); }
    template<typename ZookeeperConnectStringTlsT = Aws::String>
    ClusterInfo& WithZookeeperConnectStringTls(ZookeeperConnectStringTlsT&& value) { SetZookeeperConnectStringTls(std::forward<ZookeeperConnectStringTlsT>(value)); return *this;}
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
    inline ClusterInfo& WithStorageMode(StorageMode value) { SetStorageMode(value); return *this;}
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
    inline ClusterInfo& WithCustomerActionStatus(CustomerActionStatus value) { SetCustomerActionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_activeOperationArn;
    bool m_activeOperationArnHasBeenSet = false;

    BrokerNodeGroupInfo m_brokerNodeGroupInfo;
    bool m_brokerNodeGroupInfoHasBeenSet = false;

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring{EnhancedMonitoring::NOT_SET};
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoring m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    int m_numberOfBrokerNodes{0};
    bool m_numberOfBrokerNodesHasBeenSet = false;

    ClusterState m_state{ClusterState::NOT_SET};
    bool m_stateHasBeenSet = false;

    StateInfo m_stateInfo;
    bool m_stateInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

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
