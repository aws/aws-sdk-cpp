/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_LEXRUNTIMESERVICE_API Button
  {
  public:
    Button();
    Button(const Aws::Utils::Json::JsonValue& jsonValue);
    Button& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline Button& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline Button& WithText(Aws::String&& value) { SetText(value); return *this;}

    /**
     * <p>Text visible to the user on the button.</p>
     */
    inline Button& WithText(const char* value) { SetText(value); return *this;}

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline Button& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline Button& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>Value sent to Amazon Lex when user clicks the button. For example, consider
     * button text "NYC". When the user clicks the button, the value sent can be "New
     * York City".</p>
     */
    inline Button& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_text;
    bool m_textHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
