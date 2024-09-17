/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>A tool use content block. Contains information about a tool that the model is
   * requesting be run., The model uses the result from the tool to generate a
   * response. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolUseBlock">AWS
   * API Reference</a></p>
   */
  class ToolUseBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolUseBlock();
    AWS_BEDROCKRUNTIME_API ToolUseBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolUseBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the tool request.</p>
     */
    inline const Aws::String& GetToolUseId() const{ return m_toolUseId; }
    inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
    inline void SetToolUseId(const Aws::String& value) { m_toolUseIdHasBeenSet = true; m_toolUseId = value; }
    inline void SetToolUseId(Aws::String&& value) { m_toolUseIdHasBeenSet = true; m_toolUseId = std::move(value); }
    inline void SetToolUseId(const char* value) { m_toolUseIdHasBeenSet = true; m_toolUseId.assign(value); }
    inline ToolUseBlock& WithToolUseId(const Aws::String& value) { SetToolUseId(value); return *this;}
    inline ToolUseBlock& WithToolUseId(Aws::String&& value) { SetToolUseId(std::move(value)); return *this;}
    inline ToolUseBlock& WithToolUseId(const char* value) { SetToolUseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tool that the model wants to use.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ToolUseBlock& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ToolUseBlock& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ToolUseBlock& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input to pass to the tool. </p>
     */
    inline Aws::Utils::DocumentView GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::Utils::Document& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::Utils::Document&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline ToolUseBlock& WithInput(const Aws::Utils::Document& value) { SetInput(value); return *this;}
    inline ToolUseBlock& WithInput(Aws::Utils::Document&& value) { SetInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_toolUseId;
    bool m_toolUseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::Document m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
