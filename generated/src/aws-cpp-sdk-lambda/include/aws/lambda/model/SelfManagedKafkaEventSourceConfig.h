/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/KafkaEventSourceMappingConsumptionMode.h>
#include <aws/lambda/model/KafkaSchemaRegistryConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Specific configuration settings for a self-managed Apache Kafka event
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/SelfManagedKafkaEventSourceConfig">AWS
 * API Reference</a></p>
 */
class SelfManagedKafkaEventSourceConfig {
 public:
  AWS_LAMBDA_API SelfManagedKafkaEventSourceConfig() = default;
  AWS_LAMBDA_API SelfManagedKafkaEventSourceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API SelfManagedKafkaEventSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The identifier for the Kafka consumer group to join. The consumer group ID
   * must be unique among all your Kafka event sources. After creating a Kafka event
   * source mapping with the consumer group ID specified, you cannot update this
   * value. For more information, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka-process.html#services-smaa-topic-add">Customizable
   * consumer group ID</a>.</p>
   */
  inline const Aws::String& GetConsumerGroupId() const { return m_consumerGroupId; }
  inline bool ConsumerGroupIdHasBeenSet() const { return m_consumerGroupIdHasBeenSet; }
  template <typename ConsumerGroupIdT = Aws::String>
  void SetConsumerGroupId(ConsumerGroupIdT&& value) {
    m_consumerGroupIdHasBeenSet = true;
    m_consumerGroupId = std::forward<ConsumerGroupIdT>(value);
  }
  template <typename ConsumerGroupIdT = Aws::String>
  SelfManagedKafkaEventSourceConfig& WithConsumerGroupId(ConsumerGroupIdT&& value) {
    SetConsumerGroupId(std::forward<ConsumerGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific configuration settings for a Kafka schema registry.</p>
   */
  inline const KafkaSchemaRegistryConfig& GetSchemaRegistryConfig() const { return m_schemaRegistryConfig; }
  inline bool SchemaRegistryConfigHasBeenSet() const { return m_schemaRegistryConfigHasBeenSet; }
  template <typename SchemaRegistryConfigT = KafkaSchemaRegistryConfig>
  void SetSchemaRegistryConfig(SchemaRegistryConfigT&& value) {
    m_schemaRegistryConfigHasBeenSet = true;
    m_schemaRegistryConfig = std::forward<SchemaRegistryConfigT>(value);
  }
  template <typename SchemaRegistryConfigT = KafkaSchemaRegistryConfig>
  SelfManagedKafkaEventSourceConfig& WithSchemaRegistryConfig(SchemaRegistryConfigT&& value) {
    SetSchemaRegistryConfig(std::forward<SchemaRegistryConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode that Lambda uses to consume records from your self-managed Apache
   * Kafka topic. The default is <code>Stream</code>.</p> <ul> <li> <p>
   * <code>Stream</code> – Lambda consumes records using a Kafka consumer group and
   * preserves the order of records within each partition. This is the default when
   * you omit <code>ConsumptionMode</code>.</p> </li> <li> <p> <code>Queue</code> –
   * Lambda consumes records using a Kafka share group. Multiple consumers can
   * process records from the same partitions concurrently. Queue mode does not
   * preserve per-partition order. Queue mode requires an Apache Kafka cluster
   * running version 4.2 or later with share groups enabled.</p> </li> </ul> <p>You
   * cannot change <code>ConsumptionMode</code> after you create the event source
   * mapping. To use a different consumption mode, create a new event source
   * mapping.</p> <p>When <code>ConsumptionMode</code> is <code>Queue</code>, the
   * <code>StartingPosition</code>, <code>StartingPositionTimestamp</code>, and
   * <code>MaximumBatchingWindowInSeconds</code> parameters are not supported.</p>
   */
  inline KafkaEventSourceMappingConsumptionMode GetConsumptionMode() const { return m_consumptionMode; }
  inline bool ConsumptionModeHasBeenSet() const { return m_consumptionModeHasBeenSet; }
  inline void SetConsumptionMode(KafkaEventSourceMappingConsumptionMode value) {
    m_consumptionModeHasBeenSet = true;
    m_consumptionMode = value;
  }
  inline SelfManagedKafkaEventSourceConfig& WithConsumptionMode(KafkaEventSourceMappingConsumptionMode value) {
    SetConsumptionMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_consumerGroupId;

  KafkaSchemaRegistryConfig m_schemaRegistryConfig;

  KafkaEventSourceMappingConsumptionMode m_consumptionMode{KafkaEventSourceMappingConsumptionMode::NOT_SET};
  bool m_consumerGroupIdHasBeenSet = false;
  bool m_schemaRegistryConfigHasBeenSet = false;
  bool m_consumptionModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
