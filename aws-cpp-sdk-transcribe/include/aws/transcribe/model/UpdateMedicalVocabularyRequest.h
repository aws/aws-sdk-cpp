/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API UpdateMedicalVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    UpdateMedicalVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMedicalVocabulary"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary to update. The name is case sensitive. If you try
     * to update a vocabulary with the same name as a vocabulary you've already made,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code of the language used for the entries in the updated
     * vocabulary. US English (en-US) is the only valid language code in Amazon
     * Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the language used for the entries in the updated
     * vocabulary. US English (en-US) is the only valid language code in Amazon
     * Transcribe Medical.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the language used for the entries in the updated
     * vocabulary. US English (en-US) is the only valid language code in Amazon
     * Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the language used for the entries in the updated
     * vocabulary. US English (en-US) is the only valid language code in Amazon
     * Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the language used for the entries in the updated
     * vocabulary. US English (en-US) is the only valid language code in Amazon
     * Transcribe Medical.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the language used for the entries in the updated
     * vocabulary. US English (en-US) is the only valid language code in Amazon
     * Transcribe Medical.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 of the text file that contains the you use for your
     * custom vocabulary. The URI must be in the same AWS Region as the resource that
     * you are calling. The following is the format for a URI:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/AWSDOC-EXAMPLE-BUCKET/vocab.txt</code>
     * </p> <p>For more information about Amazon S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyFileUri(const char* value) { SetVocabularyFileUri(value); return *this;}

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
