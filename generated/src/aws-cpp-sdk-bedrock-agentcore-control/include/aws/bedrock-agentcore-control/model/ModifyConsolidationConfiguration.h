/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomConsolidationConfigurationInput.h>
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
   * <p>Contains information for modifying a consolidation
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifyConsolidationConfiguration">AWS
   * API Reference</a></p>
   */
  class ModifyConsolidationConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ModifyConsolidationConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ModifyConsolidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ModifyConsolidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated custom consolidation configuration.</p>
     */
    inline const CustomConsolidationConfigurationInput& GetCustomConsolidationConfiguration() const { return m_customConsolidationConfiguration; }
    inline bool CustomConsolidationConfigurationHasBeenSet() const { return m_customConsolidationConfigurationHasBeenSet; }
    template<typename CustomConsolidationConfigurationT = CustomConsolidationConfigurationInput>
    void SetCustomConsolidationConfiguration(CustomConsolidationConfigurationT&& value) { m_customConsolidationConfigurationHasBeenSet = true; m_customConsolidationConfiguration = std::forward<CustomConsolidationConfigurationT>(value); }
    template<typename CustomConsolidationConfigurationT = CustomConsolidationConfigurationInput>
    ModifyConsolidationConfiguration& WithCustomConsolidationConfiguration(CustomConsolidationConfigurationT&& value) { SetCustomConsolidationConfiguration(std::forward<CustomConsolidationConfigurationT>(value)); return *this;}
    ///@}
  private:

    CustomConsolidationConfigurationInput m_customConsolidationConfiguration;
    bool m_customConsolidationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
