/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/model/ConsumerGroupReplicationUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/TopicReplicationUpdate.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * <p>Update information relating to replication between a given source and target
   * Kafka cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateReplicationInfoRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReplicationInfoRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateReplicationInfoRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationInfo"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Updated consumer group replication information.</p>
     */
    inline const ConsumerGroupReplicationUpdate& GetConsumerGroupReplication() const { return m_consumerGroupReplication; }
    inline bool ConsumerGroupReplicationHasBeenSet() const { return m_consumerGroupReplicationHasBeenSet; }
    template<typename ConsumerGroupReplicationT = ConsumerGroupReplicationUpdate>
    void SetConsumerGroupReplication(ConsumerGroupReplicationT&& value) { m_consumerGroupReplicationHasBeenSet = true; m_consumerGroupReplication = std::forward<ConsumerGroupReplicationT>(value); }
    template<typename ConsumerGroupReplicationT = ConsumerGroupReplicationUpdate>
    UpdateReplicationInfoRequest& WithConsumerGroupReplication(ConsumerGroupReplicationT&& value) { SetConsumerGroupReplication(std::forward<ConsumerGroupReplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current replicator version.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateReplicationInfoRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator to be updated.</p>
     */
    inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
    inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
    template<typename ReplicatorArnT = Aws::String>
    void SetReplicatorArn(ReplicatorArnT&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::forward<ReplicatorArnT>(value); }
    template<typename ReplicatorArnT = Aws::String>
    UpdateReplicationInfoRequest& WithReplicatorArn(ReplicatorArnT&& value) { SetReplicatorArn(std::forward<ReplicatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterArn() const { return m_sourceKafkaClusterArn; }
    inline bool SourceKafkaClusterArnHasBeenSet() const { return m_sourceKafkaClusterArnHasBeenSet; }
    template<typename SourceKafkaClusterArnT = Aws::String>
    void SetSourceKafkaClusterArn(SourceKafkaClusterArnT&& value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn = std::forward<SourceKafkaClusterArnT>(value); }
    template<typename SourceKafkaClusterArnT = Aws::String>
    UpdateReplicationInfoRequest& WithSourceKafkaClusterArn(SourceKafkaClusterArnT&& value) { SetSourceKafkaClusterArn(std::forward<SourceKafkaClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterArn() const { return m_targetKafkaClusterArn; }
    inline bool TargetKafkaClusterArnHasBeenSet() const { return m_targetKafkaClusterArnHasBeenSet; }
    template<typename TargetKafkaClusterArnT = Aws::String>
    void SetTargetKafkaClusterArn(TargetKafkaClusterArnT&& value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn = std::forward<TargetKafkaClusterArnT>(value); }
    template<typename TargetKafkaClusterArnT = Aws::String>
    UpdateReplicationInfoRequest& WithTargetKafkaClusterArn(TargetKafkaClusterArnT&& value) { SetTargetKafkaClusterArn(std::forward<TargetKafkaClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updated topic replication information.</p>
     */
    inline const TopicReplicationUpdate& GetTopicReplication() const { return m_topicReplication; }
    inline bool TopicReplicationHasBeenSet() const { return m_topicReplicationHasBeenSet; }
    template<typename TopicReplicationT = TopicReplicationUpdate>
    void SetTopicReplication(TopicReplicationT&& value) { m_topicReplicationHasBeenSet = true; m_topicReplication = std::forward<TopicReplicationT>(value); }
    template<typename TopicReplicationT = TopicReplicationUpdate>
    UpdateReplicationInfoRequest& WithTopicReplication(TopicReplicationT&& value) { SetTopicReplication(std::forward<TopicReplicationT>(value)); return *this;}
    ///@}
  private:

    ConsumerGroupReplicationUpdate m_consumerGroupReplication;
    bool m_consumerGroupReplicationHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;

    Aws::String m_sourceKafkaClusterArn;
    bool m_sourceKafkaClusterArnHasBeenSet = false;

    Aws::String m_targetKafkaClusterArn;
    bool m_targetKafkaClusterArnHasBeenSet = false;

    TopicReplicationUpdate m_topicReplication;
    bool m_topicReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
