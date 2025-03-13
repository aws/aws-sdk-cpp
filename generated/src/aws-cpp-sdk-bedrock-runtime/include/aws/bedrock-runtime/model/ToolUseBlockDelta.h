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
   * <p>The delta for a tool use block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolUseBlockDelta">AWS
   * API Reference</a></p>
   */
  class ToolUseBlockDelta
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolUseBlockDelta() = default;
    AWS_BEDROCKRUNTIME_API ToolUseBlockDelta(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolUseBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input for a requested tool.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    ToolUseBlockDelta& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
