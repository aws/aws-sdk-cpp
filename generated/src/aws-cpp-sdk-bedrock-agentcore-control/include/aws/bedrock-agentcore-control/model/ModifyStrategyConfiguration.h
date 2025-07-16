/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ModifyExtractionConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ModifyConsolidationConfiguration.h>
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
   * <p>Contains information for modifying a strategy configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifyStrategyConfiguration">AWS
   * API Reference</a></p>
   */
  class ModifyStrategyConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ModifyStrategyConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ModifyStrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ModifyStrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated extraction configuration.</p>
     */
    inline const ModifyExtractionConfiguration& GetExtraction() const { return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    template<typename ExtractionT = ModifyExtractionConfiguration>
    void SetExtraction(ExtractionT&& value) { m_extractionHasBeenSet = true; m_extraction = std::forward<ExtractionT>(value); }
    template<typename ExtractionT = ModifyExtractionConfiguration>
    ModifyStrategyConfiguration& WithExtraction(ExtractionT&& value) { SetExtraction(std::forward<ExtractionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated consolidation configuration.</p>
     */
    inline const ModifyConsolidationConfiguration& GetConsolidation() const { return m_consolidation; }
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
    template<typename ConsolidationT = ModifyConsolidationConfiguration>
    void SetConsolidation(ConsolidationT&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::forward<ConsolidationT>(value); }
    template<typename ConsolidationT = ModifyConsolidationConfiguration>
    ModifyStrategyConfiguration& WithConsolidation(ConsolidationT&& value) { SetConsolidation(std::forward<ConsolidationT>(value)); return *this;}
    ///@}
  private:

    ModifyExtractionConfiguration m_extraction;
    bool m_extractionHasBeenSet = false;

    ModifyConsolidationConfiguration m_consolidation;
    bool m_consolidationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
