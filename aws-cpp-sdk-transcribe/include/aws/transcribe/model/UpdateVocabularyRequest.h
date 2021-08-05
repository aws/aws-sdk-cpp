﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_TRANSCRIBESERVICE_API UpdateVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    UpdateVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVocabulary"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline UpdateVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline UpdateVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline UpdateVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a>what-is-transcribe</a>.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a>what-is-transcribe</a>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a>what-is-transcribe</a>.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a>what-is-transcribe</a>.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a>what-is-transcribe</a>.</p>
     */
    inline UpdateVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a>what-is-transcribe</a>.</p>
     */
    inline UpdateVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhrases() const{ return m_phrases; }

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline bool PhrasesHasBeenSet() const { return m_phrasesHasBeenSet; }

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline void SetPhrases(const Aws::Vector<Aws::String>& value) { m_phrasesHasBeenSet = true; m_phrases = value; }

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline void SetPhrases(Aws::Vector<Aws::String>&& value) { m_phrasesHasBeenSet = true; m_phrases = std::move(value); }

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline UpdateVocabularyRequest& WithPhrases(const Aws::Vector<Aws::String>& value) { SetPhrases(value); return *this;}

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline UpdateVocabularyRequest& WithPhrases(Aws::Vector<Aws::String>&& value) { SetPhrases(std::move(value)); return *this;}

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline UpdateVocabularyRequest& AddPhrases(const Aws::String& value) { m_phrasesHasBeenSet = true; m_phrases.push_back(value); return *this; }

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline UpdateVocabularyRequest& AddPhrases(Aws::String&& value) { m_phrasesHasBeenSet = true; m_phrases.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings containing the vocabulary entries.</p>
     */
    inline UpdateVocabularyRequest& AddPhrases(const char* value) { m_phrasesHasBeenSet = true; m_phrases.push_back(value); return *this; }


    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline UpdateVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline UpdateVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 location of the text file that contains the definition of the custom
     * vocabulary. The URI must be in the same region as the API endpoint that you are
     * calling. The general form is </p> <p>For example:</p> <p>For more information
     * about S3 object names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Custom
     * Vocabularies</a>.</p>
     */
    inline UpdateVocabularyRequest& WithVocabularyFileUri(const char* value) { SetVocabularyFileUri(value); return *this;}

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Vector<Aws::String> m_phrases;
    bool m_phrasesHasBeenSet;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
