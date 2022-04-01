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
  class AWS_TRANSCRIBESERVICE_API CreateVocabularyFilterRequest : public TranscribeServiceRequest
  {
  public:
    CreateVocabularyFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVocabularyFilter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of your new vocabulary filter.</p> <p>This name is case sensitive,
     * cannot contain spaces, and must be unique within an Amazon Web Services account.
     * If you try to create a vocabulary filter with the same name as a previous
     * vocabulary filter, you get a <code>ConflictException</code> error.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The language code of the words in the vocabulary filter. All words in the
     * filter must be in the same language. The vocabulary filter can only be used with
     * transcription jobs in the specified language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the words in the vocabulary filter. All words in the
     * filter must be in the same language. The vocabulary filter can only be used with
     * transcription jobs in the specified language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the words in the vocabulary filter. All words in the
     * filter must be in the same language. The vocabulary filter can only be used with
     * transcription jobs in the specified language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the words in the vocabulary filter. All words in the
     * filter must be in the same language. The vocabulary filter can only be used with
     * transcription jobs in the specified language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the words in the vocabulary filter. All words in the
     * filter must be in the same language. The vocabulary filter can only be used with
     * transcription jobs in the specified language.</p>
     */
    inline CreateVocabularyFilterRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the words in the vocabulary filter. All words in the
     * filter must be in the same language. The vocabulary filter can only be used with
     * transcription jobs in the specified language.</p>
     */
    inline CreateVocabularyFilterRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWords() const{ return m_words; }

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline bool WordsHasBeenSet() const { return m_wordsHasBeenSet; }

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline void SetWords(const Aws::Vector<Aws::String>& value) { m_wordsHasBeenSet = true; m_words = value; }

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline void SetWords(Aws::Vector<Aws::String>&& value) { m_wordsHasBeenSet = true; m_words = std::move(value); }

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithWords(const Aws::Vector<Aws::String>& value) { SetWords(value); return *this;}

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithWords(Aws::Vector<Aws::String>&& value) { SetWords(std::move(value)); return *this;}

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& AddWords(const Aws::String& value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& AddWords(Aws::String&& value) { m_wordsHasBeenSet = true; m_words.push_back(std::move(value)); return *this; }

    /**
     * <p>The words you want in your vocabulary filter. Only use characters specified
     * in the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * sets</a> for the language you're transcribing.</p> <p>Note that if you include
     * <code>Words</code> in your request, you cannot use
     * <code>VocabularyFilterFileUri</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& AddWords(const char* value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline const Aws::String& GetVocabularyFilterFileUri() const{ return m_vocabularyFilterFileUri; }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline bool VocabularyFilterFileUriHasBeenSet() const { return m_vocabularyFilterFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline void SetVocabularyFilterFileUri(const Aws::String& value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri = value; }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline void SetVocabularyFilterFileUri(Aws::String&& value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline void SetVocabularyFilterFileUri(const char* value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterFileUri(const Aws::String& value) { SetVocabularyFilterFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterFileUri(Aws::String&& value) { SetVocabularyFilterFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
     * Sets for Custom Vocabularies</a>.</p> <p>Your vocabulary filter file must be
     * less than 50 KB in size.</p> <p>Note that if you include
     * <code>VocabularyFilterFileUri</code> in your request, you cannot use
     * <code>Words</code>; you must choose one or the other.</p>
     */
    inline CreateVocabularyFilterRequest& WithVocabularyFilterFileUri(const char* value) { SetVocabularyFilterFileUri(value); return *this;}


    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline CreateVocabularyFilterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline CreateVocabularyFilterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline CreateVocabularyFilterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more tags, each in the form of a key:value pair, to a new
     * vocabulary filter at the time you create this new vocabulary filter.</p>
     */
    inline CreateVocabularyFilterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Vector<Aws::String> m_words;
    bool m_wordsHasBeenSet;

    Aws::String m_vocabularyFilterFileUri;
    bool m_vocabularyFilterFileUriHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
