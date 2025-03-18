/**
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
    AWS_IOT_API KafkaAction() = default;
    AWS_IOT_API KafkaAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API KafkaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of Kafka action's VPC <code>TopicRuleDestination</code>.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    KafkaAction& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kafka topic for messages to be sent to the Kafka broker.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    KafkaAction& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kafka message key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    KafkaAction& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kafka message partition.</p>
     */
    inline const Aws::String& GetPartition() const { return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    template<typename PartitionT = Aws::String>
    void SetPartition(PartitionT&& value) { m_partitionHasBeenSet = true; m_partition = std::forward<PartitionT>(value); }
    template<typename PartitionT = Aws::String>
    KafkaAction& WithPartition(PartitionT&& value) { SetPartition(std::forward<PartitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the Apache Kafka producer client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientProperties() const { return m_clientProperties; }
    inline bool ClientPropertiesHasBeenSet() const { return m_clientPropertiesHasBeenSet; }
    template<typename ClientPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetClientProperties(ClientPropertiesT&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = std::forward<ClientPropertiesT>(value); }
    template<typename ClientPropertiesT = Aws::Map<Aws::String, Aws::String>>
    KafkaAction& WithClientProperties(ClientPropertiesT&& value) { SetClientProperties(std::forward<ClientPropertiesT>(value)); return *this;}
    template<typename ClientPropertiesKeyT = Aws::String, typename ClientPropertiesValueT = Aws::String>
    KafkaAction& AddClientProperties(ClientPropertiesKeyT&& key, ClientPropertiesValueT&& value) {
      m_clientPropertiesHasBeenSet = true; m_clientProperties.emplace(std::forward<ClientPropertiesKeyT>(key), std::forward<ClientPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of Kafka headers that you specify.</p>
     */
    inline const Aws::Vector<KafkaActionHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<KafkaActionHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<KafkaActionHeader>>
    KafkaAction& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = KafkaActionHeader>
    KafkaAction& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
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
