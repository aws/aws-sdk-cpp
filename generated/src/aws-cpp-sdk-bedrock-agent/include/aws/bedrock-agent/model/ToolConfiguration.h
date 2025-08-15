/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/ToolChoice.h>
#include <aws/bedrock-agent/model/Tool.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Configuration information for the tools that the model can use when
   * generating a response. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Use a
   * tool to complete an Amazon Bedrock model response</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ToolConfiguration">AWS
   * API Reference</a></p>
   */
  class ToolConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ToolConfiguration() = default;
    AWS_BEDROCKAGENT_API ToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of tools to pass to a model.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const { return m_tools; }
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
    template<typename ToolsT = Aws::Vector<Tool>>
    void SetTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools = std::forward<ToolsT>(value); }
    template<typename ToolsT = Aws::Vector<Tool>>
    ToolConfiguration& WithTools(ToolsT&& value) { SetTools(std::forward<ToolsT>(value)); return *this;}
    template<typename ToolsT = Tool>
    ToolConfiguration& AddTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools.emplace_back(std::forward<ToolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines which tools the model should request when invoked.</p>
     */
    inline const ToolChoice& GetToolChoice() const { return m_toolChoice; }
    inline bool ToolChoiceHasBeenSet() const { return m_toolChoiceHasBeenSet; }
    template<typename ToolChoiceT = ToolChoice>
    void SetToolChoice(ToolChoiceT&& value) { m_toolChoiceHasBeenSet = true; m_toolChoice = std::forward<ToolChoiceT>(value); }
    template<typename ToolChoiceT = ToolChoice>
    ToolConfiguration& WithToolChoice(ToolChoiceT&& value) { SetToolChoice(std::forward<ToolChoiceT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Tool> m_tools;
    bool m_toolsHasBeenSet = false;

    ToolChoice m_toolChoice;
    bool m_toolChoiceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
