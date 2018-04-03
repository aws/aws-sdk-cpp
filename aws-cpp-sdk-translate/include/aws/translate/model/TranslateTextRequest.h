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
     * <p>The text to translate.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text to translate.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text to translate.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text to translate.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text to translate.</p>
     */
    inline TranslateTextRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text to translate.</p>
     */
    inline TranslateTextRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text to translate.</p>
     */
    inline TranslateTextRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline TranslateTextRequest& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline TranslateTextRequest& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>One of the supported language codes for the source text. If the
     * <code>TargetLanguageCode</code> is not "en", the <code>SourceLanguageCode</code>
     * must be "en".</p> <p>To have Amazon Translate determine the source language of
     * your text, you can specify <code>auto</code> in the
     * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon
     * Translate will call Amazon Comprehend to determine the source language.</p>
     */
    inline TranslateTextRequest& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = value; }

    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode = std::move(value); }

    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCodeHasBeenSet = true; m_targetLanguageCode.assign(value); }

    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline TranslateTextRequest& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline TranslateTextRequest& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>One of the supported language codes for the target text. If the
     * <code>SourceLanguageCode</code> is not "en", the <code>TargetLanguageCode</code>
     * must be "en".</p>
     */
    inline TranslateTextRequest& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet;

    Aws::String m_targetLanguageCode;
    bool m_targetLanguageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
