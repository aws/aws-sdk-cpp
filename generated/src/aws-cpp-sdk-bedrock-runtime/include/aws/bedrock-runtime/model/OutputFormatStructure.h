/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/JsonSchemaDefinition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p> The structure that the model's output must adhere to. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/OutputFormatStructure">AWS
 * API Reference</a></p>
 */
class OutputFormatStructure {
 public:
  AWS_BEDROCKRUNTIME_API OutputFormatStructure() = default;
  AWS_BEDROCKRUNTIME_API OutputFormatStructure(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API OutputFormatStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> A JSON schema structure that the model's output must adhere to. </p>
   */
  inline const JsonSchemaDefinition& GetJsonSchema() const { return m_jsonSchema; }
  inline bool JsonSchemaHasBeenSet() const { return m_jsonSchemaHasBeenSet; }
  template <typename JsonSchemaT = JsonSchemaDefinition>
  void SetJsonSchema(JsonSchemaT&& value) {
    m_jsonSchemaHasBeenSet = true;
    m_jsonSchema = std::forward<JsonSchemaT>(value);
  }
  template <typename JsonSchemaT = JsonSchemaDefinition>
  OutputFormatStructure& WithJsonSchema(JsonSchemaT&& value) {
    SetJsonSchema(std::forward<JsonSchemaT>(value));
    return *this;
  }
  ///@}
 private:
  JsonSchemaDefinition m_jsonSchema;
  bool m_jsonSchemaHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
