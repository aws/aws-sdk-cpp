/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SemanticMemoryStrategyInput.h>
#include <aws/bedrock-agentcore-control/model/SummaryMemoryStrategyInput.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceMemoryStrategyInput.h>
#include <aws/bedrock-agentcore-control/model/CustomMemoryStrategyInput.h>
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
   * <p>Contains input information for creating a memory strategy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MemoryStrategyInput">AWS
   * API Reference</a></p>
   */
  class MemoryStrategyInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API MemoryStrategyInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API MemoryStrategyInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API MemoryStrategyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Input for creating a semantic memory strategy.</p>
     */
    inline const SemanticMemoryStrategyInput& GetSemanticMemoryStrategy() const { return m_semanticMemoryStrategy; }
    inline bool SemanticMemoryStrategyHasBeenSet() const { return m_semanticMemoryStrategyHasBeenSet; }
    template<typename SemanticMemoryStrategyT = SemanticMemoryStrategyInput>
    void SetSemanticMemoryStrategy(SemanticMemoryStrategyT&& value) { m_semanticMemoryStrategyHasBeenSet = true; m_semanticMemoryStrategy = std::forward<SemanticMemoryStrategyT>(value); }
    template<typename SemanticMemoryStrategyT = SemanticMemoryStrategyInput>
    MemoryStrategyInput& WithSemanticMemoryStrategy(SemanticMemoryStrategyT&& value) { SetSemanticMemoryStrategy(std::forward<SemanticMemoryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input for creating a summary memory strategy.</p>
     */
    inline const SummaryMemoryStrategyInput& GetSummaryMemoryStrategy() const { return m_summaryMemoryStrategy; }
    inline bool SummaryMemoryStrategyHasBeenSet() const { return m_summaryMemoryStrategyHasBeenSet; }
    template<typename SummaryMemoryStrategyT = SummaryMemoryStrategyInput>
    void SetSummaryMemoryStrategy(SummaryMemoryStrategyT&& value) { m_summaryMemoryStrategyHasBeenSet = true; m_summaryMemoryStrategy = std::forward<SummaryMemoryStrategyT>(value); }
    template<typename SummaryMemoryStrategyT = SummaryMemoryStrategyInput>
    MemoryStrategyInput& WithSummaryMemoryStrategy(SummaryMemoryStrategyT&& value) { SetSummaryMemoryStrategy(std::forward<SummaryMemoryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input for creating a user preference memory strategy.</p>
     */
    inline const UserPreferenceMemoryStrategyInput& GetUserPreferenceMemoryStrategy() const { return m_userPreferenceMemoryStrategy; }
    inline bool UserPreferenceMemoryStrategyHasBeenSet() const { return m_userPreferenceMemoryStrategyHasBeenSet; }
    template<typename UserPreferenceMemoryStrategyT = UserPreferenceMemoryStrategyInput>
    void SetUserPreferenceMemoryStrategy(UserPreferenceMemoryStrategyT&& value) { m_userPreferenceMemoryStrategyHasBeenSet = true; m_userPreferenceMemoryStrategy = std::forward<UserPreferenceMemoryStrategyT>(value); }
    template<typename UserPreferenceMemoryStrategyT = UserPreferenceMemoryStrategyInput>
    MemoryStrategyInput& WithUserPreferenceMemoryStrategy(UserPreferenceMemoryStrategyT&& value) { SetUserPreferenceMemoryStrategy(std::forward<UserPreferenceMemoryStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input for creating a custom memory strategy.</p>
     */
    inline const CustomMemoryStrategyInput& GetCustomMemoryStrategy() const { return m_customMemoryStrategy; }
    inline bool CustomMemoryStrategyHasBeenSet() const { return m_customMemoryStrategyHasBeenSet; }
    template<typename CustomMemoryStrategyT = CustomMemoryStrategyInput>
    void SetCustomMemoryStrategy(CustomMemoryStrategyT&& value) { m_customMemoryStrategyHasBeenSet = true; m_customMemoryStrategy = std::forward<CustomMemoryStrategyT>(value); }
    template<typename CustomMemoryStrategyT = CustomMemoryStrategyInput>
    MemoryStrategyInput& WithCustomMemoryStrategy(CustomMemoryStrategyT&& value) { SetCustomMemoryStrategy(std::forward<CustomMemoryStrategyT>(value)); return *this;}
    ///@}
  private:

    SemanticMemoryStrategyInput m_semanticMemoryStrategy;
    bool m_semanticMemoryStrategyHasBeenSet = false;

    SummaryMemoryStrategyInput m_summaryMemoryStrategy;
    bool m_summaryMemoryStrategyHasBeenSet = false;

    UserPreferenceMemoryStrategyInput m_userPreferenceMemoryStrategy;
    bool m_userPreferenceMemoryStrategyHasBeenSet = false;

    CustomMemoryStrategyInput m_customMemoryStrategy;
    bool m_customMemoryStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
