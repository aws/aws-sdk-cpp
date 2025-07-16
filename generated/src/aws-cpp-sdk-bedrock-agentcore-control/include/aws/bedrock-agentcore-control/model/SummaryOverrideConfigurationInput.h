/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SummaryOverrideConsolidationConfigurationInput.h>
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
   * <p>Input for summary override configuration in a memory strategy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SummaryOverrideConfigurationInput">AWS
   * API Reference</a></p>
   */
  class SummaryOverrideConfigurationInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API SummaryOverrideConfigurationInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API SummaryOverrideConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API SummaryOverrideConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The consolidation configuration for a summary override.</p>
     */
    inline const SummaryOverrideConsolidationConfigurationInput& GetConsolidation() const { return m_consolidation; }
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
    template<typename ConsolidationT = SummaryOverrideConsolidationConfigurationInput>
    void SetConsolidation(ConsolidationT&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::forward<ConsolidationT>(value); }
    template<typename ConsolidationT = SummaryOverrideConsolidationConfigurationInput>
    SummaryOverrideConfigurationInput& WithConsolidation(ConsolidationT&& value) { SetConsolidation(std::forward<ConsolidationT>(value)); return *this;}
    ///@}
  private:

    SummaryOverrideConsolidationConfigurationInput m_consolidation;
    bool m_consolidationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
