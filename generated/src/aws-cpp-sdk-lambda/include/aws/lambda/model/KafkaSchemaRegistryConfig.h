/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/SchemaRegistryEventRecordFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/KafkaSchemaRegistryAccessConfig.h>
#include <aws/lambda/model/KafkaSchemaValidationConfig.h>
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
   * <p>Specific configuration settings for a Kafka schema registry.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/KafkaSchemaRegistryConfig">AWS
   * API Reference</a></p>
   */
  class KafkaSchemaRegistryConfig
  {
  public:
    AWS_LAMBDA_API KafkaSchemaRegistryConfig() = default;
    AWS_LAMBDA_API KafkaSchemaRegistryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API KafkaSchemaRegistryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI for your schema registry. The correct URI format depends on the type
     * of schema registry you're using.</p> <ul> <li> <p>For Glue schema registries,
     * use the ARN of the registry.</p> </li> <li> <p>For Confluent schema registries,
     * use the URL of the registry.</p> </li> </ul>
     */
    inline const Aws::String& GetSchemaRegistryURI() const { return m_schemaRegistryURI; }
    inline bool SchemaRegistryURIHasBeenSet() const { return m_schemaRegistryURIHasBeenSet; }
    template<typename SchemaRegistryURIT = Aws::String>
    void SetSchemaRegistryURI(SchemaRegistryURIT&& value) { m_schemaRegistryURIHasBeenSet = true; m_schemaRegistryURI = std::forward<SchemaRegistryURIT>(value); }
    template<typename SchemaRegistryURIT = Aws::String>
    KafkaSchemaRegistryConfig& WithSchemaRegistryURI(SchemaRegistryURIT&& value) { SetSchemaRegistryURI(std::forward<SchemaRegistryURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record format that Lambda delivers to your function after schema
     * validation.</p> <ul> <li> <p>Choose <code>JSON</code> to have Lambda deliver the
     * record to your function as a standard JSON object.</p> </li> <li> <p>Choose
     * <code>SOURCE</code> to have Lambda deliver the record to your function in its
     * original source format. Lambda removes all schema metadata, such as the schema
     * ID, before sending the record to your function.</p> </li> </ul>
     */
    inline SchemaRegistryEventRecordFormat GetEventRecordFormat() const { return m_eventRecordFormat; }
    inline bool EventRecordFormatHasBeenSet() const { return m_eventRecordFormatHasBeenSet; }
    inline void SetEventRecordFormat(SchemaRegistryEventRecordFormat value) { m_eventRecordFormatHasBeenSet = true; m_eventRecordFormat = value; }
    inline KafkaSchemaRegistryConfig& WithEventRecordFormat(SchemaRegistryEventRecordFormat value) { SetEventRecordFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of access configuration objects that tell Lambda how to authenticate
     * with your schema registry.</p>
     */
    inline const Aws::Vector<KafkaSchemaRegistryAccessConfig>& GetAccessConfigs() const { return m_accessConfigs; }
    inline bool AccessConfigsHasBeenSet() const { return m_accessConfigsHasBeenSet; }
    template<typename AccessConfigsT = Aws::Vector<KafkaSchemaRegistryAccessConfig>>
    void SetAccessConfigs(AccessConfigsT&& value) { m_accessConfigsHasBeenSet = true; m_accessConfigs = std::forward<AccessConfigsT>(value); }
    template<typename AccessConfigsT = Aws::Vector<KafkaSchemaRegistryAccessConfig>>
    KafkaSchemaRegistryConfig& WithAccessConfigs(AccessConfigsT&& value) { SetAccessConfigs(std::forward<AccessConfigsT>(value)); return *this;}
    template<typename AccessConfigsT = KafkaSchemaRegistryAccessConfig>
    KafkaSchemaRegistryConfig& AddAccessConfigs(AccessConfigsT&& value) { m_accessConfigsHasBeenSet = true; m_accessConfigs.emplace_back(std::forward<AccessConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of schema validation configuration objects, which tell Lambda the
     * message attributes you want to validate and filter using your schema
     * registry.</p>
     */
    inline const Aws::Vector<KafkaSchemaValidationConfig>& GetSchemaValidationConfigs() const { return m_schemaValidationConfigs; }
    inline bool SchemaValidationConfigsHasBeenSet() const { return m_schemaValidationConfigsHasBeenSet; }
    template<typename SchemaValidationConfigsT = Aws::Vector<KafkaSchemaValidationConfig>>
    void SetSchemaValidationConfigs(SchemaValidationConfigsT&& value) { m_schemaValidationConfigsHasBeenSet = true; m_schemaValidationConfigs = std::forward<SchemaValidationConfigsT>(value); }
    template<typename SchemaValidationConfigsT = Aws::Vector<KafkaSchemaValidationConfig>>
    KafkaSchemaRegistryConfig& WithSchemaValidationConfigs(SchemaValidationConfigsT&& value) { SetSchemaValidationConfigs(std::forward<SchemaValidationConfigsT>(value)); return *this;}
    template<typename SchemaValidationConfigsT = KafkaSchemaValidationConfig>
    KafkaSchemaRegistryConfig& AddSchemaValidationConfigs(SchemaValidationConfigsT&& value) { m_schemaValidationConfigsHasBeenSet = true; m_schemaValidationConfigs.emplace_back(std::forward<SchemaValidationConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_schemaRegistryURI;
    bool m_schemaRegistryURIHasBeenSet = false;

    SchemaRegistryEventRecordFormat m_eventRecordFormat{SchemaRegistryEventRecordFormat::NOT_SET};
    bool m_eventRecordFormatHasBeenSet = false;

    Aws::Vector<KafkaSchemaRegistryAccessConfig> m_accessConfigs;
    bool m_accessConfigsHasBeenSet = false;

    Aws::Vector<KafkaSchemaValidationConfig> m_schemaValidationConfigs;
    bool m_schemaValidationConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
