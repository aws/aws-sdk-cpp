/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomConsolidationConfiguration.h>
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
   * <p>Contains consolidation configuration information for a memory
   * strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConsolidationConfiguration">AWS
   * API Reference</a></p>
   */
  class ConsolidationConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ConsolidationConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ConsolidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ConsolidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom consolidation configuration.</p>
     */
    inline const CustomConsolidationConfiguration& GetCustomConsolidationConfiguration() const { return m_customConsolidationConfiguration; }
    inline bool CustomConsolidationConfigurationHasBeenSet() const { return m_customConsolidationConfigurationHasBeenSet; }
    template<typename CustomConsolidationConfigurationT = CustomConsolidationConfiguration>
    void SetCustomConsolidationConfiguration(CustomConsolidationConfigurationT&& value) { m_customConsolidationConfigurationHasBeenSet = true; m_customConsolidationConfiguration = std::forward<CustomConsolidationConfigurationT>(value); }
    template<typename CustomConsolidationConfigurationT = CustomConsolidationConfiguration>
    ConsolidationConfiguration& WithCustomConsolidationConfiguration(CustomConsolidationConfigurationT&& value) { SetCustomConsolidationConfiguration(std::forward<CustomConsolidationConfigurationT>(value)); return *this;}
    ///@}
  private:

    CustomConsolidationConfiguration m_customConsolidationConfiguration;
    bool m_customConsolidationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
