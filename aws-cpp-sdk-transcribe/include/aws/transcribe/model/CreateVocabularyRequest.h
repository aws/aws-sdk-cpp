﻿/*
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
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API CreateVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    CreateVocabularyRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVocabulary"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account.
     * The name is case-sensitive.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline CreateVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline CreateVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPhrases() const{ return m_phrases; }

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline void SetPhrases(const Aws::Vector<Aws::String>& value) { m_phrasesHasBeenSet = true; m_phrases = value; }

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline void SetPhrases(Aws::Vector<Aws::String>&& value) { m_phrasesHasBeenSet = true; m_phrases = std::move(value); }

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline CreateVocabularyRequest& WithPhrases(const Aws::Vector<Aws::String>& value) { SetPhrases(value); return *this;}

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline CreateVocabularyRequest& WithPhrases(Aws::Vector<Aws::String>&& value) { SetPhrases(std::move(value)); return *this;}

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline CreateVocabularyRequest& AddPhrases(const Aws::String& value) { m_phrasesHasBeenSet = true; m_phrases.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline CreateVocabularyRequest& AddPhrases(Aws::String&& value) { m_phrasesHasBeenSet = true; m_phrases.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that contains the vocabulary entries. </p>
     */
    inline CreateVocabularyRequest& AddPhrases(const char* value) { m_phrasesHasBeenSet = true; m_phrases.push_back(value); return *this; }

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Vector<Aws::String> m_phrases;
    bool m_phrasesHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
