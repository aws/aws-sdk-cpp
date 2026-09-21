/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessHookDecision.h>
#include <aws/bedrock-agentcore/model/HarnessHookEventType.h>
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
 * <p>A lifecycle hook event emitted in the invocation stream for visibility into
 * hook decisions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessHookEvent">AWS
 * API Reference</a></p>
 */
class HarnessHookEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessHookEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessHookEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessHookEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this hook event.</p>
   */
  inline const Aws::String& GetHookEventId() const { return m_hookEventId; }
  inline bool HookEventIdHasBeenSet() const { return m_hookEventIdHasBeenSet; }
  template <typename HookEventIdT = Aws::String>
  void SetHookEventId(HookEventIdT&& value) {
    m_hookEventIdHasBeenSet = true;
    m_hookEventId = std::forward<HookEventIdT>(value);
  }
  template <typename HookEventIdT = Aws::String>
  HarnessHookEvent& WithHookEventId(HookEventIdT&& value) {
    SetHookEventId(std::forward<HookEventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the hook that ran.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  HarnessHookEvent& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of lifecycle hook event.</p>
   */
  inline HarnessHookEventType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(HarnessHookEventType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline HarnessHookEvent& WithType(HarnessHookEventType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decision applied to the hook event. This field is present only for
   * blocking Lambda targets.</p>
   */
  inline HarnessHookDecision GetDecision() const { return m_decision; }
  inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }
  inline void SetDecision(HarnessHookDecision value) {
    m_decisionHasBeenSet = true;
    m_decision = value;
  }
  inline HarnessHookEvent& WithDecision(HarnessHookDecision value) {
    SetDecision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional reason for the applied decision.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  HarnessHookEvent& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hookEventId;

  Aws::String m_name;

  HarnessHookEventType m_type{HarnessHookEventType::NOT_SET};

  HarnessHookDecision m_decision{HarnessHookDecision::NOT_SET};

  Aws::String m_reason;
  bool m_hookEventIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_decisionHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
