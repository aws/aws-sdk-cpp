/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Describes a button to use on a response card used to gather slot values from
   * a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/Button">AWS
   * API Reference</a></p>
   */
  class Button
  {
  public:
    AWS_LEXMODELSV2_API Button();
    AWS_LEXMODELSV2_API Button(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Button& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline Button& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline Button& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text that appears on the button. Use this to tell the user what value is
     * returned when they choose this button.</p>
     */
    inline Button& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline Button& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline Button& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value returned to Amazon Lex when the user chooses this button. This must
     * be one of the slot values configured for the slot.</p>
     */
    inline Button& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
