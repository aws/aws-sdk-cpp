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
#include <aws/transcribe/model/Tag.h>
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
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of your new vocabulary.</p> <p>This name is case sensitive, cannot
     * contain spaces, and must be unique within an Amazon Web Services account. If you
     * try to create a vocabulary with the same name as a previous vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each vocabulary must contain terms in only one language. For a list
     * of languages and their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each vocabulary must contain terms in only one language. For a list
     * of languages and their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each vocabulary must contain terms in only one language. For a list
     * of languages and their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each vocabulary must contain terms in only one language. For a list
     * of languages and their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each vocabulary must contain terms in only one language. For a list
     * of languages and their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. Each vocabulary must contain terms in only one language. For a list
     * of languages and their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhrases() const{ return m_phrases; }

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline bool PhrasesHasBeenSet() const { return m_phrasesHasBeenSet; }

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline void SetPhrases(const Aws::Vector<Aws::String>& value) { m_phrasesHasBeenSet = true; m_phrases = value; }

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline void SetPhrases(Aws::Vector<Aws::String>&& value) { m_phrasesHasBeenSet = true; m_phrases = std::move(value); }

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyRequest& WithPhrases(const Aws::Vector<Aws::String>& value) { SetPhrases(value); return *this;}

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyRequest& WithPhrases(Aws::Vector<Aws::String>&& value) { SetPhrases(std::move(value)); return *this;}

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyRequest& AddPhrases(const Aws::String& value) { m_phrasesHasBeenSet = true; m_phrases.push_back(value); return *this; }

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyRequest& AddPhrases(Aws::String&& value) { m_phrasesHasBeenSet = true; m_phrases.push_back(std::move(value)); return *this; }

    /**
     * <p>Use this flag to include a list of terms within your request.</p> <p>Note
     * that if you include <code>Phrases</code> in your request, you cannot use
     * <code>VocabularyFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyRequest& AddPhrases(const char* value) { m_phrasesHasBeenSet = true; m_phrases.push_back(value); return *this; }


    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 location of the text file that contains your custom vocabulary. The
     * URI must be located in the same region as the API endpoint you're calling.</p>
     * <p>Here's an example URI path:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/my-s3-bucket/my-vocab-file.txt</code>
     * </p> <p>Note that if you include <code>VocabularyFileUri</code> in your request,
     * you cannot use the <code>Phrases</code> flag; you must choose one or the
     * other.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyFileUri(const char* value) { SetVocabularyFileUri(value); return *this;}


    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateVocabularyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateVocabularyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateVocabularyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new custom
     * vocabulary at the time you create this new vocabulary.</p>
     */
    inline CreateVocabularyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Vector<Aws::String> m_phrases;
    bool m_phrasesHasBeenSet;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
