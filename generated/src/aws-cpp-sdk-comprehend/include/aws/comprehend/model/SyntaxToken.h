/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/PartOfSpeechTag.h>
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
   * <p>Represents a work in the input text that was recognized and assigned a part
   * of speech. There is one syntax token record for each word in the source
   * text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/SyntaxToken">AWS
   * API Reference</a></p>
   */
  class SyntaxToken
  {
  public:
    AWS_COMPREHEND_API SyntaxToken() = default;
    AWS_COMPREHEND_API SyntaxToken(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API SyntaxToken& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a token.</p>
     */
    inline int GetTokenId() const { return m_tokenId; }
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
    inline void SetTokenId(int value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }
    inline SyntaxToken& WithTokenId(int value) { SetTokenId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SyntaxToken& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the word.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline SyntaxToken& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the word.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline SyntaxToken& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline const PartOfSpeechTag& GetPartOfSpeech() const { return m_partOfSpeech; }
    inline bool PartOfSpeechHasBeenSet() const { return m_partOfSpeechHasBeenSet; }
    template<typename PartOfSpeechT = PartOfSpeechTag>
    void SetPartOfSpeech(PartOfSpeechT&& value) { m_partOfSpeechHasBeenSet = true; m_partOfSpeech = std::forward<PartOfSpeechT>(value); }
    template<typename PartOfSpeechT = PartOfSpeechTag>
    SyntaxToken& WithPartOfSpeech(PartOfSpeechT&& value) { SetPartOfSpeech(std::forward<PartOfSpeechT>(value)); return *this;}
    ///@}
  private:

    int m_tokenId{0};
    bool m_tokenIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    PartOfSpeechTag m_partOfSpeech;
    bool m_partOfSpeechHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
