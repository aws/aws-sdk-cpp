/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SemanticConsolidationOverride.h>
#include <aws/bedrock-agentcore-control/model/SummaryConsolidationOverride.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceConsolidationOverride.h>
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
   * <p>Contains custom consolidation configuration information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomConsolidationConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomConsolidationConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CustomConsolidationConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CustomConsolidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CustomConsolidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic consolidation override configuration.</p>
     */
    inline const SemanticConsolidationOverride& GetSemanticConsolidationOverride() const { return m_semanticConsolidationOverride; }
    inline bool SemanticConsolidationOverrideHasBeenSet() const { return m_semanticConsolidationOverrideHasBeenSet; }
    template<typename SemanticConsolidationOverrideT = SemanticConsolidationOverride>
    void SetSemanticConsolidationOverride(SemanticConsolidationOverrideT&& value) { m_semanticConsolidationOverrideHasBeenSet = true; m_semanticConsolidationOverride = std::forward<SemanticConsolidationOverrideT>(value); }
    template<typename SemanticConsolidationOverrideT = SemanticConsolidationOverride>
    CustomConsolidationConfiguration& WithSemanticConsolidationOverride(SemanticConsolidationOverrideT&& value) { SetSemanticConsolidationOverride(std::forward<SemanticConsolidationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary consolidation override configuration.</p>
     */
    inline const SummaryConsolidationOverride& GetSummaryConsolidationOverride() const { return m_summaryConsolidationOverride; }
    inline bool SummaryConsolidationOverrideHasBeenSet() const { return m_summaryConsolidationOverrideHasBeenSet; }
    template<typename SummaryConsolidationOverrideT = SummaryConsolidationOverride>
    void SetSummaryConsolidationOverride(SummaryConsolidationOverrideT&& value) { m_summaryConsolidationOverrideHasBeenSet = true; m_summaryConsolidationOverride = std::forward<SummaryConsolidationOverrideT>(value); }
    template<typename SummaryConsolidationOverrideT = SummaryConsolidationOverride>
    CustomConsolidationConfiguration& WithSummaryConsolidationOverride(SummaryConsolidationOverrideT&& value) { SetSummaryConsolidationOverride(std::forward<SummaryConsolidationOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user preference consolidation override configuration.</p>
     */
    inline const UserPreferenceConsolidationOverride& GetUserPreferenceConsolidationOverride() const { return m_userPreferenceConsolidationOverride; }
    inline bool UserPreferenceConsolidationOverrideHasBeenSet() const { return m_userPreferenceConsolidationOverrideHasBeenSet; }
    template<typename UserPreferenceConsolidationOverrideT = UserPreferenceConsolidationOverride>
    void SetUserPreferenceConsolidationOverride(UserPreferenceConsolidationOverrideT&& value) { m_userPreferenceConsolidationOverrideHasBeenSet = true; m_userPreferenceConsolidationOverride = std::forward<UserPreferenceConsolidationOverrideT>(value); }
    template<typename UserPreferenceConsolidationOverrideT = UserPreferenceConsolidationOverride>
    CustomConsolidationConfiguration& WithUserPreferenceConsolidationOverride(UserPreferenceConsolidationOverrideT&& value) { SetUserPreferenceConsolidationOverride(std::forward<UserPreferenceConsolidationOverrideT>(value)); return *this;}
    ///@}
  private:

    SemanticConsolidationOverride m_semanticConsolidationOverride;
    bool m_semanticConsolidationOverrideHasBeenSet = false;

    SummaryConsolidationOverride m_summaryConsolidationOverride;
    bool m_summaryConsolidationOverrideHasBeenSet = false;

    UserPreferenceConsolidationOverride m_userPreferenceConsolidationOverride;
    bool m_userPreferenceConsolidationOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
