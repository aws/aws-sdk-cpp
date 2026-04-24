/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockStart.h>

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
 * <p>Event indicating the start of a content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessContentBlockStartEvent">AWS
 * API Reference</a></p>
 */
class HarnessContentBlockStartEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStartEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStartEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStartEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index of the content block within the message.</p>
   */
  inline int GetContentBlockIndex() const { return m_contentBlockIndex; }
  inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }
  inline void SetContentBlockIndex(int value) {
    m_contentBlockIndexHasBeenSet = true;
    m_contentBlockIndex = value;
  }
  inline HarnessContentBlockStartEvent& WithContentBlockIndex(int value) {
    SetContentBlockIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content block start payload.</p>
   */
  inline const HarnessContentBlockStart& GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  template <typename StartT = HarnessContentBlockStart>
  void SetStart(StartT&& value) {
    m_startHasBeenSet = true;
    m_start = std::forward<StartT>(value);
  }
  template <typename StartT = HarnessContentBlockStart>
  HarnessContentBlockStartEvent& WithStart(StartT&& value) {
    SetStart(std::forward<StartT>(value));
    return *this;
  }
  ///@}
 private:
  int m_contentBlockIndex{0};

  HarnessContentBlockStart m_start;
  bool m_contentBlockIndexHasBeenSet = false;
  bool m_startHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
