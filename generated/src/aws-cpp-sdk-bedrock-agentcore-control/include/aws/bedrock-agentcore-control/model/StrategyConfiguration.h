/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OverrideType.h>
#include <aws/bedrock-agentcore-control/model/ExtractionConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ConsolidationConfiguration.h>
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
   * <p>Contains configuration information for a memory strategy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StrategyConfiguration">AWS
   * API Reference</a></p>
   */
  class StrategyConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API StrategyConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API StrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API StrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of override for the strategy configuration.</p>
     */
    inline OverrideType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OverrideType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StrategyConfiguration& WithType(OverrideType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extraction configuration for the memory strategy.</p>
     */
    inline const ExtractionConfiguration& GetExtraction() const { return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    template<typename ExtractionT = ExtractionConfiguration>
    void SetExtraction(ExtractionT&& value) { m_extractionHasBeenSet = true; m_extraction = std::forward<ExtractionT>(value); }
    template<typename ExtractionT = ExtractionConfiguration>
    StrategyConfiguration& WithExtraction(ExtractionT&& value) { SetExtraction(std::forward<ExtractionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consolidation configuration for the memory strategy.</p>
     */
    inline const ConsolidationConfiguration& GetConsolidation() const { return m_consolidation; }
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
    template<typename ConsolidationT = ConsolidationConfiguration>
    void SetConsolidation(ConsolidationT&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::forward<ConsolidationT>(value); }
    template<typename ConsolidationT = ConsolidationConfiguration>
    StrategyConfiguration& WithConsolidation(ConsolidationT&& value) { SetConsolidation(std::forward<ConsolidationT>(value)); return *this;}
    ///@}
  private:

    OverrideType m_type{OverrideType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ExtractionConfiguration m_extraction;
    bool m_extractionHasBeenSet = false;

    ConsolidationConfiguration m_consolidation;
    bool m_consolidationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
