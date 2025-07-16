/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomExtractionConfigurationInput.h>
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
   * <p>Contains information for modifying an extraction configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifyExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class ModifyExtractionConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ModifyExtractionConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ModifyExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ModifyExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated custom extraction configuration.</p>
     */
    inline const CustomExtractionConfigurationInput& GetCustomExtractionConfiguration() const { return m_customExtractionConfiguration; }
    inline bool CustomExtractionConfigurationHasBeenSet() const { return m_customExtractionConfigurationHasBeenSet; }
    template<typename CustomExtractionConfigurationT = CustomExtractionConfigurationInput>
    void SetCustomExtractionConfiguration(CustomExtractionConfigurationT&& value) { m_customExtractionConfigurationHasBeenSet = true; m_customExtractionConfiguration = std::forward<CustomExtractionConfigurationT>(value); }
    template<typename CustomExtractionConfigurationT = CustomExtractionConfigurationInput>
    ModifyExtractionConfiguration& WithCustomExtractionConfiguration(CustomExtractionConfigurationT&& value) { SetCustomExtractionConfiguration(std::forward<CustomExtractionConfigurationT>(value)); return *this;}
    ///@}
  private:

    CustomExtractionConfigurationInput m_customExtractionConfiguration;
    bool m_customExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
