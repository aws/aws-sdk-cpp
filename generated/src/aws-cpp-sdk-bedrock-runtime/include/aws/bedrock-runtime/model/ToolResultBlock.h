/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/ToolResultStatus.h>
#include <aws/bedrock-runtime/model/ToolResultContentBlock.h>
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
   * <p>A tool result block that contains the results for a tool request that the
   * model previously made.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolResultBlock">AWS
   * API Reference</a></p>
   */
  class ToolResultBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolResultBlock() = default;
    AWS_BEDROCKRUNTIME_API ToolResultBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolResultBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
    inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
    template<typename ToolUseIdT = Aws::String>
    void SetToolUseId(ToolUseIdT&& value) { m_toolUseIdHasBeenSet = true; m_toolUseId = std::forward<ToolUseIdT>(value); }
    template<typename ToolUseIdT = Aws::String>
    ToolResultBlock& WithToolUseId(ToolUseIdT&& value) { SetToolUseId(std::forward<ToolUseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content for tool result content block.</p>
     */
    inline const Aws::Vector<ToolResultContentBlock>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<ToolResultContentBlock>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<ToolResultContentBlock>>
    ToolResultBlock& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = ToolResultContentBlock>
    ToolResultBlock& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline ToolResultStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ToolResultStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ToolResultBlock& WithStatus(ToolResultStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_toolUseId;
    bool m_toolUseIdHasBeenSet = false;

    Aws::Vector<ToolResultContentBlock> m_content;
    bool m_contentHasBeenSet = false;

    ToolResultStatus m_status{ToolResultStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
