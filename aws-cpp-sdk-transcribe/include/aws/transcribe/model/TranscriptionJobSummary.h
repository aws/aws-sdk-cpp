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
#include <aws/transcribe/model/OutputLocationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides a summary of information about a transcription job. .</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary
  {
  public:
    TranscriptionJobSummary();
    TranscriptionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    TranscriptionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transcription job.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>The name of the transcription job.</p>
     */
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the transcription job.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>The name of the transcription job.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>The name of the transcription job.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>The name of the transcription job.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the transcription job.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transcription job.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline TranscriptionJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline TranscriptionJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline TranscriptionJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline TranscriptionJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The language code for the input speech.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the input speech.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

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
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

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
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Indicates the location of the output of the transcription job.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code> then the location is the S3 bucket
     * specified in the <code>outputBucketName</code> field when the transcription job
     * was started with the <code>StartTranscriptionJob</code> operation.</p> <p>If the
     * value is <code>SERVICE_BUCKET</code> then the output is stored by Amazon
     * Transcribe and can be retrieved using the URI in the
     * <code>GetTranscriptionJob</code> response's <code>TranscriptFileUri</code>
     * field.</p>
     */
    inline const OutputLocationType& GetOutputLocationType() const{ return m_outputLocationType; }

    /**
     * <p>Indicates the location of the output of the transcription job.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code> then the location is the S3 bucket
     * specified in the <code>outputBucketName</code> field when the transcription job
     * was started with the <code>StartTranscriptionJob</code> operation.</p> <p>If the
     * value is <code>SERVICE_BUCKET</code> then the output is stored by Amazon
     * Transcribe and can be retrieved using the URI in the
     * <code>GetTranscriptionJob</code> response's <code>TranscriptFileUri</code>
     * field.</p>
     */
    inline bool OutputLocationTypeHasBeenSet() const { return m_outputLocationTypeHasBeenSet; }

    /**
     * <p>Indicates the location of the output of the transcription job.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code> then the location is the S3 bucket
     * specified in the <code>outputBucketName</code> field when the transcription job
     * was started with the <code>StartTranscriptionJob</code> operation.</p> <p>If the
     * value is <code>SERVICE_BUCKET</code> then the output is stored by Amazon
     * Transcribe and can be retrieved using the URI in the
     * <code>GetTranscriptionJob</code> response's <code>TranscriptFileUri</code>
     * field.</p>
     */
    inline void SetOutputLocationType(const OutputLocationType& value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = value; }

    /**
     * <p>Indicates the location of the output of the transcription job.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code> then the location is the S3 bucket
     * specified in the <code>outputBucketName</code> field when the transcription job
     * was started with the <code>StartTranscriptionJob</code> operation.</p> <p>If the
     * value is <code>SERVICE_BUCKET</code> then the output is stored by Amazon
     * Transcribe and can be retrieved using the URI in the
     * <code>GetTranscriptionJob</code> response's <code>TranscriptFileUri</code>
     * field.</p>
     */
    inline void SetOutputLocationType(OutputLocationType&& value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = std::move(value); }

    /**
     * <p>Indicates the location of the output of the transcription job.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code> then the location is the S3 bucket
     * specified in the <code>outputBucketName</code> field when the transcription job
     * was started with the <code>StartTranscriptionJob</code> operation.</p> <p>If the
     * value is <code>SERVICE_BUCKET</code> then the output is stored by Amazon
     * Transcribe and can be retrieved using the URI in the
     * <code>GetTranscriptionJob</code> response's <code>TranscriptFileUri</code>
     * field.</p>
     */
    inline TranscriptionJobSummary& WithOutputLocationType(const OutputLocationType& value) { SetOutputLocationType(value); return *this;}

    /**
     * <p>Indicates the location of the output of the transcription job.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code> then the location is the S3 bucket
     * specified in the <code>outputBucketName</code> field when the transcription job
     * was started with the <code>StartTranscriptionJob</code> operation.</p> <p>If the
     * value is <code>SERVICE_BUCKET</code> then the output is stored by Amazon
     * Transcribe and can be retrieved using the URI in the
     * <code>GetTranscriptionJob</code> response's <code>TranscriptFileUri</code>
     * field.</p>
     */
    inline TranscriptionJobSummary& WithOutputLocationType(OutputLocationType&& value) { SetOutputLocationType(std::move(value)); return *this;}

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

    OutputLocationType m_outputLocationType;
    bool m_outputLocationTypeHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
