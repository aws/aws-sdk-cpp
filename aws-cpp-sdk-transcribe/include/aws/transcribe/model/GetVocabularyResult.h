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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/VocabularyState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class AWS_TRANSCRIBESERVICE_API GetVocabularyResult
  {
  public:
    GetVocabularyResult();
    GetVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline GetVocabularyResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline GetVocabularyResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary to return.</p>
     */
    inline GetVocabularyResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline GetVocabularyResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the vocabulary entries.</p>
     */
    inline GetVocabularyResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The processing state of the vocabulary.</p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }

    /**
     * <p>The processing state of the vocabulary.</p>
     */
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyState = value; }

    /**
     * <p>The processing state of the vocabulary.</p>
     */
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyState = std::move(value); }

    /**
     * <p>The processing state of the vocabulary.</p>
     */
    inline GetVocabularyResult& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}

    /**
     * <p>The processing state of the vocabulary.</p>
     */
    inline GetVocabularyResult& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}


    /**
     * <p>The date and time that the vocabulary was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the vocabulary was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the vocabulary was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the vocabulary was last modified.</p>
     */
    inline GetVocabularyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the vocabulary was last modified.</p>
     */
    inline GetVocabularyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline GetVocabularyResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline GetVocabularyResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline GetVocabularyResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline const Aws::String& GetDownloadUri() const{ return m_downloadUri; }

    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline void SetDownloadUri(const Aws::String& value) { m_downloadUri = value; }

    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline void SetDownloadUri(Aws::String&& value) { m_downloadUri = std::move(value); }

    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline void SetDownloadUri(const char* value) { m_downloadUri.assign(value); }

    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline GetVocabularyResult& WithDownloadUri(const Aws::String& value) { SetDownloadUri(value); return *this;}

    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline GetVocabularyResult& WithDownloadUri(Aws::String&& value) { SetDownloadUri(std::move(value)); return *this;}

    /**
     * <p>The S3 location where the vocabulary is stored. Use this URI to get the
     * contents of the vocabulary. The URI is available for a limited time.</p>
     */
    inline GetVocabularyResult& WithDownloadUri(const char* value) { SetDownloadUri(value); return *this;}

  private:

    Aws::String m_vocabularyName;

    LanguageCode m_languageCode;

    VocabularyState m_vocabularyState;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    Aws::String m_downloadUri;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
