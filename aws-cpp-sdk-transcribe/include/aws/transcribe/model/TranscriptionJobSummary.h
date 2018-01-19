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
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <utility>

namespace Aws
{
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

  /**
   * <p>Provides a summary of information about a transcription job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary
  {
  public:
    TranscriptionJobSummary();
    TranscriptionJobSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    TranscriptionJobSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name assigned to the transcription job when it was created.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>Timestamp of the date and time that the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Timestamp of the date and time that the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Timestamp of the date and time that the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Timestamp of the date and time that the job was created.</p>
     */
    inline TranscriptionJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Timestamp of the date and time that the job was created.</p>
     */
    inline TranscriptionJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Timestamp of the date and time that the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>Timestamp of the date and time that the job completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>Timestamp of the date and time that the job completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>Timestamp of the date and time that the job completed.</p>
     */
    inline TranscriptionJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>Timestamp of the date and time that the job completed.</p>
     */
    inline TranscriptionJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The language code for the input speech.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the input speech.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code for the input speech.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code for the input speech.</p>
     */
    inline TranscriptionJobSummary& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the input speech.</p>
     */
    inline TranscriptionJobSummary& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The status of the transcription job. When the status is
     * <code>COMPLETED</code>, use the <code>GetTranscriptionJob</code> operation to
     * get the results of the transcription.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>The status of the transcription job. When the status is
     * <code>COMPLETED</code>, use the <code>GetTranscriptionJob</code> operation to
     * get the results of the transcription.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>The status of the transcription job. When the status is
     * <code>COMPLETED</code>, use the <code>GetTranscriptionJob</code> operation to
     * get the results of the transcription.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>The status of the transcription job. When the status is
     * <code>COMPLETED</code>, use the <code>GetTranscriptionJob</code> operation to
     * get the results of the transcription.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>The status of the transcription job. When the status is
     * <code>COMPLETED</code>, use the <code>GetTranscriptionJob</code> operation to
     * get the results of the transcription.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains a description of the error.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    TranscriptionJobStatus m_transcriptionJobStatus;
    bool m_transcriptionJobStatusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
