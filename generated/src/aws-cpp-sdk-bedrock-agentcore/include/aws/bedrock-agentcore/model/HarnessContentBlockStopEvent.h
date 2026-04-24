/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
 * <p>Event indicating the end of a content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessContentBlockStopEvent">AWS
 * API Reference</a></p>
 */
class HarnessContentBlockStopEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStopEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStopEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStopEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index of the content block that ended.</p>
   */
  inline int GetContentBlockIndex() const { return m_contentBlockIndex; }
  inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }
  inline void SetContentBlockIndex(int value) {
    m_contentBlockIndexHasBeenSet = true;
    m_contentBlockIndex = value;
  }
  inline HarnessContentBlockStopEvent& WithContentBlockIndex(int value) {
    SetContentBlockIndex(value);
    return *this;
  }
  ///@}
 private:
  int m_contentBlockIndex{0};
  bool m_contentBlockIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
