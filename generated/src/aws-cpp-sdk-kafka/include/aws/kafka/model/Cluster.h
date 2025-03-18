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
    AWS_KAFKA_API Cluster() = default;
    AWS_KAFKA_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a
     * cluster operation.</p>
         
     */
    inline const Aws::String& GetActiveOperationArn() const { return m_activeOperationArn; }
    inline bool ActiveOperationArnHasBeenSet() const { return m_activeOperationArnHasBeenSet; }
    template<typename ActiveOperationArnT = Aws::String>
    void SetActiveOperationArn(ActiveOperationArnT&& value) { m_activeOperationArnHasBeenSet = true; m_activeOperationArn = std::forward<ActiveOperationArnT>(value); }
    template<typename ActiveOperationArnT = Aws::String>
    Cluster& WithActiveOperationArn(ActiveOperationArnT&& value) { SetActiveOperationArn(std::forward<ActiveOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Cluster Type.</p>
         
     */
    inline ClusterType GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(ClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline Cluster& WithClusterType(ClusterType value) { SetClusterType(value); return *this;}
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
    Cluster& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
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
    Cluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
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
    Cluster& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    Cluster& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
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
    inline Cluster& WithState(ClusterState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>State Info for the Amazon MSK cluster.</p>
         
     */
    inline const StateInfo& GetStateInfo() const { return m_stateInfo; }
    inline bool StateInfoHasBeenSet() const { return m_stateInfoHasBeenSet; }
    template<typename StateInfoT = StateInfo>
    void SetStateInfo(StateInfoT&& value) { m_stateInfoHasBeenSet = true; m_stateInfo = std::forward<StateInfoT>(value); }
    template<typename StateInfoT = StateInfo>
    Cluster& WithStateInfo(StateInfoT&& value) { SetStateInfo(std::forward<StateInfoT>(value)); return *this;}
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
    Cluster& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Cluster& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * 
            <p>Information about the provisioned cluster.</p>
         
     */
    inline const Provisioned& GetProvisioned() const { return m_provisioned; }
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }
    template<typename ProvisionedT = Provisioned>
    void SetProvisioned(ProvisionedT&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::forward<ProvisionedT>(value); }
    template<typename ProvisionedT = Provisioned>
    Cluster& WithProvisioned(ProvisionedT&& value) { SetProvisioned(std::forward<ProvisionedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the serverless cluster.</p>
         
     */
    inline const Serverless& GetServerless() const { return m_serverless; }
    inline bool ServerlessHasBeenSet() const { return m_serverlessHasBeenSet; }
    template<typename ServerlessT = Serverless>
    void SetServerless(ServerlessT&& value) { m_serverlessHasBeenSet = true; m_serverless = std::forward<ServerlessT>(value); }
    template<typename ServerlessT = Serverless>
    Cluster& WithServerless(ServerlessT&& value) { SetServerless(std::forward<ServerlessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activeOperationArn;
    bool m_activeOperationArnHasBeenSet = false;

    ClusterType m_clusterType{ClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    ClusterState m_state{ClusterState::NOT_SET};
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
