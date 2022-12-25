/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/TranslationSettings.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class TranslateTextRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API TranslateTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TranslateText"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline TranslateTextRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline TranslateTextRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text to translate. The text string can be a maximum of 10,000 bytes long.
     * Depending on your character set, this may be fewer than 10,000 characters.</p>
     */
    inline TranslateTextRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline TranslateTextRequest& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline TranslateTextRequest& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline TranslateTextRequest& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline TranslateTextRequest& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the terminology list file to be used in the TranslateText
     * request. You can use 1 terminology list at most in a <code>TranslateText</code>
     * request. Terminology lists can contain a maximum of 256 terms.</p>
     */
    inline TranslateTextRequest& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }


    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline TranslateTextRequest& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline TranslateTextRequest& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. For a list of language codes, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
     * languages</a>.</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/comprehend-general.html">Amazon
     * Comprehend</a> to determine the source language.</p>  <p>If you specify
     * <code>auto</code>, you must send the <code>TranslateText</code> request in a
     * region that supports Amazon Comprehend. Otherwise, the request returns an error
     * indicating that autodetect is not supported. </p> 
     */
    inline TranslateTextRequest& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline bool TargetLanguageCodeHasBeenSet() const { return m_targetLanguageCodeHasBeenSet; }

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = value; }

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::move(value); }

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode.assign(value); }

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline TranslateTextRequest& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline TranslateTextRequest& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code requested for the language of the target text. The language
     * must be a language supported by Amazon Translate.</p>
     */
    inline TranslateTextRequest& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}


    /**
     * <p>Settings to configure your translation output, including the option to set
     * the formality level of the output text and the option to mask profane words and
     * phrases.</p>
     */
    inline const TranslationSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Settings to configure your translation output, including the option to set
     * the formality level of the output text and the option to mask profane words and
     * phrases.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Settings to configure your translation output, including the option to set
     * the formality level of the output text and the option to mask profane words and
     * phrases.</p>
     */
    inline void SetSettings(const TranslationSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Settings to configure your translation output, including the option to set
     * the formality level of the output text and the option to mask profane words and
     * phrases.</p>
     */
    inline void SetSettings(TranslationSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Settings to configure your translation output, including the option to set
     * the formality level of the output text and the option to mask profane words and
     * phrases.</p>
     */
    inline TranslateTextRequest& WithSettings(const TranslationSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Settings to configure your translation output, including the option to set
     * the formality level of the output text and the option to mask profane words and
     * phrases.</p>
     */
    inline TranslateTextRequest& WithSettings(TranslationSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminologyNames;
    bool m_terminologyNamesHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::String m_targetLanguageCode;
    bool m_targetLanguageCodeHasBeenSet = false;

    TranslationSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
