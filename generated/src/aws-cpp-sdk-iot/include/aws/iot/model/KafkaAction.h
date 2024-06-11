﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/KafkaActionHeader.h>
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


    ///@{
    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline KafkaAction& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline KafkaAction& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline KafkaAction& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }
    inline KafkaAction& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}
    inline KafkaAction& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}
    inline KafkaAction& WithTopic(const char* value) { SetTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kafka message key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline KafkaAction& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline KafkaAction& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline KafkaAction& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kafka message partition.</p>
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }
    inline KafkaAction& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}
    inline KafkaAction& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}
    inline KafkaAction& WithPartition(const char* value) { SetPartition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientProperties() const{ return m_clientProperties; }
    inline bool ClientPropertiesHasBeenSet() const { return m_clientPropertiesHasBeenSet; }
    inline void SetClientProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = value; }
    inline void SetClientProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = std::move(value); }
    inline KafkaAction& WithClientProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetClientProperties(value); return *this;}
    inline KafkaAction& WithClientProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetClientProperties(std::move(value)); return *this;}
    inline KafkaAction& AddClientProperties(const Aws::String& key, const Aws::String& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, value); return *this; }
    inline KafkaAction& AddClientProperties(Aws::String&& key, const Aws::String& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::move(key), value); return *this; }
    inline KafkaAction& AddClientProperties(const Aws::String& key, Aws::String&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, std::move(value)); return *this; }
    inline KafkaAction& AddClientProperties(Aws::String&& key, Aws::String&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline KafkaAction& AddClientProperties(const char* key, Aws::String&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, std::move(value)); return *this; }
    inline KafkaAction& AddClientProperties(Aws::String&& key, const char* value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::move(key), value); return *this; }
    inline KafkaAction& AddClientProperties(const char* key, const char* value) { m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of Kafka headers that you specify.</p>
     */
    inline const Aws::Vector<KafkaActionHeader>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Vector<KafkaActionHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Vector<KafkaActionHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline KafkaAction& WithHeaders(const Aws::Vector<KafkaActionHeader>& value) { SetHeaders(value); return *this;}
    inline KafkaAction& WithHeaders(Aws::Vector<KafkaActionHeader>&& value) { SetHeaders(std::move(value)); return *this;}
    inline KafkaAction& AddHeaders(const KafkaActionHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }
    inline KafkaAction& AddHeaders(KafkaActionHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<KafkaActionHeader> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
