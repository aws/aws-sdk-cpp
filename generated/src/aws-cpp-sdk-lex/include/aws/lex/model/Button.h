/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>Represents an option to be shown on the client platform (Facebook, Slack,
   * etc.)</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/Button">AWS
   * API Reference</a></p>
   */
  class Button
  {
  public:
    AWS_LEXRUNTIMESERVICE_API Button();
    AWS_LEXRUNTIMESERVICE_API Button(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Button& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline Button& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline Button& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Text that is visible to the user on the button.</p>
     */
    inline Button& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline Button& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline Button& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value sent to Amazon Lex when a user chooses the button. For example,
     * consider button text "NYC." When the user chooses the button, the value sent can
     * be "New York City."</p>
     */
    inline Button& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
