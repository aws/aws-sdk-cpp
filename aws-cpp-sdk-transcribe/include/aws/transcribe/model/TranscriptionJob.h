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
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Describes an asynchronous transcription job that was created with the
   * <code>StartTranscriptionJob</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptionJob">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscriptionJob
  {
  public:
    TranscriptionJob();
    TranscriptionJob(const Aws::Utils::Json::JsonValue& jsonValue);
    TranscriptionJob& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>A name to identify the transcription job.</p>
     */
    inline TranscriptionJob& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>The status of the transcription job.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

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
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline TranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline TranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>An object that describes the output of the transcription job.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

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
    inline TranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Timestamp of the date and time that the job was created.</p>
     */
    inline TranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline TranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>Timestamp of the date and time that the job completed.</p>
     */
    inline TranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline TranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline TranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p>
     */
    inline TranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Optional settings for the transcription job.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>Optional settings for the transcription job.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Optional settings for the transcription job.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Optional settings for the transcription job.</p>
     */
    inline TranscriptionJob& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>Optional settings for the transcription job.</p>
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
