/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ReplicatorState.h>
#include <aws/kafka/model/ReplicationStateInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafka/model/KafkaClusterDescription.h>
#include <aws/kafka/model/ReplicationInfoDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{
  class DescribeReplicatorResult
  {
  public:
    AWS_KAFKA_API DescribeReplicatorResult() = default;
    AWS_KAFKA_API DescribeReplicatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeReplicatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time when the replicator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeReplicatorResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version number of the replicator.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    DescribeReplicatorResult& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this resource is a replicator reference.</p>
     */
    inline bool GetIsReplicatorReference() const { return m_isReplicatorReference; }
    inline void SetIsReplicatorReference(bool value) { m_isReplicatorReferenceHasBeenSet = true; m_isReplicatorReference = value; }
    inline DescribeReplicatorResult& WithIsReplicatorReference(bool value) { SetIsReplicatorReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kafka Clusters used in setting up sources / targets for replication.</p>
     */
    inline const Aws::Vector<KafkaClusterDescription>& GetKafkaClusters() const { return m_kafkaClusters; }
    template<typename KafkaClustersT = Aws::Vector<KafkaClusterDescription>>
    void SetKafkaClusters(KafkaClustersT&& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters = std::forward<KafkaClustersT>(value); }
    template<typename KafkaClustersT = Aws::Vector<KafkaClusterDescription>>
    DescribeReplicatorResult& WithKafkaClusters(KafkaClustersT&& value) { SetKafkaClusters(std::forward<KafkaClustersT>(value)); return *this;}
    template<typename KafkaClustersT = KafkaClusterDescription>
    DescribeReplicatorResult& AddKafkaClusters(KafkaClustersT&& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters.emplace_back(std::forward<KafkaClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline const Aws::Vector<ReplicationInfoDescription>& GetReplicationInfoList() const { return m_replicationInfoList; }
    template<typename ReplicationInfoListT = Aws::Vector<ReplicationInfoDescription>>
    void SetReplicationInfoList(ReplicationInfoListT&& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList = std::forward<ReplicationInfoListT>(value); }
    template<typename ReplicationInfoListT = Aws::Vector<ReplicationInfoDescription>>
    DescribeReplicatorResult& WithReplicationInfoList(ReplicationInfoListT&& value) { SetReplicationInfoList(std::forward<ReplicationInfoListT>(value)); return *this;}
    template<typename ReplicationInfoListT = ReplicationInfoDescription>
    DescribeReplicatorResult& AddReplicationInfoList(ReplicationInfoListT&& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList.emplace_back(std::forward<ReplicationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
    template<typename ReplicatorArnT = Aws::String>
    void SetReplicatorArn(ReplicatorArnT&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::forward<ReplicatorArnT>(value); }
    template<typename ReplicatorArnT = Aws::String>
    DescribeReplicatorResult& WithReplicatorArn(ReplicatorArnT&& value) { SetReplicatorArn(std::forward<ReplicatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorDescription() const { return m_replicatorDescription; }
    template<typename ReplicatorDescriptionT = Aws::String>
    void SetReplicatorDescription(ReplicatorDescriptionT&& value) { m_replicatorDescriptionHasBeenSet = true; m_replicatorDescription = std::forward<ReplicatorDescriptionT>(value); }
    template<typename ReplicatorDescriptionT = Aws::String>
    DescribeReplicatorResult& WithReplicatorDescription(ReplicatorDescriptionT&& value) { SetReplicatorDescription(std::forward<ReplicatorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorName() const { return m_replicatorName; }
    template<typename ReplicatorNameT = Aws::String>
    void SetReplicatorName(ReplicatorNameT&& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = std::forward<ReplicatorNameT>(value); }
    template<typename ReplicatorNameT = Aws::String>
    DescribeReplicatorResult& WithReplicatorName(ReplicatorNameT&& value) { SetReplicatorName(std::forward<ReplicatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator resource in the region where
     * the replicator was created.</p>
     */
    inline const Aws::String& GetReplicatorResourceArn() const { return m_replicatorResourceArn; }
    template<typename ReplicatorResourceArnT = Aws::String>
    void SetReplicatorResourceArn(ReplicatorResourceArnT&& value) { m_replicatorResourceArnHasBeenSet = true; m_replicatorResourceArn = std::forward<ReplicatorResourceArnT>(value); }
    template<typename ReplicatorResourceArnT = Aws::String>
    DescribeReplicatorResult& WithReplicatorResourceArn(ReplicatorResourceArnT&& value) { SetReplicatorResourceArn(std::forward<ReplicatorResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the replicator.</p>
     */
    inline ReplicatorState GetReplicatorState() const { return m_replicatorState; }
    inline void SetReplicatorState(ReplicatorState value) { m_replicatorStateHasBeenSet = true; m_replicatorState = value; }
    inline DescribeReplicatorResult& WithReplicatorState(ReplicatorState value) { SetReplicatorState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used by the replicator to
     * access resources in the customer's account (e.g source and target clusters)</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value); }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    DescribeReplicatorResult& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the state of the replicator.</p>
     */
    inline const ReplicationStateInfo& GetStateInfo() const { return m_stateInfo; }
    template<typename StateInfoT = ReplicationStateInfo>
    void SetStateInfo(StateInfoT&& value) { m_stateInfoHasBeenSet = true; m_stateInfo = std::forward<StateInfoT>(value); }
    template<typename StateInfoT = ReplicationStateInfo>
    DescribeReplicatorResult& WithStateInfo(StateInfoT&& value) { SetStateInfo(std::forward<StateInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags attached to the Replicator.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeReplicatorResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeReplicatorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicatorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    bool m_isReplicatorReference{false};
    bool m_isReplicatorReferenceHasBeenSet = false;

    Aws::Vector<KafkaClusterDescription> m_kafkaClusters;
    bool m_kafkaClustersHasBeenSet = false;

    Aws::Vector<ReplicationInfoDescription> m_replicationInfoList;
    bool m_replicationInfoListHasBeenSet = false;

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;

    Aws::String m_replicatorDescription;
    bool m_replicatorDescriptionHasBeenSet = false;

    Aws::String m_replicatorName;
    bool m_replicatorNameHasBeenSet = false;

    Aws::String m_replicatorResourceArn;
    bool m_replicatorResourceArnHasBeenSet = false;

    ReplicatorState m_replicatorState{ReplicatorState::NOT_SET};
    bool m_replicatorStateHasBeenSet = false;

    Aws::String m_serviceExecutionRoleArn;
    bool m_serviceExecutionRoleArnHasBeenSet = false;

    ReplicationStateInfo m_stateInfo;
    bool m_stateInfoHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
