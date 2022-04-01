﻿/**
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
   * <p>Describes an asynchronous transcription job that was created with the
   * <code>StartTranscriptionJob</code> operation. </p><p><h3>See Also:</h3>   <a
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
    inline TranscriptionJob& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>The status of the transcription job.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>The status of the transcription job.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>The status of the transcription job.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>The status of the transcription job.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>The status of the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>The status of the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the input speech.</p>
     */
    inline TranscriptionJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in Hertz (Hz), of the audio track in the input media
     * file.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz (Hz), of the audio track in the input media
     * file.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz (Hz), of the audio track in the input media
     * file.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz (Hz), of the audio track in the input media
     * file.</p>
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
     * <p>An object that describes the input media for the transcription job.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>An object that describes the input media for the transcription job.</p>
     */
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    /**
     * <p>An object that describes the input media for the transcription job.</p>
     */
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    /**
     * <p>An object that describes the input media for the transcription job.</p>
     */
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    /**
     * <p>An object that describes the input media for the transcription job.</p>
     */
    inline TranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>An object that describes the input media for the transcription job.</p>
     */
    inline TranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline TranscriptionJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline TranscriptionJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline TranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline TranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline TranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline TranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline TranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code> - The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code> - The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure that the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code> - The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8,000 and 48,000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code> -
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code> - The size of your audio
     * file is larger than Amazon Transcribe can process. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Limits</a>
     * in the <i>Amazon Transcribe Developer Guide</i>.</p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code> - Your
     * audio contains more channels than Amazon Transcribe is configured to process. To
     * request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits-amazon-transcribe">Amazon
     * Transcribe Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     * </li> </ul>
     */
    inline TranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Optional settings for the transcription job. Use these settings to turn on
     * speaker recognition, to set the maximum number of speakers that should be
     * identified and to specify a custom vocabulary to use when processing the
     * transcription job.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>Optional settings for the transcription job. Use these settings to turn on
     * speaker recognition, to set the maximum number of speakers that should be
     * identified and to specify a custom vocabulary to use when processing the
     * transcription job.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Optional settings for the transcription job. Use these settings to turn on
     * speaker recognition, to set the maximum number of speakers that should be
     * identified and to specify a custom vocabulary to use when processing the
     * transcription job.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Optional settings for the transcription job. Use these settings to turn on
     * speaker recognition, to set the maximum number of speakers that should be
     * identified and to specify a custom vocabulary to use when processing the
     * transcription job.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Optional settings for the transcription job. Use these settings to turn on
     * speaker recognition, to set the maximum number of speakers that should be
     * identified and to specify a custom vocabulary to use when processing the
     * transcription job.</p>
     */
    inline TranscriptionJob& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>Optional settings for the transcription job. Use these settings to turn on
     * speaker recognition, to set the maximum number of speakers that should be
     * identified and to specify a custom vocabulary to use when processing the
     * transcription job.</p>
     */
    inline TranscriptionJob& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>An object containing the details of your custom language model.</p>
     */
    inline const ModelSettings& GetModelSettings() const{ return m_modelSettings; }

    /**
     * <p>An object containing the details of your custom language model.</p>
     */
    inline bool ModelSettingsHasBeenSet() const { return m_modelSettingsHasBeenSet; }

    /**
     * <p>An object containing the details of your custom language model.</p>
     */
    inline void SetModelSettings(const ModelSettings& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = value; }

    /**
     * <p>An object containing the details of your custom language model.</p>
     */
    inline void SetModelSettings(ModelSettings&& value) { m_modelSettingsHasBeenSet = true; m_modelSettings = std::move(value); }

    /**
     * <p>An object containing the details of your custom language model.</p>
     */
    inline TranscriptionJob& WithModelSettings(const ModelSettings& value) { SetModelSettings(value); return *this;}

    /**
     * <p>An object containing the details of your custom language model.</p>
     */
    inline TranscriptionJob& WithModelSettings(ModelSettings&& value) { SetModelSettings(std::move(value)); return *this;}


    /**
     * <p>Provides information about how a transcription job is executed.</p>
     */
    inline const JobExecutionSettings& GetJobExecutionSettings() const{ return m_jobExecutionSettings; }

    /**
     * <p>Provides information about how a transcription job is executed.</p>
     */
    inline bool JobExecutionSettingsHasBeenSet() const { return m_jobExecutionSettingsHasBeenSet; }

    /**
     * <p>Provides information about how a transcription job is executed.</p>
     */
    inline void SetJobExecutionSettings(const JobExecutionSettings& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = value; }

    /**
     * <p>Provides information about how a transcription job is executed.</p>
     */
    inline void SetJobExecutionSettings(JobExecutionSettings&& value) { m_jobExecutionSettingsHasBeenSet = true; m_jobExecutionSettings = std::move(value); }

    /**
     * <p>Provides information about how a transcription job is executed.</p>
     */
    inline TranscriptionJob& WithJobExecutionSettings(const JobExecutionSettings& value) { SetJobExecutionSettings(value); return *this;}

    /**
     * <p>Provides information about how a transcription job is executed.</p>
     */
    inline TranscriptionJob& WithJobExecutionSettings(JobExecutionSettings&& value) { SetJobExecutionSettings(std::move(value)); return *this;}


    /**
     * <p>An object that describes content redaction settings for the transcription
     * job.</p>
     */
    inline const ContentRedaction& GetContentRedaction() const{ return m_contentRedaction; }

    /**
     * <p>An object that describes content redaction settings for the transcription
     * job.</p>
     */
    inline bool ContentRedactionHasBeenSet() const { return m_contentRedactionHasBeenSet; }

    /**
     * <p>An object that describes content redaction settings for the transcription
     * job.</p>
     */
    inline void SetContentRedaction(const ContentRedaction& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = value; }

    /**
     * <p>An object that describes content redaction settings for the transcription
     * job.</p>
     */
    inline void SetContentRedaction(ContentRedaction&& value) { m_contentRedactionHasBeenSet = true; m_contentRedaction = std::move(value); }

    /**
     * <p>An object that describes content redaction settings for the transcription
     * job.</p>
     */
    inline TranscriptionJob& WithContentRedaction(const ContentRedaction& value) { SetContentRedaction(value); return *this;}

    /**
     * <p>An object that describes content redaction settings for the transcription
     * job.</p>
     */
    inline TranscriptionJob& WithContentRedaction(ContentRedaction&& value) { SetContentRedaction(std::move(value)); return *this;}


    /**
     * <p>A value that shows if automatic language identification was enabled for a
     * transcription job.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>A value that shows if automatic language identification was enabled for a
     * transcription job.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>A value that shows if automatic language identification was enabled for a
     * transcription job.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>A value that shows if automatic language identification was enabled for a
     * transcription job.</p>
     */
    inline TranscriptionJob& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline const Aws::Vector<LanguageCode>& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline void SetLanguageOptions(const Aws::Vector<LanguageCode>& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline void SetLanguageOptions(Aws::Vector<LanguageCode>&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline TranscriptionJob& WithLanguageOptions(const Aws::Vector<LanguageCode>& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline TranscriptionJob& WithLanguageOptions(Aws::Vector<LanguageCode>&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline TranscriptionJob& AddLanguageOptions(const LanguageCode& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(value); return *this; }

    /**
     * <p>An object that shows the optional array of languages inputted for
     * transcription jobs with automatic language identification enabled.</p>
     */
    inline TranscriptionJob& AddLanguageOptions(LanguageCode&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. Larger values indicate that Amazon
     * Transcribe has higher confidence in the language it identified.</p>
     */
    inline double GetIdentifiedLanguageScore() const{ return m_identifiedLanguageScore; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. Larger values indicate that Amazon
     * Transcribe has higher confidence in the language it identified.</p>
     */
    inline bool IdentifiedLanguageScoreHasBeenSet() const { return m_identifiedLanguageScoreHasBeenSet; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. Larger values indicate that Amazon
     * Transcribe has higher confidence in the language it identified.</p>
     */
    inline void SetIdentifiedLanguageScore(double value) { m_identifiedLanguageScoreHasBeenSet = true; m_identifiedLanguageScore = value; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. Larger values indicate that Amazon
     * Transcribe has higher confidence in the language it identified.</p>
     */
    inline TranscriptionJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}


    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline TranscriptionJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline TranscriptionJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline TranscriptionJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A key:value pair assigned to a given transcription job.</p>
     */
    inline TranscriptionJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Generate subtitles for your batch transcription job.</p>
     */
    inline const SubtitlesOutput& GetSubtitles() const{ return m_subtitles; }

    /**
     * <p>Generate subtitles for your batch transcription job.</p>
     */
    inline bool SubtitlesHasBeenSet() const { return m_subtitlesHasBeenSet; }

    /**
     * <p>Generate subtitles for your batch transcription job.</p>
     */
    inline void SetSubtitles(const SubtitlesOutput& value) { m_subtitlesHasBeenSet = true; m_subtitles = value; }

    /**
     * <p>Generate subtitles for your batch transcription job.</p>
     */
    inline void SetSubtitles(SubtitlesOutput&& value) { m_subtitlesHasBeenSet = true; m_subtitles = std::move(value); }

    /**
     * <p>Generate subtitles for your batch transcription job.</p>
     */
    inline TranscriptionJob& WithSubtitles(const SubtitlesOutput& value) { SetSubtitles(value); return *this;}

    /**
     * <p>Generate subtitles for your batch transcription job.</p>
     */
    inline TranscriptionJob& WithSubtitles(SubtitlesOutput&& value) { SetSubtitles(std::move(value)); return *this;}


    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline const Aws::Map<LanguageCode, LanguageIdSettings>& GetLanguageIdSettings() const{ return m_languageIdSettings; }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline bool LanguageIdSettingsHasBeenSet() const { return m_languageIdSettingsHasBeenSet; }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline void SetLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = value; }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline void SetLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings = std::move(value); }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline TranscriptionJob& WithLanguageIdSettings(const Aws::Map<LanguageCode, LanguageIdSettings>& value) { SetLanguageIdSettings(value); return *this;}

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline TranscriptionJob& WithLanguageIdSettings(Aws::Map<LanguageCode, LanguageIdSettings>&& value) { SetLanguageIdSettings(std::move(value)); return *this;}

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, value); return *this; }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(LanguageCode&& key, const LanguageIdSettings& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
     */
    inline TranscriptionJob& AddLanguageIdSettings(const LanguageCode& key, LanguageIdSettings&& value) { m_languageIdSettingsHasBeenSet = true; m_languageIdSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Language-specific settings that can be specified when language identification
     * is enabled for your transcription job. These settings include
     * <code>VocabularyName</code>, <code>VocabularyFilterName</code>, and
     * <code>LanguageModelName</code>.</p>
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

    Aws::Vector<LanguageCode> m_languageOptions;
    bool m_languageOptionsHasBeenSet;

    double m_identifiedLanguageScore;
    bool m_identifiedLanguageScoreHasBeenSet;

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
