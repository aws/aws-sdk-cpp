/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The left operand of a metadata filter expression. Set exactly one
 * member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryMetadataFilterLeft">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryMetadataFilterLeft {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterLeft() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterLeft(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilterLeft& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata key to filter on.</p>
   */
  inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
  inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
  template <typename MetadataKeyT = Aws::String>
  void SetMetadataKey(MetadataKeyT&& value) {
    m_metadataKeyHasBeenSet = true;
    m_metadataKey = std::forward<MetadataKeyT>(value);
  }
  template <typename MetadataKeyT = Aws::String>
  AgenticRetrieveMemoryMetadataFilterLeft& WithMetadataKey(MetadataKeyT&& value) {
    SetMetadataKey(std::forward<MetadataKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataKey;
  bool m_metadataKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
