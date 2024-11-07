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
   * <p>Contains a map of variables in a prompt from Prompt management to an object
   * containing the values to fill in for them when running model invocation. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-how.html">How
   * Prompt management works</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/PromptVariableValues">AWS
   * API Reference</a></p>
   */
  class PromptVariableValues
  {
  public:
    AWS_BEDROCKRUNTIME_API PromptVariableValues();
    AWS_BEDROCKRUNTIME_API PromptVariableValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API PromptVariableValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text value that the variable maps to.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline PromptVariableValues& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline PromptVariableValues& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline PromptVariableValues& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
