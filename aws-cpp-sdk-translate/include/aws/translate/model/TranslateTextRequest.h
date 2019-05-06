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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class AWS_TRANSLATE_API TranslateTextRequest : public TranslateRequest
  {
  public:
    TranslateTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TranslateText"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline TranslateTextRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline TranslateTextRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text to translate. The text string can be a maximum of 5,000 bytes long.
     * Depending on your character set, this may be fewer than 5,000 characters.</p>
     */
    inline TranslateTextRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminologyNames() const{ return m_terminologyNames; }

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline bool TerminologyNamesHasBeenSet() const { return m_terminologyNamesHasBeenSet; }

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline void SetTerminologyNames(const Aws::Vector<Aws::String>& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = value; }

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline void SetTerminologyNames(Aws::Vector<Aws::String>&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames = std::move(value); }

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline TranslateTextRequest& WithTerminologyNames(const Aws::Vector<Aws::String>& value) { SetTerminologyNames(value); return *this;}

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline TranslateTextRequest& WithTerminologyNames(Aws::Vector<Aws::String>&& value) { SetTerminologyNames(std::move(value)); return *this;}

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline TranslateTextRequest& AddTerminologyNames(const Aws::String& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline TranslateTextRequest& AddTerminologyNames(Aws::String&& value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The TerminologyNames list that is taken as input to the TranslateText
     * request. This has a minimum length of 0 and a maximum length of 1.</p>
     */
    inline TranslateTextRequest& AddTerminologyNames(const char* value) { m_terminologyNamesHasBeenSet = true; m_terminologyNames.push_back(value); return *this; }


    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline TranslateTextRequest& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
     */
    inline TranslateTextRequest& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the source text. The language must be a
     * language supported by Amazon Translate. </p> <p>To have Amazon Translate
     * determine the source language of your text, you can specify <code>auto</code> in
     * the <code>SourceLanguageCode</code> field. If you specify <code>auto</code>,
     * Amazon Translate will call Amazon Comprehend to determine the source
     * language.</p>
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

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    Aws::Vector<Aws::String> m_terminologyNames;
    bool m_terminologyNamesHasBeenSet;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet;

    Aws::String m_targetLanguageCode;
    bool m_targetLanguageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
