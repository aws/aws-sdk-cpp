/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomExtractionConfiguration.h>
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
   * <p>Contains extraction configuration information for a memory
   * strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class ExtractionConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ExtractionConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom extraction configuration.</p>
     */
    inline const CustomExtractionConfiguration& GetCustomExtractionConfiguration() const { return m_customExtractionConfiguration; }
    inline bool CustomExtractionConfigurationHasBeenSet() const { return m_customExtractionConfigurationHasBeenSet; }
    template<typename CustomExtractionConfigurationT = CustomExtractionConfiguration>
    void SetCustomExtractionConfiguration(CustomExtractionConfigurationT&& value) { m_customExtractionConfigurationHasBeenSet = true; m_customExtractionConfiguration = std::forward<CustomExtractionConfigurationT>(value); }
    template<typename CustomExtractionConfigurationT = CustomExtractionConfiguration>
    ExtractionConfiguration& WithCustomExtractionConfiguration(CustomExtractionConfigurationT&& value) { SetCustomExtractionConfiguration(std::forward<CustomExtractionConfigurationT>(value)); return *this;}
    ///@}
  private:

    CustomExtractionConfiguration m_customExtractionConfiguration;
    bool m_customExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
