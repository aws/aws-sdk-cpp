/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/transcribe/model/OutputLocationType.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/transcribe/model/ModelSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/LanguageCodeItem.h>
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
   * <p>Provides detailed information about a specific transcription
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJobSummary">AWS
   * API Reference</a></p>
   */
  class TranscriptionJobSummary
  {
  public:
    AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary();
    AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API TranscriptionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time your transcription job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline TranscriptionJobSummary& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your transcription.</p>
     */
    inline TranscriptionJobSummary& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>Provides the status of your transcription job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJobSummary& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline TranscriptionJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline const OutputLocationType& GetOutputLocationType() const{ return m_outputLocationType; }

    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline bool OutputLocationTypeHasBeenSet() const { return m_outputLocationTypeHasBeenSet; }

    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline void SetOutputLocationType(const OutputLocationType& value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = value; }

    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline void SetOutputLocationType(OutputLocationType&& value) { m_outputLocationTypeHasBeenSet = true; m_outputLocationType = std::move(value); }

    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline TranscriptionJobSummary& WithOutputLocationType(const OutputLocationType& value) { SetOutputLocationType(value); return *this;}

    /**
     * <p>Indicates where the specified transcription output is stored.</p> <p>If the
     * value is <code>CUSTOMER_BUCKET</code>, the location is the Amazon S3 bucket you
     * specified using the <code>OutputBucketName</code> parameter in your request. If
     * you also included <code>OutputKey</code> in your request, your output is located
     * in the path you specified in your request.</p> <p>If the value is
     * <code>SERVICE_BUCKET</code>, the location is a service-managed Amazon S3 bucket.
     * To access a transcript stored in a service-managed bucket, use the URI shown in
     * the <code>TranscriptFileUri</code> or <code>RedactedTranscriptFileUri</code>
     * field.</p>
     */
    inline TranscriptionJobSummary& WithOutputLocationType(OutputLocationType&& value) { SetOutputLocationType(std::move(value)); return *this;}


    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }

    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }

    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }

    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }

    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline TranscriptionJobSummary& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}

    /**
     * <p>The content redaction settings of the transcription job.</p>
     */
    inline TranscriptionJobSummary& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}


    
    inline const ModelSettings& GetModelSettings() const{ return m_modelSettings; }

    
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }

    
    inline void SetModelSettings(const ModelSettings& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = value; }

    
    inline void SetModelSettings(ModelSettings&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::move(value); }

    
    inline TranscriptionJobSummary& WithModelSettings(const ModelSettings& value) { SetModelSettings(value); return *this;}

    
    inline TranscriptionJobSummary& WithModelSettings(ModelSettings&& value) { SetModelSettings(std::move(value)); return *this;}


    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Indicates whether automatic language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline TranscriptionJobSummary& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const{ return m_identifyMultipleLanguages; }

    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }

    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }

    /**
     * <p>Indicates whether automatic multi-language identification was enabled
     * (<code>TRUE</code>) for the specified transcription job.</p>
     */
    inline TranscriptionJobSummary& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}


    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline double GetIdentifiedLanguageScore() const{ return m_identifiedLanguageScore; }

    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline bool IdentifiedLanguageScoreHasBeenSet() const { return m_identifiedLanguageScoreHasBeenSet; }

    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline void SetIdentifiedLanguageScore(double value) { m_identifiedLanguageScoreHasBeenSet = true; m_identifiedLanguageScore = value; }

    /**
     * <p>The confidence score associated with the language identified in your media
     * file.</p> <p>Confidence scores are values between 0 and 1; a larger value
     * indicates a higher probability that the identified language correctly matches
     * the language spoken in your media.</p>
     */
    inline TranscriptionJobSummary& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}


    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline const Aws::Vector<LanguageCodeItem>& GetLanguageCodes() const{ return m_languageCodes; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline void SetLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { m_languageCodesHasBeenSet = true; m_languageCodes = value; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline void SetLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { m_languageCodesHasBeenSet = true; m_languageCodes = std::move(value); }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline TranscriptionJobSummary& WithLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { SetLanguageCodes(value); return *this;}

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline TranscriptionJobSummary& WithLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { SetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline TranscriptionJobSummary& AddLanguageCodes(const LanguageCodeItem& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(value); return *this; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification, the
     * singular version of this parameter, <code>LanguageCode</code>, is present.</p>
     */
    inline TranscriptionJobSummary& AddLanguageCodes(LanguageCodeItem&& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    TranscriptionJobStatus m_transcriptionJobStatus;
    bool m_transcriptionJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    OutputLocationType m_outputLocationType;
    bool m_outputLocationTypeHasBeenSet = false;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet = false;

    ModelSettings m_modelSettings;
    bool m_modelSettingsHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    bool m_identifyMultipleLanguages;
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    double m_identifiedLanguageScore;
    bool m_identifiedLanguageScoreHasBeenSet = false;

    Aws::Vector<LanguageCodeItem> m_languageCodes;
    bool m_languageCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
