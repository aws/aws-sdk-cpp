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
  class AWS_TRANSCRIBESERVICE_API CreateMedicalVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    CreateMedicalVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMedicalVocabulary"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary. This case-sensitive name must be unique
     * within an AWS account. If you try to create a vocabulary with the same name as a
     * previous vocabulary you will receive a <code>ConflictException</code> error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code used for the entries within your custom vocabulary. The
     * language code of your custom vocabulary must match the language code of your
     * transcription job. US English (en-US) is the only language code available for
     * Amazon Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used for the entries within your custom vocabulary. The
     * language code of your custom vocabulary must match the language code of your
     * transcription job. US English (en-US) is the only language code available for
     * Amazon Transcribe Medical.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used for the entries within your custom vocabulary. The
     * language code of your custom vocabulary must match the language code of your
     * transcription job. US English (en-US) is the only language code available for
     * Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used for the entries within your custom vocabulary. The
     * language code of your custom vocabulary must match the language code of your
     * transcription job. US English (en-US) is the only language code available for
     * Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used for the entries within your custom vocabulary. The
     * language code of your custom vocabulary must match the language code of your
     * transcription job. US English (en-US) is the only language code available for
     * Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used for the entries within your custom vocabulary. The
     * language code of your custom vocabulary must match the language code of your
     * transcription job. US English (en-US) is the only language code available for
     * Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the text file you use to define your custom
     * vocabulary. The URI must be in the same AWS region as the API endpoint you're
     * calling. Enter information about your <code>VocabularyFileUri</code> in the
     * following format:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>This is an example of a vocabulary file uri location in Amazon
     * S3:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary-med">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(const char* value) { SetVocabularyFileUri(value); return *this;}

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
