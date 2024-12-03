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
    AWS_BEDROCKRUNTIME_API ToolConfiguration();
    AWS_BEDROCKRUNTIME_API ToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of tools that you want to pass to a model.</p>
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

    ///@{
    /**
     * <p>If supported by model, forces the model to request a tool.</p>
     */
    inline const ToolChoice& GetToolChoice() const{ return m_toolChoice; }
    inline bool ToolChoiceHasBeenSet() const { return m_toolChoiceHasBeenSet; }
    inline void SetToolChoice(const ToolChoice& value) { m_toolChoiceHasBeenSet = true; m_toolChoice = value; }
    inline void SetToolChoice(ToolChoice&& value) { m_toolChoiceHasBeenSet = true; m_toolChoice = std::move(value); }
    inline ToolConfiguration& WithToolChoice(const ToolChoice& value) { SetToolChoice(value); return *this;}
    inline ToolConfiguration& WithToolChoice(ToolChoice&& value) { SetToolChoice(std::move(value)); return *this;}
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
