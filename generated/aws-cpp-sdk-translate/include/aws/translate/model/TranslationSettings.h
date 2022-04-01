/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/Formality.h>
#include <aws/translate/model/Profanity.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Settings that configure the translation output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSLATE_API TranslationSettings
  {
  public:
    TranslationSettings();
    TranslationSettings(Aws::Utils::Json::JsonView jsonValue);
    TranslationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>You can optionally specify the desired level of formality for real-time
     * translations to supported target languages. The formality setting controls the
     * level of formal language usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p>Note that
     * asynchronous translation jobs don't support formality. If you provide a value
     * for formality, the <code>StartTextTranslationJob</code> API throws an exception
     * (InvalidRequestException).</p> <p>For target languages that support formality,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline const Formality& GetFormality() const{ return m_formality; }

    /**
     * <p>You can optionally specify the desired level of formality for real-time
     * translations to supported target languages. The formality setting controls the
     * level of formal language usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p>Note that
     * asynchronous translation jobs don't support formality. If you provide a value
     * for formality, the <code>StartTextTranslationJob</code> API throws an exception
     * (InvalidRequestException).</p> <p>For target languages that support formality,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline bool FormalityHasBeenSet() const { return m_formalityHasBeenSet; }

    /**
     * <p>You can optionally specify the desired level of formality for real-time
     * translations to supported target languages. The formality setting controls the
     * level of formal language usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p>Note that
     * asynchronous translation jobs don't support formality. If you provide a value
     * for formality, the <code>StartTextTranslationJob</code> API throws an exception
     * (InvalidRequestException).</p> <p>For target languages that support formality,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline void SetFormality(const Formality& value) { m_formalityHasBeenSet = true; m_formality = value; }

    /**
     * <p>You can optionally specify the desired level of formality for real-time
     * translations to supported target languages. The formality setting controls the
     * level of formal language usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p>Note that
     * asynchronous translation jobs don't support formality. If you provide a value
     * for formality, the <code>StartTextTranslationJob</code> API throws an exception
     * (InvalidRequestException).</p> <p>For target languages that support formality,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline void SetFormality(Formality&& value) { m_formalityHasBeenSet = true; m_formality = std::move(value); }

    /**
     * <p>You can optionally specify the desired level of formality for real-time
     * translations to supported target languages. The formality setting controls the
     * level of formal language usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p>Note that
     * asynchronous translation jobs don't support formality. If you provide a value
     * for formality, the <code>StartTextTranslationJob</code> API throws an exception
     * (InvalidRequestException).</p> <p>For target languages that support formality,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline TranslationSettings& WithFormality(const Formality& value) { SetFormality(value); return *this;}

    /**
     * <p>You can optionally specify the desired level of formality for real-time
     * translations to supported target languages. The formality setting controls the
     * level of formal language usage (also known as <a
     * href="https://en.wikipedia.org/wiki/Register_(sociolinguistics)">register</a>)
     * in the translation output. You can set the value to informal or formal. If you
     * don't specify a value for formality, or if the target language doesn't support
     * formality, the translation will ignore the formality setting.</p> <p>Note that
     * asynchronous translation jobs don't support formality. If you provide a value
     * for formality, the <code>StartTextTranslationJob</code> API throws an exception
     * (InvalidRequestException).</p> <p>For target languages that support formality,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline TranslationSettings& WithFormality(Formality&& value) { SetFormality(std::move(value)); return *this;}


    /**
     * <p>Enable the profanity setting if you want Amazon Translate to mask profane
     * words and phrases in your translation output.</p> <p>To mask profane words and
     * phrases, Amazon Translate replaces them with the grawlix string “?$#@$“. This
     * 5-character sequence is used for each profane word or phrase, regardless of the
     * length or number of words.</p> <p>Amazon Translate doesn't detect profanity in
     * all of its supported languages. For languages that support profanity detection,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline const Profanity& GetProfanity() const{ return m_profanity; }

    /**
     * <p>Enable the profanity setting if you want Amazon Translate to mask profane
     * words and phrases in your translation output.</p> <p>To mask profane words and
     * phrases, Amazon Translate replaces them with the grawlix string “?$#@$“. This
     * 5-character sequence is used for each profane word or phrase, regardless of the
     * length or number of words.</p> <p>Amazon Translate doesn't detect profanity in
     * all of its supported languages. For languages that support profanity detection,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline bool ProfanityHasBeenSet() const { return m_profanityHasBeenSet; }

    /**
     * <p>Enable the profanity setting if you want Amazon Translate to mask profane
     * words and phrases in your translation output.</p> <p>To mask profane words and
     * phrases, Amazon Translate replaces them with the grawlix string “?$#@$“. This
     * 5-character sequence is used for each profane word or phrase, regardless of the
     * length or number of words.</p> <p>Amazon Translate doesn't detect profanity in
     * all of its supported languages. For languages that support profanity detection,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline void SetProfanity(const Profanity& value) { m_profanityHasBeenSet = true; m_profanity = value; }

    /**
     * <p>Enable the profanity setting if you want Amazon Translate to mask profane
     * words and phrases in your translation output.</p> <p>To mask profane words and
     * phrases, Amazon Translate replaces them with the grawlix string “?$#@$“. This
     * 5-character sequence is used for each profane word or phrase, regardless of the
     * length or number of words.</p> <p>Amazon Translate doesn't detect profanity in
     * all of its supported languages. For languages that support profanity detection,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline void SetProfanity(Profanity&& value) { m_profanityHasBeenSet = true; m_profanity = std::move(value); }

    /**
     * <p>Enable the profanity setting if you want Amazon Translate to mask profane
     * words and phrases in your translation output.</p> <p>To mask profane words and
     * phrases, Amazon Translate replaces them with the grawlix string “?$#@$“. This
     * 5-character sequence is used for each profane word or phrase, regardless of the
     * length or number of words.</p> <p>Amazon Translate doesn't detect profanity in
     * all of its supported languages. For languages that support profanity detection,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline TranslationSettings& WithProfanity(const Profanity& value) { SetProfanity(value); return *this;}

    /**
     * <p>Enable the profanity setting if you want Amazon Translate to mask profane
     * words and phrases in your translation output.</p> <p>To mask profane words and
     * phrases, Amazon Translate replaces them with the grawlix string “?$#@$“. This
     * 5-character sequence is used for each profane word or phrase, regardless of the
     * length or number of words.</p> <p>Amazon Translate doesn't detect profanity in
     * all of its supported languages. For languages that support profanity detection,
     * see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is.html">Supported
     * Languages and Language Codes in the Amazon Translate Developer Guide</a>.</p>
     */
    inline TranslationSettings& WithProfanity(Profanity&& value) { SetProfanity(std::move(value)); return *this;}

  private:

    Formality m_formality;
    bool m_formalityHasBeenSet;

    Profanity m_profanity;
    bool m_profanityHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
