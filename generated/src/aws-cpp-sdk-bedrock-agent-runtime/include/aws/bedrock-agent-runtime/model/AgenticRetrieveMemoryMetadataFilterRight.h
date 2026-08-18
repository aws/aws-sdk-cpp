/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>The right operand of a metadata filter expression. Set exactly one
 * member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryMetadataFilterRight">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryMetadataFilterRight {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterRight() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterRight(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterRight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value to compare the metadata key against.</p>
   */
  inline const AgenticRetrieveMemoryMetadataValue& GetMetadataValue() const { return m_metadataValue; }
  inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }
  template <typename MetadataValueT = AgenticRetrieveMemoryMetadataValue>
  void SetMetadataValue(MetadataValueT&& value) {
    m_metadataValueHasBeenSet = true;
    m_metadataValue = std::forward<MetadataValueT>(value);
  }
  template <typename MetadataValueT = AgenticRetrieveMemoryMetadataValue>
  AgenticRetrieveMemoryMetadataFilterRight& WithMetadataValue(MetadataValueT&& value) {
    SetMetadataValue(std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveMemoryMetadataValue m_metadataValue;
  bool m_metadataValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
