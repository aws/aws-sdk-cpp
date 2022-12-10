/**
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
  class CreateMedicalVocabularyRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateMedicalVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMedicalVocabulary"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your new custom medical vocabulary.</p>
     * <p>This name is case sensitive, cannot contain spaces, and must be unique within
     * an Amazon Web Services account. If you try to create a new custom medical
     * vocabulary with the same name as an existing custom medical vocabulary, you get
     * a <code>ConflictException</code> error.</p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. US English (<code>en-US</code>) is the only language supported with
     * Amazon Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. US English (<code>en-US</code>) is the only language supported with
     * Amazon Transcribe Medical.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. US English (<code>en-US</code>) is the only language supported with
     * Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. US English (<code>en-US</code>) is the only language supported with
     * Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. US English (<code>en-US</code>) is the only language supported with
     * Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language of the entries in your custom
     * vocabulary. US English (<code>en-US</code>) is the only language supported with
     * Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline const Aws::String& GetVocabularyFileUri() const{ return m_vocabularyFileUri; }

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline bool VocabularyFileUriHasBeenSet() const { return m_vocabularyFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline void SetVocabularyFileUri(const Aws::String& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = value; }

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline void SetVocabularyFileUri(Aws::String&& value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline void SetVocabularyFileUri(const char* value) { m_vocabularyFileUriHasBeenSet = true; m_vocabularyFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(const Aws::String& value) { SetVocabularyFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(Aws::String&& value) { SetVocabularyFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location (URI) of the text file that contains your custom
     * medical vocabulary. The URI must be in the same Amazon Web Services Region as
     * the resource you're calling.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-vocab-file.txt</code> </p>
     */
    inline CreateMedicalVocabularyRequest& WithVocabularyFileUri(const char* value) { SetVocabularyFileUri(value); return *this;}


    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * custom medical vocabulary at the time you create this new custom vocabulary.</p>
     * <p>To learn more about using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline CreateMedicalVocabularyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyFileUri;
    bool m_vocabularyFileUriHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
