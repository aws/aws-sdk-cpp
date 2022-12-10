/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about the values for reactions to a comment. AWS CodeCommit
   * supports a limited set of reactions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ReactionValueFormats">AWS
   * API Reference</a></p>
   */
  class ReactionValueFormats
  {
  public:
    AWS_CODECOMMIT_API ReactionValueFormats();
    AWS_CODECOMMIT_API ReactionValueFormats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ReactionValueFormats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline const Aws::String& GetEmoji() const{ return m_emoji; }

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline bool EmojiHasBeenSet() const { return m_emojiHasBeenSet; }

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline void SetEmoji(const Aws::String& value) { m_emojiHasBeenSet = true; m_emoji = value; }

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline void SetEmoji(Aws::String&& value) { m_emojiHasBeenSet = true; m_emoji = std::move(value); }

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline void SetEmoji(const char* value) { m_emojiHasBeenSet = true; m_emoji.assign(value); }

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline ReactionValueFormats& WithEmoji(const Aws::String& value) { SetEmoji(value); return *this;}

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline ReactionValueFormats& WithEmoji(Aws::String&& value) { SetEmoji(std::move(value)); return *this;}

    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline ReactionValueFormats& WithEmoji(const char* value) { SetEmoji(value); return *this;}


    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline const Aws::String& GetShortCode() const{ return m_shortCode; }

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline bool ShortCodeHasBeenSet() const { return m_shortCodeHasBeenSet; }

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline void SetShortCode(const Aws::String& value) { m_shortCodeHasBeenSet = true; m_shortCode = value; }

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline void SetShortCode(Aws::String&& value) { m_shortCodeHasBeenSet = true; m_shortCode = std::move(value); }

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline void SetShortCode(const char* value) { m_shortCodeHasBeenSet = true; m_shortCode.assign(value); }

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline ReactionValueFormats& WithShortCode(const Aws::String& value) { SetShortCode(value); return *this;}

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline ReactionValueFormats& WithShortCode(Aws::String&& value) { SetShortCode(std::move(value)); return *this;}

    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline ReactionValueFormats& WithShortCode(const char* value) { SetShortCode(value); return *this;}


    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline const Aws::String& GetUnicode() const{ return m_unicode; }

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline bool UnicodeHasBeenSet() const { return m_unicodeHasBeenSet; }

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline void SetUnicode(const Aws::String& value) { m_unicodeHasBeenSet = true; m_unicode = value; }

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline void SetUnicode(Aws::String&& value) { m_unicodeHasBeenSet = true; m_unicode = std::move(value); }

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline void SetUnicode(const char* value) { m_unicodeHasBeenSet = true; m_unicode.assign(value); }

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline ReactionValueFormats& WithUnicode(const Aws::String& value) { SetUnicode(value); return *this;}

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline ReactionValueFormats& WithUnicode(Aws::String&& value) { SetUnicode(std::move(value)); return *this;}

    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline ReactionValueFormats& WithUnicode(const char* value) { SetUnicode(value); return *this;}

  private:

    Aws::String m_emoji;
    bool m_emojiHasBeenSet = false;

    Aws::String m_shortCode;
    bool m_shortCodeHasBeenSet = false;

    Aws::String m_unicode;
    bool m_unicodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
