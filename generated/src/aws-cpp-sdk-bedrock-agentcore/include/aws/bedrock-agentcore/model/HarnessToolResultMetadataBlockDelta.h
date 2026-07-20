/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Delta payload for a tool result metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessToolResultMetadataBlockDelta">AWS
 * API Reference</a></p>
 */
class HarnessToolResultMetadataBlockDelta {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessToolResultMetadataBlockDelta() = default;
  AWS_BEDROCKAGENTCORE_API HarnessToolResultMetadataBlockDelta(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessToolResultMetadataBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partial JSON-string fragment of the tool result metadata.</p>
   */
  inline const Aws::String& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::String>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::String>
  HarnessToolResultMetadataBlockDelta& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadata;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
