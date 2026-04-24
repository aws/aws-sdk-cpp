/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockDelta.h>

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
 * <p>Event containing a delta update to a content block.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessContentBlockDeltaEvent">AWS
 * API Reference</a></p>
 */
class HarnessContentBlockDeltaEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockDeltaEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockDeltaEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockDeltaEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The index of the content block being updated.</p>
   */
  inline int GetContentBlockIndex() const { return m_contentBlockIndex; }
  inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }
  inline void SetContentBlockIndex(int value) {
    m_contentBlockIndexHasBeenSet = true;
    m_contentBlockIndex = value;
  }
  inline HarnessContentBlockDeltaEvent& WithContentBlockIndex(int value) {
    SetContentBlockIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The delta payload.</p>
   */
  inline const HarnessContentBlockDelta& GetDelta() const { return m_delta; }
  inline bool DeltaHasBeenSet() const { return m_deltaHasBeenSet; }
  template <typename DeltaT = HarnessContentBlockDelta>
  void SetDelta(DeltaT&& value) {
    m_deltaHasBeenSet = true;
    m_delta = std::forward<DeltaT>(value);
  }
  template <typename DeltaT = HarnessContentBlockDelta>
  HarnessContentBlockDeltaEvent& WithDelta(DeltaT&& value) {
    SetDelta(std::forward<DeltaT>(value));
    return *this;
  }
  ///@}
 private:
  int m_contentBlockIndex{0};

  HarnessContentBlockDelta m_delta;
  bool m_contentBlockIndexHasBeenSet = false;
  bool m_deltaHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
