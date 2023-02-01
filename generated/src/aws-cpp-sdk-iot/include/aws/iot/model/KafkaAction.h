/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Send messages to an Amazon Managed Streaming for Apache Kafka (Amazon MSK) or
   * self-managed Apache Kafka cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/KafkaAction">AWS API
   * Reference</a></p>
   */
  class KafkaAction
  {
  public:
    AWS_IOT_API KafkaAction();
    AWS_IOT_API KafkaAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API KafkaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline KafkaAction& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline KafkaAction& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline KafkaAction& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline KafkaAction& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline KafkaAction& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline KafkaAction& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The Kafka message key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The Kafka message key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The Kafka message key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The Kafka message key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The Kafka message key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The Kafka message key.</p>
     */
    inline KafkaAction& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The Kafka message key.</p>
     */
    inline KafkaAction& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The Kafka message key.</p>
     */
    inline KafkaAction& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The Kafka message partition.</p>
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }

    /**
     * <p>The Kafka message partition.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The Kafka message partition.</p>
     */
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The Kafka message partition.</p>
     */
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The Kafka message partition.</p>
     */
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }

    /**
     * <p>The Kafka message partition.</p>
     */
    inline KafkaAction& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}

    /**
     * <p>The Kafka message partition.</p>
     */
    inline KafkaAction& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}

    /**
     * <p>The Kafka message partition.</p>
     */
    inline KafkaAction& WithPartition(const char* value) { SetPartition(value); return *this;}


    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientProperties() const{ return m_clientProperties; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline bool ClientPropertiesHasBeenSet() const { return m_clientPropertiesHasBeenSet; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline void SetClientProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = value; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline void SetClientProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = std::move(value); }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& WithClientProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetClientProperties(value); return *this;}

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& WithClientProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetClientProperties(std::move(value)); return *this;}

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(const Aws::String& key, const Aws::String& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, value); return *this; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(Aws::String&& key, const Aws::String& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(const Aws::String& key, Aws::String&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(Aws::String&& key, Aws::String&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(const char* key, Aws::String&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(Aws::String&& key, const char* value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline KafkaAction& AddClientProperties(const char* key, const char* value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientProperties;
    bool m_clientPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
