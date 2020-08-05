/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_TRANSCRIBESERVICE_API UpdateVocabularyFilterRequest : public TranscribeServiceRequest
  {
  public:
    UpdateVocabularyFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVocabularyFilter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline UpdateVocabularyFilterRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline UpdateVocabularyFilterRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary filter to update. If you try to update a
     * vocabulary filter with the same name as another vocabulary filter, you get a
     * <code>ConflictException</code> error.</p>
     */
    inline UpdateVocabularyFilterRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWords() const{ return m_words; }

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline bool WordsHasBeenSet() const { return m_wordsHasBeenSet; }

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline void SetWords(const Aws::Vector<Aws::String>& value) { m_wordsHasBeenSet = true; m_words = value; }

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline void SetWords(Aws::Vector<Aws::String>&& value) { m_wordsHasBeenSet = true; m_words = std::move(value); }

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& WithWords(const Aws::Vector<Aws::String>& value) { SetWords(value); return *this;}

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& WithWords(Aws::Vector<Aws::String>&& value) { SetWords(std::move(value)); return *this;}

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& AddWords(const Aws::String& value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& AddWords(Aws::String&& value) { m_wordsHasBeenSet = true; m_words.push_back(std::move(value)); return *this; }

    /**
     * <p>The words to use in the vocabulary filter. Only use characters from the
     * character set defined for custom vocabularies. For a list of character sets, see
     * <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>If you provide a list of words in the
     * <code>Words</code> parameter, you can't use the
     * <code>VocabularyFilterFileUri</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& AddWords(const char* value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline const Aws::String& GetVocabularyFilterFileUri() const{ return m_vocabularyFilterFileUri; }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline bool VocabularyFilterFileUriHasBeenSet() const { return m_vocabularyFilterFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline void SetVocabularyFilterFileUri(const Aws::String& value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri = value; }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline void SetVocabularyFilterFileUri(Aws::String&& value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline void SetVocabularyFilterFileUri(const char* value) { m_vocabularyFilterFileUriHasBeenSet = true; m_vocabularyFilterFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& WithVocabularyFilterFileUri(const Aws::String& value) { SetVocabularyFilterFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& WithVocabularyFilterFileUri(Aws::String&& value) { SetVocabularyFilterFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of a text file used as input to create the vocabulary
     * filter. Only use characters from the character set defined for custom
     * vocabularies. For a list of character sets, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-vocabulary.html#charsets">Character
     * Sets for Custom Vocabularies</a>.</p> <p>The specified file must be less than 50
     * KB of UTF-8 characters.</p> <p>If you provide the location of a list of words in
     * the <code>VocabularyFilterFileUri</code> parameter, you can't use the
     * <code>Words</code> parameter.</p>
     */
    inline UpdateVocabularyFilterRequest& WithVocabularyFilterFileUri(const char* value) { SetVocabularyFilterFileUri(value); return *this;}

  private:

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet;

    Aws::Vector<Aws::String> m_words;
    bool m_wordsHasBeenSet;

    Aws::String m_vocabularyFilterFileUri;
    bool m_vocabularyFilterFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
