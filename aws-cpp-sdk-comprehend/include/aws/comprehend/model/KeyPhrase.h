/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Describes a key noun phrase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/KeyPhrase">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API KeyPhrase
  {
  public:
    KeyPhrase();
    KeyPhrase(Aws::Utils::Json::JsonView jsonValue);
    KeyPhrase& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline KeyPhrase& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline KeyPhrase& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline KeyPhrase& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of a key noun phrase.</p>
     */
    inline KeyPhrase& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>A character offset in the input text that shows where the key phrase begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>A character offset in the input text that shows where the key phrase begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>A character offset in the input text that shows where the key phrase begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>A character offset in the input text that shows where the key phrase begins
     * (the first character is at position 0). The offset returns the position of each
     * UTF-8 code point in the string. A <i>code point</i> is the abstract character
     * from a particular graphical representation. For example, a multi-byte UTF-8
     * character maps to a single code point.</p>
     */
    inline KeyPhrase& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>A character offset in the input text where the key phrase ends. The offset
     * returns the position of each UTF-8 code point in the string. A <code>code
     * point</code> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>A character offset in the input text where the key phrase ends. The offset
     * returns the position of each UTF-8 code point in the string. A <code>code
     * point</code> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>A character offset in the input text where the key phrase ends. The offset
     * returns the position of each UTF-8 code point in the string. A <code>code
     * point</code> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>A character offset in the input text where the key phrase ends. The offset
     * returns the position of each UTF-8 code point in the string. A <code>code
     * point</code> is the abstract character from a particular graphical
     * representation. For example, a multi-byte UTF-8 character maps to a single code
     * point.</p>
     */
    inline KeyPhrase& WithEndOffset(int value) { SetEndOffset(value); return *this;}

  private:

    double m_score;
    bool m_scoreHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet;

    int m_endOffset;
    bool m_endOffsetHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
