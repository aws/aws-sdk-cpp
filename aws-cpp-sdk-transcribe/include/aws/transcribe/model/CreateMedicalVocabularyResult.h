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
  class AWS_TRANSCRIBESERVICE_API CreateMedicalVocabularyResult
  {
  public:
    CreateMedicalVocabularyResult();
    CreateMedicalVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMedicalVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline CreateMedicalVocabularyResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline CreateMedicalVocabularyResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the vocabulary. The name must be unique within an AWS account and
     * is case sensitive.</p>
     */
    inline CreateMedicalVocabularyResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code for the entries in your custom vocabulary. US English
     * (en-US) is the only valid language code for Amazon Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the entries in your custom vocabulary. US English
     * (en-US) is the only valid language code for Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code for the entries in your custom vocabulary. US English
     * (en-US) is the only valid language code for Amazon Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code for the entries in your custom vocabulary. US English
     * (en-US) is the only valid language code for Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the entries in your custom vocabulary. US English
     * (en-US) is the only valid language code for Amazon Transcribe Medical.</p>
     */
    inline CreateMedicalVocabularyResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The processing state of your custom vocabulary in Amazon Transcribe Medical.
     * If the state is <code>READY</code>, you can use the vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }

    /**
     * <p>The processing state of your custom vocabulary in Amazon Transcribe Medical.
     * If the state is <code>READY</code>, you can use the vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyState = value; }

    /**
     * <p>The processing state of your custom vocabulary in Amazon Transcribe Medical.
     * If the state is <code>READY</code>, you can use the vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyState = std::move(value); }

    /**
     * <p>The processing state of your custom vocabulary in Amazon Transcribe Medical.
     * If the state is <code>READY</code>, you can use the vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline CreateMedicalVocabularyResult& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}

    /**
     * <p>The processing state of your custom vocabulary in Amazon Transcribe Medical.
     * If the state is <code>READY</code>, you can use the vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline CreateMedicalVocabularyResult& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}


    /**
     * <p>The date and time that you created the vocabulary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that you created the vocabulary.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that you created the vocabulary.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that you created the vocabulary.</p>
     */
    inline CreateMedicalVocabularyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that you created the vocabulary.</p>
     */
    inline CreateMedicalVocabularyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


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
    inline CreateMedicalVocabularyResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline CreateMedicalVocabularyResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>VocabularyState</code> field is <code>FAILED</code>, this field
     * contains information about why the job failed.</p>
     */
    inline CreateMedicalVocabularyResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_vocabularyName;

    LanguageCode m_languageCode;

    VocabularyState m_vocabularyState;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
