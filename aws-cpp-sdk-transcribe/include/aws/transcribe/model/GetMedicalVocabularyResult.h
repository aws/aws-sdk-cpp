/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_TRANSCRIBESERVICE_API GetMedicalVocabularyResult
  {
  public:
    GetMedicalVocabularyResult();
    GetMedicalVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMedicalVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline GetMedicalVocabularyResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline GetMedicalVocabularyResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary returned by Amazon Transcribe Medical.</p>
     */
    inline GetMedicalVocabularyResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The valid language code for your vocabulary entries.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The valid language code for your vocabulary entries.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The valid language code for your vocabulary entries.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The valid language code for your vocabulary entries.</p>
     */
    inline GetMedicalVocabularyResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The valid language code for your vocabulary entries.</p>
     */
    inline GetMedicalVocabularyResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The processing state of the vocabulary. If the <code>VocabularyState</code>
     * is <code>READY</code> then you can use it in the
     * <code>StartMedicalTranscriptionJob</code> operation. </p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }

    /**
     * <p>The processing state of the vocabulary. If the <code>VocabularyState</code>
     * is <code>READY</code> then you can use it in the
     * <code>StartMedicalTranscriptionJob</code> operation. </p>
     */
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyState = value; }

    /**
     * <p>The processing state of the vocabulary. If the <code>VocabularyState</code>
     * is <code>READY</code> then you can use it in the
     * <code>StartMedicalTranscriptionJob</code> operation. </p>
     */
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyState = std::move(value); }

    /**
     * <p>The processing state of the vocabulary. If the <code>VocabularyState</code>
     * is <code>READY</code> then you can use it in the
     * <code>StartMedicalTranscriptionJob</code> operation. </p>
     */
    inline GetMedicalVocabularyResult& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}

    /**
     * <p>The processing state of the vocabulary. If the <code>VocabularyState</code>
     * is <code>READY</code> then you can use it in the
     * <code>StartMedicalTranscriptionJob</code> operation. </p>
     */
    inline GetMedicalVocabularyResult& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}


    /**
     * <p>The date and time that the vocabulary was last modified with a text file
     * different from the one that was previously used.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the vocabulary was last modified with a text file
     * different from the one that was previously used.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the vocabulary was last modified with a text file
     * different from the one that was previously used.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the vocabulary was last modified with a text file
     * different from the one that was previously used.</p>
     */
    inline GetMedicalVocabularyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the vocabulary was last modified with a text file
     * different from the one that was previously used.</p>
     */
    inline GetMedicalVocabularyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline GetMedicalVocabularyResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline GetMedicalVocabularyResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>VocabularyState</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline GetMedicalVocabularyResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline const Aws::String& GetDownloadUri() const{ return m_downloadUri; }

    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline void SetDownloadUri(const Aws::String& value) { m_downloadUri = value; }

    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline void SetDownloadUri(Aws::String&& value) { m_downloadUri = std::move(value); }

    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline void SetDownloadUri(const char* value) { m_downloadUri.assign(value); }

    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline GetMedicalVocabularyResult& WithDownloadUri(const Aws::String& value) { SetDownloadUri(value); return *this;}

    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline GetMedicalVocabularyResult& WithDownloadUri(Aws::String&& value) { SetDownloadUri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where the vocabulary is stored. Use this URI to get
     * the contents of the vocabulary. You can download your vocabulary from the URI
     * for a limited time.</p>
     */
    inline GetMedicalVocabularyResult& WithDownloadUri(const char* value) { SetDownloadUri(value); return *this;}

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
