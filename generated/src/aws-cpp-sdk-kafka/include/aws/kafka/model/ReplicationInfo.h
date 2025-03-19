/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ConsumerGroupReplication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/TargetCompressionType.h>
#include <aws/kafka/model/TopicReplication.h>
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
   * <p>Specifies configuration for replication between a source and target Kafka
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicationInfo">AWS
   * API Reference</a></p>
   */
  class ReplicationInfo
  {
  public:
    AWS_KAFKA_API ReplicationInfo() = default;
    AWS_KAFKA_API ReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline const ConsumerGroupReplication& GetConsumerGroupReplication() const { return m_consumerGroupReplication; }
    inline bool ConsumerGroupReplicationHasBeenSet() const { return m_consumerGroupReplicationHasBeenSet; }
    template<typename ConsumerGroupReplicationT = ConsumerGroupReplication>
    void SetConsumerGroupReplication(ConsumerGroupReplicationT&& value) { m_consumerGroupReplicationHasBeenSet = true; m_consumerGroupReplication = std::forward<ConsumerGroupReplicationT>(value); }
    template<typename ConsumerGroupReplicationT = ConsumerGroupReplication>
    ReplicationInfo& WithConsumerGroupReplication(ConsumerGroupReplicationT&& value) { SetConsumerGroupReplication(std::forward<ConsumerGroupReplicationT>(value)); return *this;}
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
    ReplicationInfo& WithSourceKafkaClusterArn(SourceKafkaClusterArnT&& value) { SetSourceKafkaClusterArn(std::forward<SourceKafkaClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline TargetCompressionType GetTargetCompressionType() const { return m_targetCompressionType; }
    inline bool TargetCompressionTypeHasBeenSet() const { return m_targetCompressionTypeHasBeenSet; }
    inline void SetTargetCompressionType(TargetCompressionType value) { m_targetCompressionTypeHasBeenSet = true; m_targetCompressionType = value; }
    inline ReplicationInfo& WithTargetCompressionType(TargetCompressionType value) { SetTargetCompressionType(value); return *this;}
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
    ReplicationInfo& WithTargetKafkaClusterArn(TargetKafkaClusterArnT&& value) { SetTargetKafkaClusterArn(std::forward<TargetKafkaClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline const TopicReplication& GetTopicReplication() const { return m_topicReplication; }
    inline bool TopicReplicationHasBeenSet() const { return m_topicReplicationHasBeenSet; }
    template<typename TopicReplicationT = TopicReplication>
    void SetTopicReplication(TopicReplicationT&& value) { m_topicReplicationHasBeenSet = true; m_topicReplication = std::forward<TopicReplicationT>(value); }
    template<typename TopicReplicationT = TopicReplication>
    ReplicationInfo& WithTopicReplication(TopicReplicationT&& value) { SetTopicReplication(std::forward<TopicReplicationT>(value)); return *this;}
    ///@}
  private:

    ConsumerGroupReplication m_consumerGroupReplication;
    bool m_consumerGroupReplicationHasBeenSet = false;

    Aws::String m_sourceKafkaClusterArn;
    bool m_sourceKafkaClusterArnHasBeenSet = false;

    TargetCompressionType m_targetCompressionType{TargetCompressionType::NOT_SET};
    bool m_targetCompressionTypeHasBeenSet = false;

    Aws::String m_targetKafkaClusterArn;
    bool m_targetKafkaClusterArnHasBeenSet = false;

    TopicReplication m_topicReplication;
    bool m_topicReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
