/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/DateTime.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Contains metadata describing the lexicon such as the number of lexemes,
   * language code, and so on. For more information, see <a
   * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
   * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/LexiconAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_POLLY_API LexiconAttributes
  {
  public:
    LexiconAttributes();
    LexiconAttributes(Aws::Utils::Json::JsonView jsonValue);
    LexiconAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline const Aws::String& GetAlphabet() const{ return m_alphabet; }

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline bool AlphabetHasBeenSet() const { return m_alphabetHasBeenSet; }

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline void SetAlphabet(const Aws::String& value) { m_alphabetHasBeenSet = true; m_alphabet = value; }

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline void SetAlphabet(Aws::String&& value) { m_alphabetHasBeenSet = true; m_alphabet = std::move(value); }

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline void SetAlphabet(const char* value) { m_alphabetHasBeenSet = true; m_alphabet.assign(value); }

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline LexiconAttributes& WithAlphabet(const Aws::String& value) { SetAlphabet(value); return *this;}

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline LexiconAttributes& WithAlphabet(Aws::String&& value) { SetAlphabet(std::move(value)); return *this;}

    /**
     * <p>Phonetic alphabet used in the lexicon. Valid values are <code>ipa</code> and
     * <code>x-sampa</code>.</p>
     */
    inline LexiconAttributes& WithAlphabet(const char* value) { SetAlphabet(value); return *this;}


    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline LexiconAttributes& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Language code that the lexicon applies to. A lexicon with a language code
     * such as "en" would be applied to all English languages (en-GB, en-US, en-AUS,
     * en-WLS, and so on.</p>
     */
    inline LexiconAttributes& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline LexiconAttributes& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>Date lexicon was last modified (a timestamp value).</p>
     */
    inline LexiconAttributes& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline const Aws::String& GetLexiconArn() const{ return m_lexiconArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline bool LexiconArnHasBeenSet() const { return m_lexiconArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline void SetLexiconArn(const Aws::String& value) { m_lexiconArnHasBeenSet = true; m_lexiconArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline void SetLexiconArn(Aws::String&& value) { m_lexiconArnHasBeenSet = true; m_lexiconArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline void SetLexiconArn(const char* value) { m_lexiconArnHasBeenSet = true; m_lexiconArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline LexiconAttributes& WithLexiconArn(const Aws::String& value) { SetLexiconArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline LexiconAttributes& WithLexiconArn(Aws::String&& value) { SetLexiconArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the lexicon.</p>
     */
    inline LexiconAttributes& WithLexiconArn(const char* value) { SetLexiconArn(value); return *this;}


    /**
     * <p>Number of lexemes in the lexicon.</p>
     */
    inline int GetLexemesCount() const{ return m_lexemesCount; }

    /**
     * <p>Number of lexemes in the lexicon.</p>
     */
    inline bool LexemesCountHasBeenSet() const { return m_lexemesCountHasBeenSet; }

    /**
     * <p>Number of lexemes in the lexicon.</p>
     */
    inline void SetLexemesCount(int value) { m_lexemesCountHasBeenSet = true; m_lexemesCount = value; }

    /**
     * <p>Number of lexemes in the lexicon.</p>
     */
    inline LexiconAttributes& WithLexemesCount(int value) { SetLexemesCount(value); return *this;}


    /**
     * <p>Total size of the lexicon, in characters.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>Total size of the lexicon, in characters.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>Total size of the lexicon, in characters.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>Total size of the lexicon, in characters.</p>
     */
    inline LexiconAttributes& WithSize(int value) { SetSize(value); return *this;}

  private:

    Aws::String m_alphabet;
    bool m_alphabetHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::String m_lexiconArn;
    bool m_lexiconArnHasBeenSet;

    int m_lexemesCount;
    bool m_lexemesCountHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
