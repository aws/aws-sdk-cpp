﻿/**
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
    AWS_KAFKA_API ClusterInfo();
    AWS_KAFKA_API ClusterInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline const Aws::String& GetActiveOperationArn() const{ return m_activeOperationArn; }
    inline bool ActiveOperationArnHasBeenSet() const { return m_activeOperationArnHasBeenSet; }
    inline void SetActiveOperationArn(const Aws::String& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = value; }
    inline void SetActiveOperationArn(Aws::String&& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = std::move(value); }
    inline void SetActiveOperationArn(const char* value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn.assign(value); }
    inline ClusterInfo& WithActiveOperationArn(const Aws::String& value) { SetActiveOperationArn(value); return *this;}
    inline ClusterInfo& WithActiveOperationArn(Aws::String&& value) { SetActiveOperationArn(std::move(value)); return *this;}
    inline ClusterInfo& WithActiveOperationArn(const char* value) { SetActiveOperationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const{ return m_brokerNodeGroupInfo; }
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }
    inline void SetBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = value; }
    inline void SetBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::move(value); }
    inline ClusterInfo& WithBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { SetBrokerNodeGroupInfo(value); return *this;}
    inline ClusterInfo& WithBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { SetBrokerNodeGroupInfo(std::move(value)); return *this;}
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
    inline ClusterInfo& WithClientAuthentication(const ClientAuthentication& value) { SetClientAuthentication(value); return *this;}
    inline ClusterInfo& WithClientAuthentication(ClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ClusterInfo& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterInfo& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterInfo& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline ClusterInfo& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline ClusterInfo& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline ClusterInfo& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ClusterInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ClusterInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Apache Kafka brokers in the cluster.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const{ return m_currentBrokerSoftwareInfo; }
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }
    inline void SetCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = value; }
    inline void SetCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::move(value); }
    inline ClusterInfo& WithCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { SetCurrentBrokerSoftwareInfo(value); return *this;}
    inline ClusterInfo& WithCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { SetCurrentBrokerSoftwareInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline ClusterInfo& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline ClusterInfo& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline ClusterInfo& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
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
    inline ClusterInfo& WithEncryptionInfo(const EncryptionInfo& value) { SetEncryptionInfo(value); return *this;}
    inline ClusterInfo& WithEncryptionInfo(EncryptionInfo&& value) { SetEncryptionInfo(std::move(value)); return *this;}
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
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }
    inline ClusterInfo& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}
    inline ClusterInfo& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Settings for open monitoring using Prometheus.</p>
         
     */
    inline const OpenMonitoring& GetOpenMonitoring() const{ return m_openMonitoring; }
    inline bool OpenMonitoringHasBeenSet() const { return m_openMonitoringHasBeenSet; }
    inline void SetOpenMonitoring(const OpenMonitoring& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = value; }
    inline void SetOpenMonitoring(OpenMonitoring&& value) { m_openMonitoringHasBeenSet = true; m_openMonitoring = std::move(value); }
    inline ClusterInfo& WithOpenMonitoring(const OpenMonitoring& value) { SetOpenMonitoring(value); return *this;}
    inline ClusterInfo& WithOpenMonitoring(OpenMonitoring&& value) { SetOpenMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }
    inline ClusterInfo& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}
    inline ClusterInfo& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The number of broker nodes in the cluster.</p>
         
     */
    inline int GetNumberOfBrokerNodes() const{ return m_numberOfBrokerNodes; }
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
    inline const ClusterState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ClusterInfo& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline ClusterInfo& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StateInfo& GetStateInfo() const{ return m_stateInfo; }
    inline bool StateInfoHasBeenSet() const { return m_stateInfoHasBeenSet; }
    inline void SetStateInfo(const StateInfo& value) { m_stateInfoHasBeenSet = true; m_stateInfo = value; }
    inline void SetStateInfo(StateInfo&& value) { m_stateInfoHasBeenSet = true; m_stateInfo = std::move(value); }
    inline ClusterInfo& WithStateInfo(const StateInfo& value) { SetStateInfo(value); return *this;}
    inline ClusterInfo& WithStateInfo(StateInfo&& value) { SetStateInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ClusterInfo& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ClusterInfo& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ClusterInfo& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ClusterInfo& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ClusterInfo& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ClusterInfo& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ClusterInfo& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ClusterInfo& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ClusterInfo& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectString() const{ return m_zookeeperConnectString; }
    inline bool ZookeeperConnectStringHasBeenSet() const { return m_zookeeperConnectStringHasBeenSet; }
    inline void SetZookeeperConnectString(const Aws::String& value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString = value; }
    inline void SetZookeeperConnectString(Aws::String&& value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString = std::move(value); }
    inline void SetZookeeperConnectString(const char* value) { m_zookeeperConnectStringHasBeenSet = true; m_zookeeperConnectString.assign(value); }
    inline ClusterInfo& WithZookeeperConnectString(const Aws::String& value) { SetZookeeperConnectString(value); return *this;}
    inline ClusterInfo& WithZookeeperConnectString(Aws::String&& value) { SetZookeeperConnectString(std::move(value)); return *this;}
    inline ClusterInfo& WithZookeeperConnectString(const char* value) { SetZookeeperConnectString(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The connection string to use to connect to zookeeper cluster on
     * Tls port.</p>
         
     */
    inline const Aws::String& GetZookeeperConnectStringTls() const{ return m_zookeeperConnectStringTls; }
    inline bool ZookeeperConnectStringTlsHasBeenSet() const { return m_zookeeperConnectStringTlsHasBeenSet; }
    inline void SetZookeeperConnectStringTls(const Aws::String& value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls = value; }
    inline void SetZookeeperConnectStringTls(Aws::String&& value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls = std::move(value); }
    inline void SetZookeeperConnectStringTls(const char* value) { m_zookeeperConnectStringTlsHasBeenSet = true; m_zookeeperConnectStringTls.assign(value); }
    inline ClusterInfo& WithZookeeperConnectStringTls(const Aws::String& value) { SetZookeeperConnectStringTls(value); return *this;}
    inline ClusterInfo& WithZookeeperConnectStringTls(Aws::String&& value) { SetZookeeperConnectStringTls(std::move(value)); return *this;}
    inline ClusterInfo& WithZookeeperConnectStringTls(const char* value) { SetZookeeperConnectStringTls(value); return *this;}
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
    inline ClusterInfo& WithStorageMode(const StorageMode& value) { SetStorageMode(value); return *this;}
    inline ClusterInfo& WithStorageMode(StorageMode&& value) { SetStorageMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Determines if there is an action required from the
     * customer.</p>
         
     */
    inline const CustomerActionStatus& GetCustomerActionStatus() const{ return m_customerActionStatus; }
    inline bool CustomerActionStatusHasBeenSet() const { return m_customerActionStatusHasBeenSet; }
    inline void SetCustomerActionStatus(const CustomerActionStatus& value) { m_customerActionStatusHasBeenSet = true; m_customerActionStatus = value; }
    inline void SetCustomerActionStatus(CustomerActionStatus&& value) { m_customerActionStatusHasBeenSet = true; m_customerActionStatus = std::move(value); }
    inline ClusterInfo& WithCustomerActionStatus(const CustomerActionStatus& value) { SetCustomerActionStatus(value); return *this;}
    inline ClusterInfo& WithCustomerActionStatus(CustomerActionStatus&& value) { SetCustomerActionStatus(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet = false;

    EnhancedMonitoring m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet = false;

    OpenMonitoring m_openMonitoring;
    bool m_openMonitoringHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet = false;

    ClusterState m_state;
    bool m_stateHasBeenSet = false;

    StateInfo m_stateInfo;
    bool m_stateInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_zookeeperConnectString;
    bool m_zookeeperConnectStringHasBeenSet = false;

    Aws::String m_zookeeperConnectStringTls;
    bool m_zookeeperConnectStringTlsHasBeenSet = false;

    StorageMode m_storageMode;
    bool m_storageModeHasBeenSet = false;

    CustomerActionStatus m_customerActionStatus;
    bool m_customerActionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
