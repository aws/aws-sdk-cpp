/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SemanticOverrideConsolidationConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/SummaryOverrideConsolidationConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceOverrideConsolidationConfigurationInput.h>
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
   * <p>Input for a custom consolidation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomConsolidationConfigurationInput">AWS
   * API Reference</a></p>
   */
  class CustomConsolidationConfigurationInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CustomConsolidationConfigurationInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CustomConsolidationConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CustomConsolidationConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic consolidation override configuration input.</p>
     */
    inline const SemanticOverrideConsolidationConfigurationInput& GetSemanticConsolidationOverride() const { return m_semanticConsolidationOverride; }
    inline bool SemanticConsolidationOverrideHasBeenSet() const { return m_semanticConsolidationOverrideHasBeenSet; }
    template<typename SemanticConsolidationOverrideT = SemanticOverrideConsolidationConfigurationInput>
    void SetSemanticConsolidationOverride(SemanticConsolidationOverrideT&& value) { m_semanticConsolidationOverrideHasBeenSet = true; m_semanticConsolidationOverride = std::forward<SemanticConsolidationOverrideT>(value); }
    template<typename SemanticConsolidationOverrideT = SemanticOverrideConsolidationConfigurationInput>
    CustomConsolidationConfigurationInput& WithSemanticConsolidationOverride(SemanticConsolidationOverrideT&& value) { SetSemanticConsolidationOverride(std::forward<SemanticConsolidationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary consolidation override configuration input.</p>
     */
    inline const SummaryOverrideConsolidationConfigurationInput& GetSummaryConsolidationOverride() const { return m_summaryConsolidationOverride; }
    inline bool SummaryConsolidationOverrideHasBeenSet() const { return m_summaryConsolidationOverrideHasBeenSet; }
    template<typename SummaryConsolidationOverrideT = SummaryOverrideConsolidationConfigurationInput>
    void SetSummaryConsolidationOverride(SummaryConsolidationOverrideT&& value) { m_summaryConsolidationOverrideHasBeenSet = true; m_summaryConsolidationOverride = std::forward<SummaryConsolidationOverrideT>(value); }
    template<typename SummaryConsolidationOverrideT = SummaryOverrideConsolidationConfigurationInput>
    CustomConsolidationConfigurationInput& WithSummaryConsolidationOverride(SummaryConsolidationOverrideT&& value) { SetSummaryConsolidationOverride(std::forward<SummaryConsolidationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user preference consolidation override configuration input.</p>
     */
    inline const UserPreferenceOverrideConsolidationConfigurationInput& GetUserPreferenceConsolidationOverride() const { return m_userPreferenceConsolidationOverride; }
    inline bool UserPreferenceConsolidationOverrideHasBeenSet() const { return m_userPreferenceConsolidationOverrideHasBeenSet; }
    template<typename UserPreferenceConsolidationOverrideT = UserPreferenceOverrideConsolidationConfigurationInput>
    void SetUserPreferenceConsolidationOverride(UserPreferenceConsolidationOverrideT&& value) { m_userPreferenceConsolidationOverrideHasBeenSet = true; m_userPreferenceConsolidationOverride = std::forward<UserPreferenceConsolidationOverrideT>(value); }
    template<typename UserPreferenceConsolidationOverrideT = UserPreferenceOverrideConsolidationConfigurationInput>
    CustomConsolidationConfigurationInput& WithUserPreferenceConsolidationOverride(UserPreferenceConsolidationOverrideT&& value) { SetUserPreferenceConsolidationOverride(std::forward<UserPreferenceConsolidationOverrideT>(value)); return *this;}
    ///@}
  private:

    SemanticOverrideConsolidationConfigurationInput m_semanticConsolidationOverride;
    bool m_semanticConsolidationOverrideHasBeenSet = false;

    SummaryOverrideConsolidationConfigurationInput m_summaryConsolidationOverride;
    bool m_summaryConsolidationOverrideHasBeenSet = false;

    UserPreferenceOverrideConsolidationConfigurationInput m_userPreferenceConsolidationOverride;
    bool m_userPreferenceConsolidationOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
