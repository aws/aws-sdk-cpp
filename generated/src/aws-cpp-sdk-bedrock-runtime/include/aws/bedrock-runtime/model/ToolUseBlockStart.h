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
    AWS_BEDROCKRUNTIME_API ToolUseBlockStart();
    AWS_BEDROCKRUNTIME_API ToolUseBlockStart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolUseBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ToolUseBlockStart& WithToolUseId(const Aws::String& value) { SetToolUseId(value); return *this;}
    inline ToolUseBlockStart& WithToolUseId(Aws::String&& value) { SetToolUseId(std::move(value)); return *this;}
    inline ToolUseBlockStart& WithToolUseId(const char* value) { SetToolUseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tool that the model is requesting to use.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ToolUseBlockStart& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ToolUseBlockStart& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ToolUseBlockStart& WithName(const char* value) { SetName(value); return *this;}
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
