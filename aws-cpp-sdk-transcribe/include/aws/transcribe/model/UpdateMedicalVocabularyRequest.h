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
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary to update. The name is case-sensitive. If you try
     * to update a vocabulary with the same name as a previous vocabulary you will
     * receive a <code>ConflictException</code> error.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code of the entries in the updated vocabulary. US English
     * (en-US) is the only valid language code in Amazon Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the entries in the updated vocabulary. US English
     * (en-US) is the only valid language code in Amazon Transcribe Medical.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the entries in the updated vocabulary. US English
     * (en-US) is the only valid language code in Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the entries in the updated vocabulary. US English
     * (en-US) is the only valid language code in Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the entries in the updated vocabulary. US English
     * (en-US) is the only valid language code in Amazon Transcribe Medical.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the entries in the updated vocabulary. US English
     * (en-US) is the only valid language code in Amazon Transcribe Medical.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#object-keys">Object
     * Keys</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>For more information
     * about custom vocabularies in Amazon Transcribe Medical, see <a
     * href="http://docs.aws.amazon.com/transcribe/latest/dg/how-it-works.html#how-vocabulary">Medical
     * Custom Vocabularies</a>.</p>
     */
    inline UpdateMedicalVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the text file containing the definition of the
     * custom vocabulary. The URI must be in the same AWS region as the API endpoint
     * you are calling. You can see the fields you need to enter for you Amazon S3
     * location in the example URI here:</p> <p> <code>
     * https://s3.&lt;aws-region&gt;.amazonaws.com/&lt;bucket-name&gt;/&lt;keyprefix&gt;/&lt;objectkey&gt;
     * </code> </p> <p>For example:</p> <p>
     * <code>https://s3.us-east-1.amazonaws.com/examplebucket/vocab.txt</code> </p>
     * <p>For more information about S3 object names, see <a
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
