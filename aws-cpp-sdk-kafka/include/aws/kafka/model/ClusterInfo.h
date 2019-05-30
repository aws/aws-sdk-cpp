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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/BrokerNodeGroupInfo.h>
#include <aws/kafka/model/ClientAuthentication.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/BrokerSoftwareInfo.h>
#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/kafka/model/EnhancedMonitoring.h>
#include <aws/kafka/model/ClusterState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_KAFKA_API ClusterInfo
  {
  public:
    ClusterInfo();
    ClusterInfo(Aws::Utils::Json::JsonView jsonValue);
    ClusterInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline const Aws::String& GetActiveOperationArn() const{ return m_activeOperationArn; }

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline bool ActiveOperationArnHasBeenSet() const { return m_activeOperationArnHasBeenSet; }

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline void SetActiveOperationArn(const Aws::String& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = value; }

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline void SetActiveOperationArn(Aws::String&& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = std::move(value); }

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline void SetActiveOperationArn(const char* value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn.assign(value); }

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline ClusterInfo& WithActiveOperationArn(const Aws::String& value) { SetActiveOperationArn(value); return *this;}

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline ClusterInfo& WithActiveOperationArn(Aws::String&& value) { SetActiveOperationArn(std::move(value)); return *this;}

    /**
     * 
            <p>Arn of active cluster operation.</p>
         
     */
    inline ClusterInfo& WithActiveOperationArn(const char* value) { SetActiveOperationArn(value); return *this;}


    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline const BrokerNodeGroupInfo& GetBrokerNodeGroupInfo() const{ return m_brokerNodeGroupInfo; }

    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline bool BrokerNodeGroupInfoHasBeenSet() const { return m_brokerNodeGroupInfoHasBeenSet; }

    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline void SetBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = value; }

    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline void SetBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { m_brokerNodeGroupInfoHasBeenSet = true; m_brokerNodeGroupInfo = std::move(value); }

    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline ClusterInfo& WithBrokerNodeGroupInfo(const BrokerNodeGroupInfo& value) { SetBrokerNodeGroupInfo(value); return *this;}

    /**
     * 
            <p>Information about the broker nodes.</p>
         
     */
    inline ClusterInfo& WithBrokerNodeGroupInfo(BrokerNodeGroupInfo&& value) { SetBrokerNodeGroupInfo(std::move(value)); return *this;}


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
    inline ClusterInfo& WithClientAuthentication(const ClientAuthentication& value) { SetClientAuthentication(value); return *this;}

    /**
     * 
            <p>Includes all client authentication information.</p>
         
     */
    inline ClusterInfo& WithClientAuthentication(ClientAuthentication&& value) { SetClientAuthentication(std::move(value)); return *this;}


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline ClusterInfo& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline ClusterInfo& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline ClusterInfo& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline ClusterInfo& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline ClusterInfo& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline ClusterInfo& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline ClusterInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline ClusterInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline const BrokerSoftwareInfo& GetCurrentBrokerSoftwareInfo() const{ return m_currentBrokerSoftwareInfo; }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline bool CurrentBrokerSoftwareInfoHasBeenSet() const { return m_currentBrokerSoftwareInfoHasBeenSet; }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline void SetCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = value; }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline void SetCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { m_currentBrokerSoftwareInfoHasBeenSet = true; m_currentBrokerSoftwareInfo = std::move(value); }

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline ClusterInfo& WithCurrentBrokerSoftwareInfo(const BrokerSoftwareInfo& value) { SetCurrentBrokerSoftwareInfo(value); return *this;}

    /**
     * 
            <p>Information about the version of software currently deployed on
     * the Kafka brokers in the cluster.</p>
         
     */
    inline ClusterInfo& WithCurrentBrokerSoftwareInfo(BrokerSoftwareInfo&& value) { SetCurrentBrokerSoftwareInfo(std::move(value)); return *this;}


    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline ClusterInfo& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline ClusterInfo& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline ClusterInfo& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


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
    inline ClusterInfo& WithEncryptionInfo(const EncryptionInfo& value) { SetEncryptionInfo(value); return *this;}

    /**
     * 
            <p>Includes all encryption-related information.</p>
         
     */
    inline ClusterInfo& WithEncryptionInfo(EncryptionInfo&& value) { SetEncryptionInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has three possible values: DEFAULT, PER_BROKER, and
     * PER_TOPIC_PER_BROKER. For a list of the metrics associated with each of these
     * three levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline const EnhancedMonitoring& GetEnhancedMonitoring() const{ return m_enhancedMonitoring; }

    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has three possible values: DEFAULT, PER_BROKER, and
     * PER_TOPIC_PER_BROKER. For a list of the metrics associated with each of these
     * three levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }

    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has three possible values: DEFAULT, PER_BROKER, and
     * PER_TOPIC_PER_BROKER. For a list of the metrics associated with each of these
     * three levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline void SetEnhancedMonitoring(const EnhancedMonitoring& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = value; }

    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has three possible values: DEFAULT, PER_BROKER, and
     * PER_TOPIC_PER_BROKER. For a list of the metrics associated with each of these
     * three levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline void SetEnhancedMonitoring(EnhancedMonitoring&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::move(value); }

    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has three possible values: DEFAULT, PER_BROKER, and
     * PER_TOPIC_PER_BROKER. For a list of the metrics associated with each of these
     * three levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline ClusterInfo& WithEnhancedMonitoring(const EnhancedMonitoring& value) { SetEnhancedMonitoring(value); return *this;}

    /**
     * 
            <p>Specifies which metrics are gathered for the MSK cluster. This
     * property has three possible values: DEFAULT, PER_BROKER, and
     * PER_TOPIC_PER_BROKER. For a list of the metrics associated with each of these
     * three levels of monitoring, see <a
     * href="https://docs.aws.amazon.com/msk/latest/developerguide/monitoring.html">Monitoring</a>.</p>

     *         
     */
    inline ClusterInfo& WithEnhancedMonitoring(EnhancedMonitoring&& value) { SetEnhancedMonitoring(std::move(value)); return *this;}


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
    inline ClusterInfo& WithNumberOfBrokerNodes(int value) { SetNumberOfBrokerNodes(value); return *this;}


    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline ClusterInfo& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline ClusterInfo& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}


    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline ClusterInfo& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline ClusterInfo& WithZookeeperConnectString(const Aws::String& value) { SetZookeeperConnectString(value); return *this;}

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline ClusterInfo& WithZookeeperConnectString(Aws::String&& value) { SetZookeeperConnectString(std::move(value)); return *this;}

    /**
     * 
            <p>The connection string to use to connect to the Apache ZooKeeper
     * cluster.</p>
         
     */
    inline ClusterInfo& WithZookeeperConnectString(const char* value) { SetZookeeperConnectString(value); return *this;}

  private:

    Aws::String m_activeOperationArn;
    bool m_activeOperationArnHasBeenSet;

    BrokerNodeGroupInfo m_brokerNodeGroupInfo;
    bool m_brokerNodeGroupInfoHasBeenSet;

    ClientAuthentication m_clientAuthentication;
    bool m_clientAuthenticationHasBeenSet;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    BrokerSoftwareInfo m_currentBrokerSoftwareInfo;
    bool m_currentBrokerSoftwareInfoHasBeenSet;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;

    EncryptionInfo m_encryptionInfo;
    bool m_encryptionInfoHasBeenSet;

    EnhancedMonitoring m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet;

    int m_numberOfBrokerNodes;
    bool m_numberOfBrokerNodesHasBeenSet;

    ClusterState m_state;
    bool m_stateHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_zookeeperConnectString;
    bool m_zookeeperConnectStringHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
