/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VocabularyLanguageCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateVocabularyRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVocabulary"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline CreateVocabularyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline CreateVocabularyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>. If a create request is received more than
     * once with same client token, subsequent requests return the previous response
     * without creating a vocabulary again.</p>
     */
    inline CreateVocabularyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateVocabularyRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateVocabularyRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateVocabularyRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline CreateVocabularyRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline const VocabularyLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline void SetLanguageCode(const VocabularyLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline void SetLanguageCode(VocabularyLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline CreateVocabularyRequest& WithLanguageCode(const VocabularyLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline CreateVocabularyRequest& WithLanguageCode(VocabularyLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline CreateVocabularyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline CreateVocabularyRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the custom vocabulary in plain-text format with a table of
     * values. Each row in the table represents a word or a phrase, described with
     * <code>Phrase</code>, <code>IPA</code>, <code>SoundsLike</code>, and
     * <code>DisplayAs</code> fields. Separate the fields with TAB characters. The size
     * limit is 50KB. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html#create-vocabulary-table">Create
     * a custom vocabulary using a table</a>.</p>
     */
    inline CreateVocabularyRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateVocabularyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    VocabularyLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
