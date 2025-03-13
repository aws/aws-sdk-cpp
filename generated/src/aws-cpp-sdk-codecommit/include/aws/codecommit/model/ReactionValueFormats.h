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
   * <p>Information about the values for reactions to a comment. CodeCommit supports
   * a limited set of reactions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ReactionValueFormats">AWS
   * API Reference</a></p>
   */
  class ReactionValueFormats
  {
  public:
    AWS_CODECOMMIT_API ReactionValueFormats() = default;
    AWS_CODECOMMIT_API ReactionValueFormats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ReactionValueFormats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Emoji Version 1.0 graphic of the reaction. These graphics are interpreted
     * slightly differently on different operating systems.</p>
     */
    inline const Aws::String& GetEmoji() const { return m_emoji; }
    inline bool EmojiHasBeenSet() const { return m_emojiHasBeenSet; }
    template<typename EmojiT = Aws::String>
    void SetEmoji(EmojiT&& value) { m_emojiHasBeenSet = true; m_emoji = std::forward<EmojiT>(value); }
    template<typename EmojiT = Aws::String>
    ReactionValueFormats& WithEmoji(EmojiT&& value) { SetEmoji(std::forward<EmojiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The emoji short code for the reaction. Short codes are interpreted slightly
     * differently on different operating systems. </p>
     */
    inline const Aws::String& GetShortCode() const { return m_shortCode; }
    inline bool ShortCodeHasBeenSet() const { return m_shortCodeHasBeenSet; }
    template<typename ShortCodeT = Aws::String>
    void SetShortCode(ShortCodeT&& value) { m_shortCodeHasBeenSet = true; m_shortCode = std::forward<ShortCodeT>(value); }
    template<typename ShortCodeT = Aws::String>
    ReactionValueFormats& WithShortCode(ShortCodeT&& value) { SetShortCode(std::forward<ShortCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unicode codepoint for the reaction.</p>
     */
    inline const Aws::String& GetUnicode() const { return m_unicode; }
    inline bool UnicodeHasBeenSet() const { return m_unicodeHasBeenSet; }
    template<typename UnicodeT = Aws::String>
    void SetUnicode(UnicodeT&& value) { m_unicodeHasBeenSet = true; m_unicode = std::forward<UnicodeT>(value); }
    template<typename UnicodeT = Aws::String>
    ReactionValueFormats& WithUnicode(UnicodeT&& value) { SetUnicode(std::forward<UnicodeT>(value)); return *this;}
    ///@}
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
