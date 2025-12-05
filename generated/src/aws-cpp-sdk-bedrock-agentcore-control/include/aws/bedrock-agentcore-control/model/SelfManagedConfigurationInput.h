/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InvocationConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/TriggerConditionInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Input configuration for a self-managed memory strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SelfManagedConfigurationInput">AWS
 * API Reference</a></p>
 */
class SelfManagedConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SelfManagedConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SelfManagedConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SelfManagedConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions that trigger memory processing.</p>
   */
  inline const Aws::Vector<TriggerConditionInput>& GetTriggerConditions() const { return m_triggerConditions; }
  inline bool TriggerConditionsHasBeenSet() const { return m_triggerConditionsHasBeenSet; }
  template <typename TriggerConditionsT = Aws::Vector<TriggerConditionInput>>
  void SetTriggerConditions(TriggerConditionsT&& value) {
    m_triggerConditionsHasBeenSet = true;
    m_triggerConditions = std::forward<TriggerConditionsT>(value);
  }
  template <typename TriggerConditionsT = Aws::Vector<TriggerConditionInput>>
  SelfManagedConfigurationInput& WithTriggerConditions(TriggerConditionsT&& value) {
    SetTriggerConditions(std::forward<TriggerConditionsT>(value));
    return *this;
  }
  template <typename TriggerConditionsT = TriggerConditionInput>
  SelfManagedConfigurationInput& AddTriggerConditions(TriggerConditionsT&& value) {
    m_triggerConditionsHasBeenSet = true;
    m_triggerConditions.emplace_back(std::forward<TriggerConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration to invoke a self-managed memory processing pipeline with.</p>
   */
  inline const InvocationConfigurationInput& GetInvocationConfiguration() const { return m_invocationConfiguration; }
  inline bool InvocationConfigurationHasBeenSet() const { return m_invocationConfigurationHasBeenSet; }
  template <typename InvocationConfigurationT = InvocationConfigurationInput>
  void SetInvocationConfiguration(InvocationConfigurationT&& value) {
    m_invocationConfigurationHasBeenSet = true;
    m_invocationConfiguration = std::forward<InvocationConfigurationT>(value);
  }
  template <typename InvocationConfigurationT = InvocationConfigurationInput>
  SelfManagedConfigurationInput& WithInvocationConfiguration(InvocationConfigurationT&& value) {
    SetInvocationConfiguration(std::forward<InvocationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of historical messages to include in processing context.</p>
   */
  inline int GetHistoricalContextWindowSize() const { return m_historicalContextWindowSize; }
  inline bool HistoricalContextWindowSizeHasBeenSet() const { return m_historicalContextWindowSizeHasBeenSet; }
  inline void SetHistoricalContextWindowSize(int value) {
    m_historicalContextWindowSizeHasBeenSet = true;
    m_historicalContextWindowSize = value;
  }
  inline SelfManagedConfigurationInput& WithHistoricalContextWindowSize(int value) {
    SetHistoricalContextWindowSize(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TriggerConditionInput> m_triggerConditions;

  InvocationConfigurationInput m_invocationConfiguration;

  int m_historicalContextWindowSize{0};
  bool m_triggerConditionsHasBeenSet = false;
  bool m_invocationConfigurationHasBeenSet = false;
  bool m_historicalContextWindowSizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
