/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>A word configured for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailWord">AWS
   * API Reference</a></p>
   */
  class GuardrailWord
  {
  public:
    AWS_BEDROCK_API GuardrailWord();
    AWS_BEDROCK_API GuardrailWord(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailWord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline GuardrailWord& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline GuardrailWord& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Text of the word configured for the guardrail to block.</p>
     */
    inline GuardrailWord& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
