/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/ModifyInvocationConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/TriggerConditionInput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The configuration for updating the self-managed memory
   * strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifySelfManagedConfiguration">AWS
   * API Reference</a></p>
   */
  class ModifySelfManagedConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ModifySelfManagedConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ModifySelfManagedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ModifySelfManagedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated list of conditions that trigger memory processing.</p>
     */
    inline const Aws::Vector<TriggerConditionInput>& GetTriggerConditions() const { return m_triggerConditions; }
    inline bool TriggerConditionsHasBeenSet() const { return m_triggerConditionsHasBeenSet; }
    template<typename TriggerConditionsT = Aws::Vector<TriggerConditionInput>>
    void SetTriggerConditions(TriggerConditionsT&& value) { m_triggerConditionsHasBeenSet = true; m_triggerConditions = std::forward<TriggerConditionsT>(value); }
    template<typename TriggerConditionsT = Aws::Vector<TriggerConditionInput>>
    ModifySelfManagedConfiguration& WithTriggerConditions(TriggerConditionsT&& value) { SetTriggerConditions(std::forward<TriggerConditionsT>(value)); return *this;}
    template<typename TriggerConditionsT = TriggerConditionInput>
    ModifySelfManagedConfiguration& AddTriggerConditions(TriggerConditionsT&& value) { m_triggerConditionsHasBeenSet = true; m_triggerConditions.emplace_back(std::forward<TriggerConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated configuration to invoke self-managed memory processing
     * pipeline.</p>
     */
    inline const ModifyInvocationConfigurationInput& GetInvocationConfiguration() const { return m_invocationConfiguration; }
    inline bool InvocationConfigurationHasBeenSet() const { return m_invocationConfigurationHasBeenSet; }
    template<typename InvocationConfigurationT = ModifyInvocationConfigurationInput>
    void SetInvocationConfiguration(InvocationConfigurationT&& value) { m_invocationConfigurationHasBeenSet = true; m_invocationConfiguration = std::forward<InvocationConfigurationT>(value); }
    template<typename InvocationConfigurationT = ModifyInvocationConfigurationInput>
    ModifySelfManagedConfiguration& WithInvocationConfiguration(InvocationConfigurationT&& value) { SetInvocationConfiguration(std::forward<InvocationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated number of historical messages to include in processing
     * context.</p>
     */
    inline int GetHistoricalContextWindowSize() const { return m_historicalContextWindowSize; }
    inline bool HistoricalContextWindowSizeHasBeenSet() const { return m_historicalContextWindowSizeHasBeenSet; }
    inline void SetHistoricalContextWindowSize(int value) { m_historicalContextWindowSizeHasBeenSet = true; m_historicalContextWindowSize = value; }
    inline ModifySelfManagedConfiguration& WithHistoricalContextWindowSize(int value) { SetHistoricalContextWindowSize(value); return *this;}
    ///@}
  private:

    Aws::Vector<TriggerConditionInput> m_triggerConditions;
    bool m_triggerConditionsHasBeenSet = false;

    ModifyInvocationConfigurationInput m_invocationConfiguration;
    bool m_invocationConfigurationHasBeenSet = false;

    int m_historicalContextWindowSize{0};
    bool m_historicalContextWindowSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
