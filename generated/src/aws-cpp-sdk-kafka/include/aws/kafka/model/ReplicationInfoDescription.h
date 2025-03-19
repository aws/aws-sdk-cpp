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
   * cluster (sourceKafkaClusterAlias -> targetKafkaClusterAlias)</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicationInfoDescription">AWS
   * API Reference</a></p>
   */
  class ReplicationInfoDescription
  {
  public:
    AWS_KAFKA_API ReplicationInfoDescription() = default;
    AWS_KAFKA_API ReplicationInfoDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationInfoDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ReplicationInfoDescription& WithConsumerGroupReplication(ConsumerGroupReplicationT&& value) { SetConsumerGroupReplication(std::forward<ConsumerGroupReplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterAlias() const { return m_sourceKafkaClusterAlias; }
    inline bool SourceKafkaClusterAliasHasBeenSet() const { return m_sourceKafkaClusterAliasHasBeenSet; }
    template<typename SourceKafkaClusterAliasT = Aws::String>
    void SetSourceKafkaClusterAlias(SourceKafkaClusterAliasT&& value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias = std::forward<SourceKafkaClusterAliasT>(value); }
    template<typename SourceKafkaClusterAliasT = Aws::String>
    ReplicationInfoDescription& WithSourceKafkaClusterAlias(SourceKafkaClusterAliasT&& value) { SetSourceKafkaClusterAlias(std::forward<SourceKafkaClusterAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline TargetCompressionType GetTargetCompressionType() const { return m_targetCompressionType; }
    inline bool TargetCompressionTypeHasBeenSet() const { return m_targetCompressionTypeHasBeenSet; }
    inline void SetTargetCompressionType(TargetCompressionType value) { m_targetCompressionTypeHasBeenSet = true; m_targetCompressionType = value; }
    inline ReplicationInfoDescription& WithTargetCompressionType(TargetCompressionType value) { SetTargetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterAlias() const { return m_targetKafkaClusterAlias; }
    inline bool TargetKafkaClusterAliasHasBeenSet() const { return m_targetKafkaClusterAliasHasBeenSet; }
    template<typename TargetKafkaClusterAliasT = Aws::String>
    void SetTargetKafkaClusterAlias(TargetKafkaClusterAliasT&& value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias = std::forward<TargetKafkaClusterAliasT>(value); }
    template<typename TargetKafkaClusterAliasT = Aws::String>
    ReplicationInfoDescription& WithTargetKafkaClusterAlias(TargetKafkaClusterAliasT&& value) { SetTargetKafkaClusterAlias(std::forward<TargetKafkaClusterAliasT>(value)); return *this;}
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
    ReplicationInfoDescription& WithTopicReplication(TopicReplicationT&& value) { SetTopicReplication(std::forward<TopicReplicationT>(value)); return *this;}
    ///@}
  private:

    ConsumerGroupReplication m_consumerGroupReplication;
    bool m_consumerGroupReplicationHasBeenSet = false;

    Aws::String m_sourceKafkaClusterAlias;
    bool m_sourceKafkaClusterAliasHasBeenSet = false;

    TargetCompressionType m_targetCompressionType{TargetCompressionType::NOT_SET};
    bool m_targetCompressionTypeHasBeenSet = false;

    Aws::String m_targetKafkaClusterAlias;
    bool m_targetKafkaClusterAliasHasBeenSet = false;

    TopicReplication m_topicReplication;
    bool m_topicReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
