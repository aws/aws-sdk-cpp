/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kafka/model/KafkaCluster.h>
#include <aws/kafka/model/ReplicationInfo.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * <p>Creates a replicator using the specified configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateReplicatorRequest">AWS
   * API Reference</a></p>
   */
  class CreateReplicatorRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API CreateReplicatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicator"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A summary description of the replicator.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateReplicatorRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kafka Clusters to use in setting up sources / targets for replication.</p>
     */
    inline const Aws::Vector<KafkaCluster>& GetKafkaClusters() const { return m_kafkaClusters; }
    inline bool KafkaClustersHasBeenSet() const { return m_kafkaClustersHasBeenSet; }
    template<typename KafkaClustersT = Aws::Vector<KafkaCluster>>
    void SetKafkaClusters(KafkaClustersT&& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters = std::forward<KafkaClustersT>(value); }
    template<typename KafkaClustersT = Aws::Vector<KafkaCluster>>
    CreateReplicatorRequest& WithKafkaClusters(KafkaClustersT&& value) { SetKafkaClusters(std::forward<KafkaClustersT>(value)); return *this;}
    template<typename KafkaClustersT = KafkaCluster>
    CreateReplicatorRequest& AddKafkaClusters(KafkaClustersT&& value) { m_kafkaClustersHasBeenSet = true; m_kafkaClusters.emplace_back(std::forward<KafkaClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of replication configurations, where each configuration targets a
     * given source cluster to target cluster replication flow.</p>
     */
    inline const Aws::Vector<ReplicationInfo>& GetReplicationInfoList() const { return m_replicationInfoList; }
    inline bool ReplicationInfoListHasBeenSet() const { return m_replicationInfoListHasBeenSet; }
    template<typename ReplicationInfoListT = Aws::Vector<ReplicationInfo>>
    void SetReplicationInfoList(ReplicationInfoListT&& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList = std::forward<ReplicationInfoListT>(value); }
    template<typename ReplicationInfoListT = Aws::Vector<ReplicationInfo>>
    CreateReplicatorRequest& WithReplicationInfoList(ReplicationInfoListT&& value) { SetReplicationInfoList(std::forward<ReplicationInfoListT>(value)); return *this;}
    template<typename ReplicationInfoListT = ReplicationInfo>
    CreateReplicatorRequest& AddReplicationInfoList(ReplicationInfoListT&& value) { m_replicationInfoListHasBeenSet = true; m_replicationInfoList.emplace_back(std::forward<ReplicationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the replicator. Alpha-numeric characters with '-' are
     * allowed.</p>
     */
    inline const Aws::String& GetReplicatorName() const { return m_replicatorName; }
    inline bool ReplicatorNameHasBeenSet() const { return m_replicatorNameHasBeenSet; }
    template<typename ReplicatorNameT = Aws::String>
    void SetReplicatorName(ReplicatorNameT&& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = std::forward<ReplicatorNameT>(value); }
    template<typename ReplicatorNameT = Aws::String>
    CreateReplicatorRequest& WithReplicatorName(ReplicatorNameT&& value) { SetReplicatorName(std::forward<ReplicatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used by the replicator to access resources in the
     * customer's account (e.g source and target clusters)</p>
     */
    inline const Aws::String& GetServiceExecutionRoleArn() const { return m_serviceExecutionRoleArn; }
    inline bool ServiceExecutionRoleArnHasBeenSet() const { return m_serviceExecutionRoleArnHasBeenSet; }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    void SetServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { m_serviceExecutionRoleArnHasBeenSet = true; m_serviceExecutionRoleArn = std::forward<ServiceExecutionRoleArnT>(value); }
    template<typename ServiceExecutionRoleArnT = Aws::String>
    CreateReplicatorRequest& WithServiceExecutionRoleArn(ServiceExecutionRoleArnT&& value) { SetServiceExecutionRoleArn(std::forward<ServiceExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags to attach to created Replicator.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReplicatorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateReplicatorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<KafkaCluster> m_kafkaClusters;
    bool m_kafkaClustersHasBeenSet = false;

    Aws::Vector<ReplicationInfo> m_replicationInfoList;
    bool m_replicationInfoListHasBeenSet = false;

    Aws::String m_replicatorName;
    bool m_replicatorNameHasBeenSet = false;

    Aws::String m_serviceExecutionRoleArn;
    bool m_serviceExecutionRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
