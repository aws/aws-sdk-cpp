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
    AWS_KAFKA_API ReplicationInfoDescription();
    AWS_KAFKA_API ReplicationInfoDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationInfoDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline const ConsumerGroupReplication& GetConsumerGroupReplication() const{ return m_consumerGroupReplication; }

    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline bool ConsumerGroupReplicationHasBeenSet() const { return m_consumerGroupReplicationHasBeenSet; }

    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline void SetConsumerGroupReplication(const ConsumerGroupReplication& value) { m_consumerGroupReplicationHasBeenSet = true; m_consumerGroupReplication = value; }

    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline void SetConsumerGroupReplication(ConsumerGroupReplication&& value) { m_consumerGroupReplicationHasBeenSet = true; m_consumerGroupReplication = std::move(value); }

    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline ReplicationInfoDescription& WithConsumerGroupReplication(const ConsumerGroupReplication& value) { SetConsumerGroupReplication(value); return *this;}

    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline ReplicationInfoDescription& WithConsumerGroupReplication(ConsumerGroupReplication&& value) { SetConsumerGroupReplication(std::move(value)); return *this;}


    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterAlias() const{ return m_sourceKafkaClusterAlias; }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline bool SourceKafkaClusterAliasHasBeenSet() const { return m_sourceKafkaClusterAliasHasBeenSet; }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterAlias(const Aws::String& value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias = value; }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterAlias(Aws::String&& value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias = std::move(value); }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterAlias(const char* value) { m_sourceKafkaClusterAliasHasBeenSet = true; m_sourceKafkaClusterAlias.assign(value); }

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline ReplicationInfoDescription& WithSourceKafkaClusterAlias(const Aws::String& value) { SetSourceKafkaClusterAlias(value); return *this;}

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline ReplicationInfoDescription& WithSourceKafkaClusterAlias(Aws::String&& value) { SetSourceKafkaClusterAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the source Kafka cluster.</p>
     */
    inline ReplicationInfoDescription& WithSourceKafkaClusterAlias(const char* value) { SetSourceKafkaClusterAlias(value); return *this;}


    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline const TargetCompressionType& GetTargetCompressionType() const{ return m_targetCompressionType; }

    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline bool TargetCompressionTypeHasBeenSet() const { return m_targetCompressionTypeHasBeenSet; }

    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline void SetTargetCompressionType(const TargetCompressionType& value) { m_targetCompressionTypeHasBeenSet = true; m_targetCompressionType = value; }

    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline void SetTargetCompressionType(TargetCompressionType&& value) { m_targetCompressionTypeHasBeenSet = true; m_targetCompressionType = std::move(value); }

    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline ReplicationInfoDescription& WithTargetCompressionType(const TargetCompressionType& value) { SetTargetCompressionType(value); return *this;}

    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline ReplicationInfoDescription& WithTargetCompressionType(TargetCompressionType&& value) { SetTargetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterAlias() const{ return m_targetKafkaClusterAlias; }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline bool TargetKafkaClusterAliasHasBeenSet() const { return m_targetKafkaClusterAliasHasBeenSet; }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterAlias(const Aws::String& value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias = value; }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterAlias(Aws::String&& value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias = std::move(value); }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterAlias(const char* value) { m_targetKafkaClusterAliasHasBeenSet = true; m_targetKafkaClusterAlias.assign(value); }

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline ReplicationInfoDescription& WithTargetKafkaClusterAlias(const Aws::String& value) { SetTargetKafkaClusterAlias(value); return *this;}

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline ReplicationInfoDescription& WithTargetKafkaClusterAlias(Aws::String&& value) { SetTargetKafkaClusterAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the target Kafka cluster.</p>
     */
    inline ReplicationInfoDescription& WithTargetKafkaClusterAlias(const char* value) { SetTargetKafkaClusterAlias(value); return *this;}


    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline const TopicReplication& GetTopicReplication() const{ return m_topicReplication; }

    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline bool TopicReplicationHasBeenSet() const { return m_topicReplicationHasBeenSet; }

    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline void SetTopicReplication(const TopicReplication& value) { m_topicReplicationHasBeenSet = true; m_topicReplication = value; }

    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline void SetTopicReplication(TopicReplication&& value) { m_topicReplicationHasBeenSet = true; m_topicReplication = std::move(value); }

    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline ReplicationInfoDescription& WithTopicReplication(const TopicReplication& value) { SetTopicReplication(value); return *this;}

    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline ReplicationInfoDescription& WithTopicReplication(TopicReplication&& value) { SetTopicReplication(std::move(value)); return *this;}

  private:

    ConsumerGroupReplication m_consumerGroupReplication;
    bool m_consumerGroupReplicationHasBeenSet = false;

    Aws::String m_sourceKafkaClusterAlias;
    bool m_sourceKafkaClusterAliasHasBeenSet = false;

    TargetCompressionType m_targetCompressionType;
    bool m_targetCompressionTypeHasBeenSet = false;

    Aws::String m_targetKafkaClusterAlias;
    bool m_targetKafkaClusterAliasHasBeenSet = false;

    TopicReplication m_topicReplication;
    bool m_topicReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
