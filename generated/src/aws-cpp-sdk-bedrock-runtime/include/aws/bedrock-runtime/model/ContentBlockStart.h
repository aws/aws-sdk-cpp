/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ToolUseBlockStart.h>
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
   * <p>Content block start information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlockStart">AWS
   * API Reference</a></p>
   */
  class ContentBlockStart
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlockStart();
    AWS_BEDROCKRUNTIME_API ContentBlockStart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline const ToolUseBlockStart& GetToolUse() const{ return m_toolUse; }

    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }

    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline void SetToolUse(const ToolUseBlockStart& value) { m_toolUseHasBeenSet = true; m_toolUse = value; }

    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline void SetToolUse(ToolUseBlockStart&& value) { m_toolUseHasBeenSet = true; m_toolUse = std::move(value); }

    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline ContentBlockStart& WithToolUse(const ToolUseBlockStart& value) { SetToolUse(value); return *this;}

    /**
     * <p>Information about a tool that the model is requesting to use.</p>
     */
    inline ContentBlockStart& WithToolUse(ToolUseBlockStart&& value) { SetToolUse(std::move(value)); return *this;}

  private:

    ToolUseBlockStart m_toolUse;
    bool m_toolUseHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
