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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/AppliedTerminology.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Translate
{
namespace Model
{
  class AWS_TRANSLATE_API TranslateTextResult
  {
  public:
    TranslateTextResult();
    TranslateTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TranslateTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline const Aws::String& GetTranslatedText() const{ return m_translatedText; }

    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline void SetTranslatedText(const Aws::String& value) { m_translatedText = value; }

    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline void SetTranslatedText(Aws::String&& value) { m_translatedText = std::move(value); }

    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline void SetTranslatedText(const char* value) { m_translatedText.assign(value); }

    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline TranslateTextResult& WithTranslatedText(const Aws::String& value) { SetTranslatedText(value); return *this;}

    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline TranslateTextResult& WithTranslatedText(Aws::String&& value) { SetTranslatedText(std::move(value)); return *this;}

    /**
     * <p>The the translated text. The maximum length of this text is 5kb.</p>
     */
    inline TranslateTextResult& WithTranslatedText(const char* value) { SetTranslatedText(value); return *this;}


    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline TranslateTextResult& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline TranslateTextResult& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the source text. </p>
     */
    inline TranslateTextResult& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline const Aws::String& GetTargetLanguageCode() const{ return m_targetLanguageCode; }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline void SetTargetLanguageCode(const Aws::String& value) { m_targetLanguageCode = value; }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline void SetTargetLanguageCode(Aws::String&& value) { m_targetLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline void SetTargetLanguageCode(const char* value) { m_targetLanguageCode.assign(value); }

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline TranslateTextResult& WithTargetLanguageCode(const Aws::String& value) { SetTargetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline TranslateTextResult& WithTargetLanguageCode(Aws::String&& value) { SetTargetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the language of the target text. </p>
     */
    inline TranslateTextResult& WithTargetLanguageCode(const char* value) { SetTargetLanguageCode(value); return *this;}


    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline const Aws::Vector<AppliedTerminology>& GetAppliedTerminologies() const{ return m_appliedTerminologies; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetAppliedTerminologies(const Aws::Vector<AppliedTerminology>& value) { m_appliedTerminologies = value; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline void SetAppliedTerminologies(Aws::Vector<AppliedTerminology>&& value) { m_appliedTerminologies = std::move(value); }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& WithAppliedTerminologies(const Aws::Vector<AppliedTerminology>& value) { SetAppliedTerminologies(value); return *this;}

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& WithAppliedTerminologies(Aws::Vector<AppliedTerminology>&& value) { SetAppliedTerminologies(std::move(value)); return *this;}

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& AddAppliedTerminologies(const AppliedTerminology& value) { m_appliedTerminologies.push_back(value); return *this; }

    /**
     * <p>The names of the custom terminologies applied to the input text by Amazon
     * Translate for the translated text response.</p>
     */
    inline TranslateTextResult& AddAppliedTerminologies(AppliedTerminology&& value) { m_appliedTerminologies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_translatedText;

    Aws::String m_sourceLanguageCode;

    Aws::String m_targetLanguageCode;

    Aws::Vector<AppliedTerminology> m_appliedTerminologies;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
