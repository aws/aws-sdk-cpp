/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessAfterInvocationHook.h>
#include <aws/bedrock-agentcore-control/model/HarnessAfterToolCallHook.h>
#include <aws/bedrock-agentcore-control/model/HarnessBeforeInvocationHook.h>
#include <aws/bedrock-agentcore-control/model/HarnessBeforeToolCallHook.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A lifecycle hook configuration. Specify one hook type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessHook">AWS
 * API Reference</a></p>
 */
class HarnessHook {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHook() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHook(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessHook& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A hook that runs before an invocation begins.</p>
   */
  inline const HarnessBeforeInvocationHook& GetBeforeInvocation() const { return m_beforeInvocation; }
  inline bool BeforeInvocationHasBeenSet() const { return m_beforeInvocationHasBeenSet; }
  template <typename BeforeInvocationT = HarnessBeforeInvocationHook>
  void SetBeforeInvocation(BeforeInvocationT&& value) {
    m_beforeInvocationHasBeenSet = true;
    m_beforeInvocation = std::forward<BeforeInvocationT>(value);
  }
  template <typename BeforeInvocationT = HarnessBeforeInvocationHook>
  HarnessHook& WithBeforeInvocation(BeforeInvocationT&& value) {
    SetBeforeInvocation(std::forward<BeforeInvocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A hook that runs after an invocation completes.</p>
   */
  inline const HarnessAfterInvocationHook& GetAfterInvocation() const { return m_afterInvocation; }
  inline bool AfterInvocationHasBeenSet() const { return m_afterInvocationHasBeenSet; }
  template <typename AfterInvocationT = HarnessAfterInvocationHook>
  void SetAfterInvocation(AfterInvocationT&& value) {
    m_afterInvocationHasBeenSet = true;
    m_afterInvocation = std::forward<AfterInvocationT>(value);
  }
  template <typename AfterInvocationT = HarnessAfterInvocationHook>
  HarnessHook& WithAfterInvocation(AfterInvocationT&& value) {
    SetAfterInvocation(std::forward<AfterInvocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A hook that runs before the agent calls a tool.</p>
   */
  inline const HarnessBeforeToolCallHook& GetBeforeToolCall() const { return m_beforeToolCall; }
  inline bool BeforeToolCallHasBeenSet() const { return m_beforeToolCallHasBeenSet; }
  template <typename BeforeToolCallT = HarnessBeforeToolCallHook>
  void SetBeforeToolCall(BeforeToolCallT&& value) {
    m_beforeToolCallHasBeenSet = true;
    m_beforeToolCall = std::forward<BeforeToolCallT>(value);
  }
  template <typename BeforeToolCallT = HarnessBeforeToolCallHook>
  HarnessHook& WithBeforeToolCall(BeforeToolCallT&& value) {
    SetBeforeToolCall(std::forward<BeforeToolCallT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A hook that runs after a tool call completes.</p>
   */
  inline const HarnessAfterToolCallHook& GetAfterToolCall() const { return m_afterToolCall; }
  inline bool AfterToolCallHasBeenSet() const { return m_afterToolCallHasBeenSet; }
  template <typename AfterToolCallT = HarnessAfterToolCallHook>
  void SetAfterToolCall(AfterToolCallT&& value) {
    m_afterToolCallHasBeenSet = true;
    m_afterToolCall = std::forward<AfterToolCallT>(value);
  }
  template <typename AfterToolCallT = HarnessAfterToolCallHook>
  HarnessHook& WithAfterToolCall(AfterToolCallT&& value) {
    SetAfterToolCall(std::forward<AfterToolCallT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessBeforeInvocationHook m_beforeInvocation;

  HarnessAfterInvocationHook m_afterInvocation;

  HarnessBeforeToolCallHook m_beforeToolCall;

  HarnessAfterToolCallHook m_afterToolCall;
  bool m_beforeInvocationHasBeenSet = false;
  bool m_afterInvocationHasBeenSet = false;
  bool m_beforeToolCallHasBeenSet = false;
  bool m_afterToolCallHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
