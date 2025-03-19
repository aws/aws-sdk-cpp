/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The start of a tool use block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolUseBlockStart">AWS
   * API Reference</a></p>
   */
  class ToolUseBlockStart
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolUseBlockStart() = default;
    AWS_BEDROCKRUNTIME_API ToolUseBlockStart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolUseBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the tool request.</p>
     */
    inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
    inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
    template<typename ToolUseIdT = Aws::String>
    void SetToolUseId(ToolUseIdT&& value) { m_toolUseIdHasBeenSet = true; m_toolUseId = std::forward<ToolUseIdT>(value); }
    template<typename ToolUseIdT = Aws::String>
    ToolUseBlockStart& WithToolUseId(ToolUseIdT&& value) { SetToolUseId(std::forward<ToolUseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tool that the model is requesting to use.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ToolUseBlockStart& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_toolUseId;
    bool m_toolUseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
