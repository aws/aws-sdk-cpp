/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/KafkaSchemaRegistryConfig.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
   * Kafka (Amazon MSK) event source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AmazonManagedKafkaEventSourceConfig">AWS
   * API Reference</a></p>
   */
  class AmazonManagedKafkaEventSourceConfig
  {
  public:
    AWS_LAMBDA_API AmazonManagedKafkaEventSourceConfig() = default;
    AWS_LAMBDA_API AmazonManagedKafkaEventSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API AmazonManagedKafkaEventSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-consumer-group-id">Customizable
     * consumer group ID</a>.</p>
     */
    inline const Aws::String& GetConsumerGroupId() const { return m_consumerGroupId; }
    inline bool ConsumerGroupIdHasBeenSet() const { return m_consumerGroupIdHasBeenSet; }
    template<typename ConsumerGroupIdT = Aws::String>
    void SetConsumerGroupId(ConsumerGroupIdT&& value) { m_consumerGroupIdHasBeenSet = true; m_consumerGroupId = std::forward<ConsumerGroupIdT>(value); }
    template<typename ConsumerGroupIdT = Aws::String>
    AmazonManagedKafkaEventSourceConfig& WithConsumerGroupId(ConsumerGroupIdT&& value) { SetConsumerGroupId(std::forward<ConsumerGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific configuration settings for a Kafka schema registry.</p>
     */
    inline const KafkaSchemaRegistryConfig& GetSchemaRegistryConfig() const { return m_schemaRegistryConfig; }
    inline bool SchemaRegistryConfigHasBeenSet() const { return m_schemaRegistryConfigHasBeenSet; }
    template<typename SchemaRegistryConfigT = KafkaSchemaRegistryConfig>
    void SetSchemaRegistryConfig(SchemaRegistryConfigT&& value) { m_schemaRegistryConfigHasBeenSet = true; m_schemaRegistryConfig = std::forward<SchemaRegistryConfigT>(value); }
    template<typename SchemaRegistryConfigT = KafkaSchemaRegistryConfig>
    AmazonManagedKafkaEventSourceConfig& WithSchemaRegistryConfig(SchemaRegistryConfigT&& value) { SetSchemaRegistryConfig(std::forward<SchemaRegistryConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumerGroupId;
    bool m_consumerGroupIdHasBeenSet = false;

    KafkaSchemaRegistryConfig m_schemaRegistryConfig;
    bool m_schemaRegistryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
