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
    AWS_BEDROCKRUNTIME_API ToolResultBlock();
    AWS_BEDROCKRUNTIME_API ToolResultBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolResultBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline const Aws::String& GetToolUseId() const{ return m_toolUseId; }

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline void SetToolUseId(const Aws::String& value) { m_toolUseIdHasBeenSet = true; m_toolUseId = value; }

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline void SetToolUseId(Aws::String&& value) { m_toolUseIdHasBeenSet = true; m_toolUseId = std::move(value); }

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline void SetToolUseId(const char* value) { m_toolUseIdHasBeenSet = true; m_toolUseId.assign(value); }

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline ToolResultBlock& WithToolUseId(const Aws::String& value) { SetToolUseId(value); return *this;}

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline ToolResultBlock& WithToolUseId(Aws::String&& value) { SetToolUseId(std::move(value)); return *this;}

    /**
     * <p>The ID of the tool request that this is the result for.</p>
     */
    inline ToolResultBlock& WithToolUseId(const char* value) { SetToolUseId(value); return *this;}


    /**
     * <p>The content for tool result content block.</p>
     */
    inline const Aws::Vector<ToolResultContentBlock>& GetContent() const{ return m_content; }

    /**
     * <p>The content for tool result content block.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content for tool result content block.</p>
     */
    inline void SetContent(const Aws::Vector<ToolResultContentBlock>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content for tool result content block.</p>
     */
    inline void SetContent(Aws::Vector<ToolResultContentBlock>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content for tool result content block.</p>
     */
    inline ToolResultBlock& WithContent(const Aws::Vector<ToolResultContentBlock>& value) { SetContent(value); return *this;}

    /**
     * <p>The content for tool result content block.</p>
     */
    inline ToolResultBlock& WithContent(Aws::Vector<ToolResultContentBlock>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content for tool result content block.</p>
     */
    inline ToolResultBlock& AddContent(const ToolResultContentBlock& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>The content for tool result content block.</p>
     */
    inline ToolResultBlock& AddContent(ToolResultContentBlock&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }


    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline const ToolResultStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline void SetStatus(const ToolResultStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline void SetStatus(ToolResultStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline ToolResultBlock& WithStatus(const ToolResultStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for the tool result content block.</p>  <p>This field is
     * only supported Anthropic Claude 3 models.</p> 
     */
    inline ToolResultBlock& WithStatus(ToolResultStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_toolUseId;
    bool m_toolUseIdHasBeenSet = false;

    Aws::Vector<ToolResultContentBlock> m_content;
    bool m_contentHasBeenSet = false;

    ToolResultStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
