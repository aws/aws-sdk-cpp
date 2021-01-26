/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/VocabularyState.h>
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
  class AWS_TRANSCRIBESERVICE_API UpdateMedicalVocabularyResult
  {
  public:
    UpdateMedicalVocabularyResult();
    UpdateMedicalVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMedicalVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }

    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }

    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline UpdateMedicalVocabularyResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline UpdateMedicalVocabularyResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated vocabulary.</p>
     */
    inline UpdateMedicalVocabularyResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code for the language of the text file used to update the custom
     * vocabulary. US English (en-US) is the only language supported in Amazon
     * Transcribe Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the language of the text file used to update the custom
     * vocabulary. US English (en-US) is the only language supported in Amazon
     * Transcribe Medical.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code for the language of the text file used to update the custom
     * vocabulary. US English (en-US) is the only language supported in Amazon
     * Transcribe Medical.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code for the language of the text file used to update the custom
     * vocabulary. US English (en-US) is the only language supported in Amazon
     * Transcribe Medical.</p>
     */
    inline UpdateMedicalVocabularyResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the text file used to update the custom
     * vocabulary. US English (en-US) is the only language supported in Amazon
     * Transcribe Medical.</p>
     */
    inline UpdateMedicalVocabularyResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The date and time that the vocabulary was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the vocabulary was updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the vocabulary was updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the vocabulary was updated.</p>
     */
    inline UpdateMedicalVocabularyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the vocabulary was updated.</p>
     */
    inline UpdateMedicalVocabularyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The processing state of the update to the vocabulary. When the
     * <code>VocabularyState</code> field is <code>READY</code>, the vocabulary is
     * ready to be used in a <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }

    /**
     * <p>The processing state of the update to the vocabulary. When the
     * <code>VocabularyState</code> field is <code>READY</code>, the vocabulary is
     * ready to be used in a <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyState = value; }

    /**
     * <p>The processing state of the update to the vocabulary. When the
     * <code>VocabularyState</code> field is <code>READY</code>, the vocabulary is
     * ready to be used in a <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyState = std::move(value); }

    /**
     * <p>The processing state of the update to the vocabulary. When the
     * <code>VocabularyState</code> field is <code>READY</code>, the vocabulary is
     * ready to be used in a <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline UpdateMedicalVocabularyResult& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}

    /**
     * <p>The processing state of the update to the vocabulary. When the
     * <code>VocabularyState</code> field is <code>READY</code>, the vocabulary is
     * ready to be used in a <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline UpdateMedicalVocabularyResult& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}

  private:

    Aws::String m_vocabularyName;

    LanguageCode m_languageCode;

    Aws::Utils::DateTime m_lastModifiedTime;

    VocabularyState m_vocabularyState;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
