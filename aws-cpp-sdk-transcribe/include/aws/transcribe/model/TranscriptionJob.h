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
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/Settings.h>
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
     * <p>The sample rate, in Hertz, of the audio track in the input media file. </p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file. </p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file. </p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file. </p>
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
    inline TranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was completed.</p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    Settings m_settings;
    bool m_settingsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
