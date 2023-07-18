/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/Settings.h>
#include <aws/transcribe/model/ModelSettings.h>
#include <aws/transcribe/model/JobExecutionSettings.h>
#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/SubtitlesOutput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/transcribe/model/LanguageCodeItem.h>
#include <aws/transcribe/model/Tag.h>
#include <aws/transcribe/model/LanguageIdSettings.h>
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
   * <p>Provides detailed information about a transcription job.</p> <p>To view the
   * status of the specified transcription job, check the
   * <code>TranscriptionJobStatus</code> field. If the status is
   * <code>COMPLETED</code>, the job is finished and you can find the results at the
   * location specified in <code>TranscriptFileUri</code>. If the status is
   * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
   * transcription job failed.</p> <p>If you enabled content redaction, the redacted
   * transcript can be found at the location specified in
   * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJob">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscriptionJob
  {
  public:
    TranscriptionJob();
    TranscriptionJob(Aws::Utils::Json::JsonView jsonValue);
    TranscriptionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline TranscriptionJob& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transcription job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>Provides the status of the specified transcription job.</p> <p>If the status
     * is <code>COMPLETED</code>, the job is finished and you can find the results at
     * the location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>The language code used to create your transcription job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your transcription job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your transcription job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your transcription job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your transcription job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline TranscriptionJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your transcription job. For a list of
     * supported languages and their associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p> <p>Note that you must include one of
     * <code>LanguageCode</code>, <code>IdentifyLanguage</code>, or
     * <code>IdentifyMultipleLanguages</code> in your request. If you include more than
     * one of these parameters, your transcription job fails.</p>
     */
    inline TranscriptionJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in Hertz, of the audio track in your input media file.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in your input media file.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in your input media file.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in your input media file.</p>
     */
    inline TranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>The format of the input media file.</p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }

    /**
     * <p>The format of the input media file.</p>
     */
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }

    /**
     * <p>The format of the input media file.</p>
     */
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }

    /**
     * <p>The format of the input media file.</p>
     */
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }

    /**
     * <p>The format of the input media file.</p>
     */
    inline TranscriptionJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input media file.</p>
     */
    inline TranscriptionJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline TranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>Describes the Amazon S3 location of the media file you want to use in your
     * request.</p>
     */
    inline TranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline TranscriptionJob& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    /**
     * <p>Provides you with the Amazon S3 URI you can use to access your
     * transcript.</p>
     */
    inline TranscriptionJob& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job began processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.789000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time the specified transcription job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline TranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline TranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline TranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>TranscriptionJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the transcription job
     * request failed.</p> <p>The <code>FailureReason</code> field contains one of the
     * following values:</p> <ul> <li> <p> <code>Unsupported media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> isn't valid. Refer to
     * <b>MediaFormat</b> for a list of supported formats.</p> </li> <li> <p> <code>The
     * media format provided does not match the detected media format</code>.</p>
     * <p>The media format specified in <code>MediaFormat</code> doesn't match the
     * format of the input file. Check the media format of your media file and correct
     * the specified value.</p> </li> <li> <p> <code>Invalid sample rate for audio
     * file</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> isn't valid. The sample rate must be between
     * 8,000 and 48,000 Hertz.</p> </li> <li> <p> <code>The sample rate provided does
     * not match the detected sample rate</code>.</p> <p>The sample rate specified in
     * <code>MediaSampleRateHertz</code> doesn't match the sample rate detected in your
     * input media file. Check the sample rate of your media file and correct the
     * specified value.</p> </li> <li> <p> <code>Invalid file size: file size too
     * large</code>.</p> <p>The size of your media file is larger than what Amazon
     * Transcribe can process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> <li> <p> <code>Invalid number of channels: number of
     * channels too large</code>.</p> <p>Your audio contains more channels than Amazon
     * Transcribe is able to process. For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and quotas</a>.</p> </li> </ul>
     */
    inline TranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker labeling; allows you to
     * apply custom vocabularies and vocabulary filters.</p> <p>If you want to include
     * a custom vocabulary or a custom vocabulary filter (or both) with your request
     * but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, do
     * not use the <code>Settings</code> parameter; use instead the <code/> parameter
     * with the <code>LanguageModelName</code>, <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> sub-parameters.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker labeling; allows you to
     * apply custom vocabularies and vocabulary filters.</p> <p>If you want to include
     * a custom vocabulary or a custom vocabulary filter (or both) with your request
     * but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, do
     * not use the <code>Settings</code> parameter; use instead the <code/> parameter
     * with the <code>LanguageModelName</code>, <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> sub-parameters.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker labeling; allows you to
     * apply custom vocabularies and vocabulary filters.</p> <p>If you want to include
     * a custom vocabulary or a custom vocabulary filter (or both) with your request
     * but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, do
     * not use the <code>Settings</code> parameter; use instead the <code/> parameter
     * with the <code>LanguageModelName</code>, <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> sub-parameters.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker labeling; allows you to
     * apply custom vocabularies and vocabulary filters.</p> <p>If you want to include
     * a custom vocabulary or a custom vocabulary filter (or both) with your request
     * but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, do
     * not use the <code>Settings</code> parameter; use instead the <code/> parameter
     * with the <code>LanguageModelName</code>, <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> sub-parameters.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker labeling; allows you to
     * apply custom vocabularies and vocabulary filters.</p> <p>If you want to include
     * a custom vocabulary or a custom vocabulary filter (or both) with your request
     * but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, do
     * not use the <code>Settings</code> parameter; use instead the <code/> parameter
     * with the <code>LanguageModelName</code>, <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> sub-parameters.</p>
     */
    inline TranscriptionJob& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>Specify additional optional settings in your request, including channel
     * identification, alternative transcriptions, speaker labeling; allows you to
     * apply custom vocabularies and vocabulary filters.</p> <p>If you want to include
     * a custom vocabulary or a custom vocabulary filter (or both) with your request
     * but <b>do not</b> want to use automatic language identification, use
     * <code>Settings</code> with the <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> (or both) sub-parameter.</p> <p>If you're
     * using automatic language identification with your request and want to include a
     * custom language model, a custom vocabulary, or a custom vocabulary filter, do
     * not use the <code>Settings</code> parameter; use instead the <code/> parameter
     * with the <code>LanguageModelName</code>, <code>VocabularyName</code> or
     * <code>VocabularyFilterName</code> sub-parameters.</p>
     */
    inline TranscriptionJob& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The custom language model you want to include with your transcription job. If
     * you include <code>ModelSettings</code> in your request, you must include the
     * <code>LanguageModelName</code> sub-parameter.</p>
     */
    inline const ModelSettings& GetModelSettings() const{ return m_modelSettings; }

    /**
     * <p>The custom language model you want to include with your transcription job. If
     * you include <code>ModelSettings</code> in your request, you must include the
     * <code>LanguageModelName</code> sub-parameter.</p>
     */
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }

    /**
     * <p>The custom language model you want to include with your transcription job. If
     * you include <code>ModelSettings</code> in your request, you must include the
     * <code>LanguageModelName</code> sub-parameter.</p>
     */
    inline void SetModelSettings(const ModelSettings& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = value; }

    /**
     * <p>The custom language model you want to include with your transcription job. If
     * you include <code>ModelSettings</code> in your request, you must include the
     * <code>LanguageModelName</code> sub-parameter.</p>
     */
    inline void SetModelSettings(ModelSettings&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::move(value); }

    /**
     * <p>The custom language model you want to include with your transcription job. If
     * you include <code>ModelSettings</code> in your request, you must include the
     * <code>LanguageModelName</code> sub-parameter.</p>
     */
    inline TranscriptionJob& WithModelSettings(const ModelSettings& value) { SetModelSettings(value); return *this;}

    /**
     * <p>The custom language model you want to include with your transcription job. If
     * you include <code>ModelSettings</code> in your request, you must include the
     * <code>LanguageModelName</code> sub-parameter.</p>
     */
    inline TranscriptionJob& WithModelSettings(ModelSettings&& value) { SetModelSettings(std::move(value)); return *this;}


    /**
     * <p>Provides information about how your transcription job is being processed.
     * This parameter shows if your request is queued and what data access role is
     * being used.</p>
     */
    inline const JobExecutionSettings& GetJobExecutionSettings() const{ return m_jobExecutionSettings; }

    /**
     * <p>Provides information about how your transcription job is being processed.
     * This parameter shows if your request is queued and what data access role is
     * being used.</p>
     */
    inline bool JobExecutionSettingsHasBeenSet() const { return m_jobExecutionSettingsHasBeenSet; }

    /**
     * <p>Provides information about how your transcription job is being processed.
     * This parameter shows if your request is queued and what data access role is
     * being used.</p>
     */
    inline void SetJobExecutionSettings(const JobExecutionSettings& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = value; }

    /**
     * <p>Provides information about how your transcription job is being processed.
     * This parameter shows if your request is queued and what data access role is
     * being used.</p>
     */
    inline void SetJobExecutionSettings(JobExecutionSettings&& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = std::move(value); }

    /**
     * <p>Provides information about how your transcription job is being processed.
     * This parameter shows if your request is queued and what data access role is
     * being used.</p>
     */
    inline TranscriptionJob& WithJobExecutionSettings(const JobExecutionSettings& value) { SetJobExecutionSettings(value); return *this;}

    /**
     * <p>Provides information about how your transcription job is being processed.
     * This parameter shows if your request is queued and what data access role is
     * being used.</p>
     */
    inline TranscriptionJob& WithJobExecutionSettings(JobExecutionSettings&& value) { SetJobExecutionSettings(std::move(value)); return *this;}


    /**
     * <p>Redacts or flags specified personally identifiable information (PII) in your
     * transcript.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }

    /**
     * <p>Redacts or flags specified personally identifiable information (PII) in your
     * transcript.</p>
     */
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }

    /**
     * <p>Redacts or flags specified personally identifiable information (PII) in your
     * transcript.</p>
     */
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }

    /**
     * <p>Redacts or flags specified personally identifiable information (PII) in your
     * transcript.</p>
     */
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }

    /**
     * <p>Redacts or flags specified personally identifiable information (PII) in your
     * transcript.</p>
     */
    inline TranscriptionJob& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}

    /**
     * <p>Redacts or flags specified personally identifiable information (PII) in your
     * transcript.</p>
     */
    inline TranscriptionJob& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


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
    inline TranscriptionJob& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}


    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline TranscriptionJob& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline TranscriptionJob& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline TranscriptionJob& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }

    /**
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * If you're unsure what languages are present, do not include this parameter.</p>
     * <p>If you include <code>LanguageOptions</code> in your request, you must also
     * include <code>IdentifyLanguage</code>.</p> <p>For more information, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a>.</p> <p>To transcribe speech in Modern Standard Arabic
     * (<code>ar-SA</code>), your media file must be encoded at a sample rate of 16,000
     * Hz or higher.</p>
     */
    inline TranscriptionJob& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }


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
    inline TranscriptionJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}


    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline const Aws::Vector<LanguageCodeItem>& GetLanguageCodes() const{ return m_languageCodes; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { m_languageCodesHasBeenSet = true; m_languageCodes = value; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { m_languageCodesHasBeenSet = true; m_languageCodes = std::move(value); }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline TranscriptionJob& WithLanguageCodes(const Aws::Vector<LanguageCodeItem>& value) { SetLanguageCodes(value); return *this;}

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline TranscriptionJob& WithLanguageCodes(Aws::Vector<LanguageCodeItem>&& value) { SetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline TranscriptionJob& AddLanguageCodes(const LanguageCodeItem& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(value); return *this; }

    /**
     * <p>The language codes used to create your transcription job. This parameter is
     * used with multi-language identification. For single-language identification
     * requests, refer to the singular version of this parameter,
     * <code>LanguageCode</code>.</p> <p>For a list of supported languages and their
     * associated language codes, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline TranscriptionJob& AddLanguageCodes(LanguageCodeItem&& value) { m_languageCodesHasBeenSet = true; m_languageCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline TranscriptionJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline TranscriptionJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline TranscriptionJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Adds one or more custom tags, each in the form of a key:value pair, to a new
     * transcription job at the time you start this new job.</p> <p>To learn more about
     * using tags with Amazon Transcribe, refer to <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
     * resources</a>.</p>
     */
    inline TranscriptionJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Generate subtitles for your media file with your transcription request.</p>
     */
    inline const SubtitlesOutput& GetSubtitles() const{ return m_subtitles; }

    /**
     * <p>Generate subtitles for your media file with your transcription request.</p>
     */
    inline bool SubtitlesHasBeenSet() const { return m_subtitlesHasBeenSet; }

    /**
     * <p>Generate subtitles for your media file with your transcription request.</p>
     */
    inline void SetSubtitles(const SubtitlesOutput& value) { m_subtitlesHasBeenSet = true; m_subtitles = value; }

    /**
     * <p>Generate subtitles for your media file with your transcription request.</p>
     */
    inline void SetSubtitles(SubtitlesOutput&& value) { m_subtitlesHasBeenSet = true; m_subtitles = std::move(value); }

    /**
     * <p>Generate subtitles for your media file with your transcription request.</p>
     */
    inline TranscriptionJob& WithSubtitles(const SubtitlesOutput& value) { SetSubtitles(value); return *this;}

    /**
     * <p>Generate subtitles for your media file with your transcription request.</p>
     */
    inline TranscriptionJob& WithSubtitles(SubtitlesOutput&& value) { SetSubtitles(std::move(value)); return *this;}


    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const{ return m_languageIdSettings; }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline void SetLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = value; }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline void SetLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::move(value); }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline TranscriptionJob& WithLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { SetLanguageIdSettings(value); return *this;}

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline TranscriptionJob& WithLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { SetLanguageIdSettings(std::move(value)); return *this;}

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this; }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>If using automatic language identification (<code>IdentifyLanguage</code>) in
     * your request and you want to apply a custom language model, a custom vocabulary,
     * or a custom vocabulary filter, include <code>LanguageIdSettings</code> with the
     * relevant sub-parameters (<code>VocabularyName</code>,
     * <code>LanguageModelName</code>, and <code>VocabularyFilterName</code>).</p>
     * <p>You can specify two or more language codes that represent the languages you
     * think may be present in your media; including more than five is not recommended.
     * Each language code you include can have an associated custom language model,
     * custom vocabulary, and custom vocabulary filter. The languages you specify must
     * match the languages of the specified custom language models, custom
     * vocabularies, and custom vocabulary filters.</p> <p>To include language options
     * using <code>IdentifyLanguage</code> <b>without</b> including a custom language
     * model, a custom vocabulary, or a custom vocabulary filter, use
     * <code>LanguageOptions</code> instead of <code>LanguageIdSettings</code>.
     * Including language options can improve the accuracy of automatic language
     * identification.</p> <p>If you want to include a custom language model with your
     * request but <b>do not</b> want to use automatic language identification, use
     * instead the <code/> parameter with the <code>LanguageModelName</code>
     * sub-parameter.</p> <p>If you want to include a custom vocabulary or a custom
     * vocabulary filter (or both) with your request but <b>do not</b> want to use
     * automatic language identification, use instead the <code/> parameter with the
     * <code>VocabularyName</code> or <code>VocabularyFilterName</code> (or both)
     * sub-parameter.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet;

    TranscriptionJobStatus m_transcriptionJobStatus;
    bool m_transcriptionJobStatusHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet;

    MediaFormat m_mediaFormat;
    bool m_mediaFormatHasBeenSet;

    Media m_media;
    bool m_mediaHasBeenSet;

    Transcript m_transcript;
    bool m_transcriptHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    Settings m_settings;
    bool m_settingsHasBeenSet;

    ModelSettings m_modelSettings;
    bool m_modelSettingsHasBeenSet;

    JobExecutionSettings m_jobExecutionSettings;
    bool m_jobExecutionSettingsHasBeenSet;

    ContentRedaction m_contentRedaction;
    bool m_contentRedactionHasBeenSet;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet;

    bool m_identifyMultipleLanguages;
    bool m_identifyMultipleLanguagesHasBeenSet;

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet;

    double m_identifiedLanguageScore;
    bool m_identifiedLanguageScoreHasBeenSet;

    Aws::Vector<LanguageCodeItem> m_languageCodes;
    bool m_languageCodesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    SubtitlesOutput m_subtitles;
    bool m_subtitlesHasBeenSet;

    Aws::Map<LanguageCode, LanguageIdSettings> m_languageIdSettings;
    bool m_languageIdSettingsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
