/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ToolChoice.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API ToolConfiguration();
    AWS_BEDROCKAGENT_API ToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines which tools the model should request when invoked.</p>
     */
    inline const ToolChoice& GetToolChoice() const{ return m_toolChoice; }
    inline bool ToolChoiceHasBeenSet() const { return m_toolChoiceHasBeenSet; }
    inline void SetToolChoice(const ToolChoice& value) { m_toolChoiceHasBeenSet = true; m_toolChoice = value; }
    inline void SetToolChoice(ToolChoice&& value) { m_toolChoiceHasBeenSet = true; m_toolChoice = std::move(value); }
    inline ToolConfiguration& WithToolChoice(const ToolChoice& value) { SetToolChoice(value); return *this;}
    inline ToolConfiguration& WithToolChoice(ToolChoice&& value) { SetToolChoice(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tools to pass to a model.</p>
     */
    inline const Aws::Vector<Tool>& GetTools() const{ return m_tools; }
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
    inline void SetTools(const Aws::Vector<Tool>& value) { m_toolsHasBeenSet = true; m_tools = value; }
    inline void SetTools(Aws::Vector<Tool>&& value) { m_toolsHasBeenSet = true; m_tools = std::move(value); }
    inline ToolConfiguration& WithTools(const Aws::Vector<Tool>& value) { SetTools(value); return *this;}
    inline ToolConfiguration& WithTools(Aws::Vector<Tool>&& value) { SetTools(std::move(value)); return *this;}
    inline ToolConfiguration& AddTools(const Tool& value) { m_toolsHasBeenSet = true; m_tools.push_back(value); return *this; }
    inline ToolConfiguration& AddTools(Tool&& value) { m_toolsHasBeenSet = true; m_tools.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ToolChoice m_toolChoice;
    bool m_toolChoiceHasBeenSet = false;

    Aws::Vector<Tool> m_tools;
    bool m_toolsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
