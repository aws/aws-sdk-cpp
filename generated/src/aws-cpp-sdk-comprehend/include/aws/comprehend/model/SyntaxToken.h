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
    AWS_COMPREHEND_API SyntaxToken();
    AWS_COMPREHEND_API SyntaxToken(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API SyntaxToken& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a token.</p>
     */
    inline int GetTokenId() const{ return m_tokenId; }

    /**
     * <p>A unique identifier for a token.</p>
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>A unique identifier for a token.</p>
     */
    inline void SetTokenId(int value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>A unique identifier for a token.</p>
     */
    inline SyntaxToken& WithTokenId(int value) { SetTokenId(value); return *this;}


    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline SyntaxToken& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline SyntaxToken& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The word that was recognized in the source text.</p>
     */
    inline SyntaxToken& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the word.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the word.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the word.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the word.</p>
     */
    inline SyntaxToken& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the word.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the word.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the word.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the word.</p>
     */
    inline SyntaxToken& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline const PartOfSpeechTag& GetPartOfSpeech() const{ return m_partOfSpeech; }

    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline bool PartOfSpeechHasBeenSet() const { return m_partOfSpeechHasBeenSet; }

    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline void SetPartOfSpeech(const PartOfSpeechTag& value) { m_partOfSpeechHasBeenSet = true; m_partOfSpeech = value; }

    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline void SetPartOfSpeech(PartOfSpeechTag&& value) { m_partOfSpeechHasBeenSet = true; m_partOfSpeech = std::move(value); }

    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline SyntaxToken& WithPartOfSpeech(const PartOfSpeechTag& value) { SetPartOfSpeech(value); return *this;}

    /**
     * <p>Provides the part of speech label and the confidence level that Amazon
     * Comprehend has that the part of speech was correctly identified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline SyntaxToken& WithPartOfSpeech(PartOfSpeechTag&& value) { SetPartOfSpeech(std::move(value)); return *this;}

  private:

    int m_tokenId;
    bool m_tokenIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    PartOfSpeechTag m_partOfSpeech;
    bool m_partOfSpeechHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
