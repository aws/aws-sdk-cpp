/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/ClusterState.h>
#include <aws/kafka/model/StateInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafka/model/Provisioned.h>
#include <aws/kafka/model/Serverless.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Cluster">AWS API
   * Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_KAFKA_API Cluster();
    AWS_KAFKA_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline const Aws::String& GetActiveOperationArn() const{ return m_activeOperationArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline bool ActiveOperationArnHasBeenSet() const { return m_activeOperationArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline void SetActiveOperationArn(const Aws::String& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline void SetActiveOperationArn(Aws::String&& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline void SetActiveOperationArn(const char* value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline Cluster& WithActiveOperationArn(const Aws::String& value) { SetActiveOperationArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline Cluster& WithActiveOperationArn(Aws::String&& value) { SetActiveOperationArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline Cluster& WithActiveOperationArn(const char* value) { SetActiveOperationArn(value); return *this;}


    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline const ClusterType& GetClusterType() const{ return m_clusterType; }

    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline void SetClusterType(const ClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline void SetClusterType(ClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline Cluster& WithClusterType(const ClusterType& value) { SetClusterType(value); return *this;}

    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline Cluster& WithClusterType(ClusterType&& value) { SetClusterType(std::move(value)); return *this;}


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
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * cluster.</p>
         
     */
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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
    inline Cluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline Cluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the cluster.</p>
         
     */
    inline Cluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


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
    inline Cluster& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the cluster was created.</p>
         
     */
    inline Cluster& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline Cluster& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline Cluster& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The current version of the MSK cluster.</p>
         
     */
    inline Cluster& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline Cluster& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline Cluster& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}


    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline const StateInfo& GetStateInfo() const{ return m_stateInfo; }

    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline bool StateInfoHasBeenSet() const { return m_stateInfoHasBeenSet; }

    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline void SetStateInfo(const StateInfo& value) { m_stateInfoHasBeenSet = true; m_stateInfo = value; }

    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline void SetStateInfo(StateInfo&& value) { m_stateInfoHasBeenSet = true; m_stateInfo = std::move(value); }

    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline Cluster& WithStateInfo(const StateInfo& value) { SetStateInfo(value); return *this;}

    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline Cluster& WithStateInfo(StateInfo&& value) { SetStateInfo(std::move(value)); return *this;}


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
    inline Cluster& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * 
            <p>Tags attached to the cluster.</p>
         
     */
    inline Cluster& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline const Provisioned& GetProvisioned() const{ return m_provisioned; }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline void SetProvisioned(const Provisioned& value) { m_provisionedHasBeenSet = true; m_provisioned = value; }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline void SetProvisioned(Provisioned&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::move(value); }

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline Cluster& WithProvisioned(const Provisioned& value) { SetProvisioned(value); return *this;}

    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline Cluster& WithProvisioned(Provisioned&& value) { SetProvisioned(std::move(value)); return *this;}


    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline const Serverless& GetServerless() const{ return m_serverless; }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline bool ServerlessHasBeenSet() const { return m_serverlessHasBeenSet; }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline void SetServerless(const Serverless& value) { m_serverlessHasBeenSet = true; m_serverless = value; }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline void SetServerless(Serverless&& value) { m_serverlessHasBeenSet = true; m_serverless = std::move(value); }

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline Cluster& WithServerless(const Serverless& value) { SetServerless(value); return *this;}

    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline Cluster& WithServerless(Serverless&& value) { SetServerless(std::move(value)); return *this;}

  private:

    Aws::String m_activeOperationArn;
    bool m_activeOperationArnHasBeenSet = false;

    ClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    ClusterState m_state;
    bool m_stateHasBeenSet = false;

    StateInfo m_stateInfo;
    bool m_stateInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Provisioned m_provisioned;
    bool m_provisionedHasBeenSet = false;

    Serverless m_serverless;
    bool m_serverlessHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
