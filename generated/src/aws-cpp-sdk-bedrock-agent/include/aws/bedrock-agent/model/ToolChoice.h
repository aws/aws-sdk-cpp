/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AutoToolChoice.h>
#include <aws/bedrock-agent/model/AnyToolChoice.h>
#include <aws/bedrock-agent/model/SpecificToolChoice.h>
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
   * <p>Defines which tools the model should request when invoked. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Use a
   * tool to complete an Amazon Bedrock model response</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ToolChoice">AWS
   * API Reference</a></p>
   */
  class ToolChoice
  {
  public:
    AWS_BEDROCKAGENT_API ToolChoice() = default;
    AWS_BEDROCKAGENT_API ToolChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines tools. The model automatically decides whether to call a tool or to
     * generate text instead.</p>
     */
    inline const AutoToolChoice& GetAuto() const { return m_auto; }
    inline bool AutoHasBeenSet() const { return m_autoHasBeenSet; }
    template<typename AutoT = AutoToolChoice>
    void SetAuto(AutoT&& value) { m_autoHasBeenSet = true; m_auto = std::forward<AutoT>(value); }
    template<typename AutoT = AutoToolChoice>
    ToolChoice& WithAuto(AutoT&& value) { SetAuto(std::forward<AutoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines tools, at least one of which must be requested by the model. No text
     * is generated but the results of tool use are sent back to the model to help
     * generate a response.</p>
     */
    inline const AnyToolChoice& GetAny() const { return m_any; }
    inline bool AnyHasBeenSet() const { return m_anyHasBeenSet; }
    template<typename AnyT = AnyToolChoice>
    void SetAny(AnyT&& value) { m_anyHasBeenSet = true; m_any = std::forward<AnyT>(value); }
    template<typename AnyT = AnyToolChoice>
    ToolChoice& WithAny(AnyT&& value) { SetAny(std::forward<AnyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a specific tool that the model must request. No text is generated but
     * the results of tool use are sent back to the model to help generate a
     * response.</p>
     */
    inline const SpecificToolChoice& GetTool() const { return m_tool; }
    inline bool ToolHasBeenSet() const { return m_toolHasBeenSet; }
    template<typename ToolT = SpecificToolChoice>
    void SetTool(ToolT&& value) { m_toolHasBeenSet = true; m_tool = std::forward<ToolT>(value); }
    template<typename ToolT = SpecificToolChoice>
    ToolChoice& WithTool(ToolT&& value) { SetTool(std::forward<ToolT>(value)); return *this;}
    ///@}
  private:

    AutoToolChoice m_auto;
    bool m_autoHasBeenSet = false;

    AnyToolChoice m_any;
    bool m_anyHasBeenSet = false;

    SpecificToolChoice m_tool;
    bool m_toolHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
