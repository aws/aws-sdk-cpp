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
    AWS_KAFKA_API ReplicationInfo();
    AWS_KAFKA_API ReplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ReplicationInfo& WithConsumerGroupReplication(const ConsumerGroupReplication& value) { SetConsumerGroupReplication(value); return *this;}

    /**
     * <p>Configuration relating to consumer group replication.</p>
     */
    inline ReplicationInfo& WithConsumerGroupReplication(ConsumerGroupReplication&& value) { SetConsumerGroupReplication(std::move(value)); return *this;}


    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterArn() const{ return m_sourceKafkaClusterArn; }

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline bool SourceKafkaClusterArnHasBeenSet() const { return m_sourceKafkaClusterArnHasBeenSet; }

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterArn(const Aws::String& value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn = value; }

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterArn(Aws::String&& value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn = std::move(value); }

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline void SetSourceKafkaClusterArn(const char* value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn.assign(value); }

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline ReplicationInfo& WithSourceKafkaClusterArn(const Aws::String& value) { SetSourceKafkaClusterArn(value); return *this;}

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline ReplicationInfo& WithSourceKafkaClusterArn(Aws::String&& value) { SetSourceKafkaClusterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline ReplicationInfo& WithSourceKafkaClusterArn(const char* value) { SetSourceKafkaClusterArn(value); return *this;}


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
    inline ReplicationInfo& WithTargetCompressionType(const TargetCompressionType& value) { SetTargetCompressionType(value); return *this;}

    /**
     * <p>The compression type to use when producing records to target cluster.</p>
     */
    inline ReplicationInfo& WithTargetCompressionType(TargetCompressionType&& value) { SetTargetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterArn() const{ return m_targetKafkaClusterArn; }

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline bool TargetKafkaClusterArnHasBeenSet() const { return m_targetKafkaClusterArnHasBeenSet; }

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterArn(const Aws::String& value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn = value; }

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterArn(Aws::String&& value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn = std::move(value); }

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline void SetTargetKafkaClusterArn(const char* value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn.assign(value); }

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline ReplicationInfo& WithTargetKafkaClusterArn(const Aws::String& value) { SetTargetKafkaClusterArn(value); return *this;}

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline ReplicationInfo& WithTargetKafkaClusterArn(Aws::String&& value) { SetTargetKafkaClusterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline ReplicationInfo& WithTargetKafkaClusterArn(const char* value) { SetTargetKafkaClusterArn(value); return *this;}


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
    inline ReplicationInfo& WithTopicReplication(const TopicReplication& value) { SetTopicReplication(value); return *this;}

    /**
     * <p>Configuration relating to topic replication.</p>
     */
    inline ReplicationInfo& WithTopicReplication(TopicReplication&& value) { SetTopicReplication(std::move(value)); return *this;}

  private:

    ConsumerGroupReplication m_consumerGroupReplication;
    bool m_consumerGroupReplicationHasBeenSet = false;

    Aws::String m_sourceKafkaClusterArn;
    bool m_sourceKafkaClusterArnHasBeenSet = false;

    TargetCompressionType m_targetCompressionType;
    bool m_targetCompressionTypeHasBeenSet = false;

    Aws::String m_targetKafkaClusterArn;
    bool m_targetKafkaClusterArnHasBeenSet = false;

    TopicReplication m_topicReplication;
    bool m_topicReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
