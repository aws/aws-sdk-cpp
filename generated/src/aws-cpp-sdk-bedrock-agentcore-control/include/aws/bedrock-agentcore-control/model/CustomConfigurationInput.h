/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SemanticOverrideConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/SummaryOverrideConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceOverrideConfigurationInput.h>
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
   * <p>Input for custom configuration of a memory strategy.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomConfigurationInput">AWS
   * API Reference</a></p>
   */
  class CustomConfigurationInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CustomConfigurationInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CustomConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CustomConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic override configuration for a custom memory strategy.</p>
     */
    inline const SemanticOverrideConfigurationInput& GetSemanticOverride() const { return m_semanticOverride; }
    inline bool SemanticOverrideHasBeenSet() const { return m_semanticOverrideHasBeenSet; }
    template<typename SemanticOverrideT = SemanticOverrideConfigurationInput>
    void SetSemanticOverride(SemanticOverrideT&& value) { m_semanticOverrideHasBeenSet = true; m_semanticOverride = std::forward<SemanticOverrideT>(value); }
    template<typename SemanticOverrideT = SemanticOverrideConfigurationInput>
    CustomConfigurationInput& WithSemanticOverride(SemanticOverrideT&& value) { SetSemanticOverride(std::forward<SemanticOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary override configuration for a custom memory strategy.</p>
     */
    inline const SummaryOverrideConfigurationInput& GetSummaryOverride() const { return m_summaryOverride; }
    inline bool SummaryOverrideHasBeenSet() const { return m_summaryOverrideHasBeenSet; }
    template<typename SummaryOverrideT = SummaryOverrideConfigurationInput>
    void SetSummaryOverride(SummaryOverrideT&& value) { m_summaryOverrideHasBeenSet = true; m_summaryOverride = std::forward<SummaryOverrideT>(value); }
    template<typename SummaryOverrideT = SummaryOverrideConfigurationInput>
    CustomConfigurationInput& WithSummaryOverride(SummaryOverrideT&& value) { SetSummaryOverride(std::forward<SummaryOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user preference override configuration for a custom memory strategy.</p>
     */
    inline const UserPreferenceOverrideConfigurationInput& GetUserPreferenceOverride() const { return m_userPreferenceOverride; }
    inline bool UserPreferenceOverrideHasBeenSet() const { return m_userPreferenceOverrideHasBeenSet; }
    template<typename UserPreferenceOverrideT = UserPreferenceOverrideConfigurationInput>
    void SetUserPreferenceOverride(UserPreferenceOverrideT&& value) { m_userPreferenceOverrideHasBeenSet = true; m_userPreferenceOverride = std::forward<UserPreferenceOverrideT>(value); }
    template<typename UserPreferenceOverrideT = UserPreferenceOverrideConfigurationInput>
    CustomConfigurationInput& WithUserPreferenceOverride(UserPreferenceOverrideT&& value) { SetUserPreferenceOverride(std::forward<UserPreferenceOverrideT>(value)); return *this;}
    ///@}
  private:

    SemanticOverrideConfigurationInput m_semanticOverride;
    bool m_semanticOverrideHasBeenSet = false;

    SummaryOverrideConfigurationInput m_summaryOverride;
    bool m_summaryOverrideHasBeenSet = false;

    UserPreferenceOverrideConfigurationInput m_userPreferenceOverride;
    bool m_userPreferenceOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
