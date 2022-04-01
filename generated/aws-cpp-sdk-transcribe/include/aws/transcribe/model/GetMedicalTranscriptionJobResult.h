/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalTranscriptionJob.h>
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
  class AWS_TRANSCRIBESERVICE_API GetMedicalTranscriptionJobResult
  {
  public:
    GetMedicalTranscriptionJobResult();
    GetMedicalTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMedicalTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains detailed information about your medical transcription
     * job. Returned fields include: <code>CompletionTime</code>,
     * <code>ContentIdentificationType</code>, <code>CreationTime</code>,
     * <code>FailureReason</code>, <code>LanguageCode</code>, <code>Media</code>,
     * <code>MediaFormat</code>, <code>MediaSampleRateHertz</code>,
     * <code>MedicalTranscriptionJobName</code>, <code>Settings</code>,
     * <code>Specialty</code>, <code>StartTime</code>, <code>Tags</code>,
     * <code>Transcript</code>, <code>TranscriptionJobStatus</code>, and
     * <code>Type</code>.</p>
     */
    inline const MedicalTranscriptionJob& GetMedicalTranscriptionJob() const{ return m_medicalTranscriptionJob; }

    /**
     * <p>An object that contains detailed information about your medical transcription
     * job. Returned fields include: <code>CompletionTime</code>,
     * <code>ContentIdentificationType</code>, <code>CreationTime</code>,
     * <code>FailureReason</code>, <code>LanguageCode</code>, <code>Media</code>,
     * <code>MediaFormat</code>, <code>MediaSampleRateHertz</code>,
     * <code>MedicalTranscriptionJobName</code>, <code>Settings</code>,
     * <code>Specialty</code>, <code>StartTime</code>, <code>Tags</code>,
     * <code>Transcript</code>, <code>TranscriptionJobStatus</code>, and
     * <code>Type</code>.</p>
     */
    inline void SetMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { m_medicalTranscriptionJob = value; }

    /**
     * <p>An object that contains detailed information about your medical transcription
     * job. Returned fields include: <code>CompletionTime</code>,
     * <code>ContentIdentificationType</code>, <code>CreationTime</code>,
     * <code>FailureReason</code>, <code>LanguageCode</code>, <code>Media</code>,
     * <code>MediaFormat</code>, <code>MediaSampleRateHertz</code>,
     * <code>MedicalTranscriptionJobName</code>, <code>Settings</code>,
     * <code>Specialty</code>, <code>StartTime</code>, <code>Tags</code>,
     * <code>Transcript</code>, <code>TranscriptionJobStatus</code>, and
     * <code>Type</code>.</p>
     */
    inline void SetMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { m_medicalTranscriptionJob = std::move(value); }

    /**
     * <p>An object that contains detailed information about your medical transcription
     * job. Returned fields include: <code>CompletionTime</code>,
     * <code>ContentIdentificationType</code>, <code>CreationTime</code>,
     * <code>FailureReason</code>, <code>LanguageCode</code>, <code>Media</code>,
     * <code>MediaFormat</code>, <code>MediaSampleRateHertz</code>,
     * <code>MedicalTranscriptionJobName</code>, <code>Settings</code>,
     * <code>Specialty</code>, <code>StartTime</code>, <code>Tags</code>,
     * <code>Transcript</code>, <code>TranscriptionJobStatus</code>, and
     * <code>Type</code>.</p>
     */
    inline GetMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { SetMedicalTranscriptionJob(value); return *this;}

    /**
     * <p>An object that contains detailed information about your medical transcription
     * job. Returned fields include: <code>CompletionTime</code>,
     * <code>ContentIdentificationType</code>, <code>CreationTime</code>,
     * <code>FailureReason</code>, <code>LanguageCode</code>, <code>Media</code>,
     * <code>MediaFormat</code>, <code>MediaSampleRateHertz</code>,
     * <code>MedicalTranscriptionJobName</code>, <code>Settings</code>,
     * <code>Specialty</code>, <code>StartTime</code>, <code>Tags</code>,
     * <code>Transcript</code>, <code>TranscriptionJobStatus</code>, and
     * <code>Type</code>.</p>
     */
    inline GetMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { SetMedicalTranscriptionJob(std::move(value)); return *this;}

  private:

    MedicalTranscriptionJob m_medicalTranscriptionJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
