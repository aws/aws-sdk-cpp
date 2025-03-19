/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/ToolChoice.h>
#include <aws/bedrock-runtime/model/Tool.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Configuration information for the tools that you pass to a model. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Tool
   * use (function calling)</a> in the Amazon Bedrock User Guide.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolConfiguration">AWS
   * API Reference</a></p>
   */
  class ToolConfiguration
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolConfiguration() = default;
    AWS_BEDROCKRUNTIME_API ToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of tools that you want to pass to a model.</p>
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
     * <p>If supported by model, forces the model to request a tool.</p>
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
} // namespace BedrockRuntime
} // namespace Aws
