/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/Transcript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/CallAnalyticsJobSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/ChannelDefinition.h>
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
   * <p>Describes an asynchronous analytics job that was created with the
   * <code>StartAnalyticsJob</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJob">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API CallAnalyticsJob
  {
  public:
    CallAnalyticsJob();
    CallAnalyticsJob(Aws::Utils::Json::JsonView jsonValue);
    CallAnalyticsJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the call analytics job.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const{ return m_callAnalyticsJobName; }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobName(const Aws::String& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = value; }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobName(Aws::String&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::move(value); }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobName(const char* value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName.assign(value); }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobName(const Aws::String& value) { SetCallAnalyticsJobName(value); return *this;}

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobName(Aws::String&& value) { SetCallAnalyticsJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobName(const char* value) { SetCallAnalyticsJobName(value); return *this;}


    /**
     * <p>The status of the analytics job.</p>
     */
    inline const CallAnalyticsJobStatus& GetCallAnalyticsJobStatus() const{ return m_callAnalyticsJobStatus; }

    /**
     * <p>The status of the analytics job.</p>
     */
    inline bool CallAnalyticsJobStatusHasBeenSet() const { return m_callAnalyticsJobStatusHasBeenSet; }

    /**
     * <p>The status of the analytics job.</p>
     */
    inline void SetCallAnalyticsJobStatus(const CallAnalyticsJobStatus& value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = value; }

    /**
     * <p>The status of the analytics job.</p>
     */
    inline void SetCallAnalyticsJobStatus(CallAnalyticsJobStatus&& value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = std::move(value); }

    /**
     * <p>The status of the analytics job.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobStatus(const CallAnalyticsJobStatus& value) { SetCallAnalyticsJobStatus(value); return *this;}

    /**
     * <p>The status of the analytics job.</p>
     */
    inline CallAnalyticsJob& WithCallAnalyticsJobStatus(CallAnalyticsJobStatus&& value) { SetCallAnalyticsJobStatus(std::move(value)); return *this;}


    /**
     * <p>If you know the language spoken between the customer and the agent, specify a
     * language code for this field.</p> <p>If you don't know the language, you can
     * leave this field blank, and Amazon Transcribe will use machine learning to
     * automatically identify the language. To improve the accuracy of language
     * identification, you can provide an array containing the possible language codes
     * for the language spoken in your audio.</p> <p>The following list shows the
     * supported languages and corresponding language codes for call analytics
     * jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin Chinese,
     * Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li> <li>
     * <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p> </li>
     * <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English (en-AB)</p>
     * </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English (en-WL)</p>
     * </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish (es-US)</p> </li>
     * <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French (fr-CA)</p> </li> <li>
     * <p>German (de-DE)</p> </li> <li> <p>Swiss German (de-CH)</p> </li> <li>
     * <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian (it-IT)</p> </li> <li>
     * <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p> </li> <li>
     * <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese (pt-BR)</p> </li>
     * </ul>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>If you know the language spoken between the customer and the agent, specify a
     * language code for this field.</p> <p>If you don't know the language, you can
     * leave this field blank, and Amazon Transcribe will use machine learning to
     * automatically identify the language. To improve the accuracy of language
     * identification, you can provide an array containing the possible language codes
     * for the language spoken in your audio.</p> <p>The following list shows the
     * supported languages and corresponding language codes for call analytics
     * jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin Chinese,
     * Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li> <li>
     * <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p> </li>
     * <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English (en-AB)</p>
     * </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English (en-WL)</p>
     * </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish (es-US)</p> </li>
     * <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French (fr-CA)</p> </li> <li>
     * <p>German (de-DE)</p> </li> <li> <p>Swiss German (de-CH)</p> </li> <li>
     * <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian (it-IT)</p> </li> <li>
     * <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p> </li> <li>
     * <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese (pt-BR)</p> </li>
     * </ul>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>If you know the language spoken between the customer and the agent, specify a
     * language code for this field.</p> <p>If you don't know the language, you can
     * leave this field blank, and Amazon Transcribe will use machine learning to
     * automatically identify the language. To improve the accuracy of language
     * identification, you can provide an array containing the possible language codes
     * for the language spoken in your audio.</p> <p>The following list shows the
     * supported languages and corresponding language codes for call analytics
     * jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin Chinese,
     * Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li> <li>
     * <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p> </li>
     * <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English (en-AB)</p>
     * </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English (en-WL)</p>
     * </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish (es-US)</p> </li>
     * <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French (fr-CA)</p> </li> <li>
     * <p>German (de-DE)</p> </li> <li> <p>Swiss German (de-CH)</p> </li> <li>
     * <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian (it-IT)</p> </li> <li>
     * <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p> </li> <li>
     * <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese (pt-BR)</p> </li>
     * </ul>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>If you know the language spoken between the customer and the agent, specify a
     * language code for this field.</p> <p>If you don't know the language, you can
     * leave this field blank, and Amazon Transcribe will use machine learning to
     * automatically identify the language. To improve the accuracy of language
     * identification, you can provide an array containing the possible language codes
     * for the language spoken in your audio.</p> <p>The following list shows the
     * supported languages and corresponding language codes for call analytics
     * jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin Chinese,
     * Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li> <li>
     * <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p> </li>
     * <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English (en-AB)</p>
     * </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English (en-WL)</p>
     * </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish (es-US)</p> </li>
     * <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French (fr-CA)</p> </li> <li>
     * <p>German (de-DE)</p> </li> <li> <p>Swiss German (de-CH)</p> </li> <li>
     * <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian (it-IT)</p> </li> <li>
     * <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p> </li> <li>
     * <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese (pt-BR)</p> </li>
     * </ul>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>If you know the language spoken between the customer and the agent, specify a
     * language code for this field.</p> <p>If you don't know the language, you can
     * leave this field blank, and Amazon Transcribe will use machine learning to
     * automatically identify the language. To improve the accuracy of language
     * identification, you can provide an array containing the possible language codes
     * for the language spoken in your audio.</p> <p>The following list shows the
     * supported languages and corresponding language codes for call analytics
     * jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin Chinese,
     * Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li> <li>
     * <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p> </li>
     * <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English (en-AB)</p>
     * </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English (en-WL)</p>
     * </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish (es-US)</p> </li>
     * <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French (fr-CA)</p> </li> <li>
     * <p>German (de-DE)</p> </li> <li> <p>Swiss German (de-CH)</p> </li> <li>
     * <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian (it-IT)</p> </li> <li>
     * <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p> </li> <li>
     * <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese (pt-BR)</p> </li>
     * </ul>
     */
    inline CallAnalyticsJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>If you know the language spoken between the customer and the agent, specify a
     * language code for this field.</p> <p>If you don't know the language, you can
     * leave this field blank, and Amazon Transcribe will use machine learning to
     * automatically identify the language. To improve the accuracy of language
     * identification, you can provide an array containing the possible language codes
     * for the language spoken in your audio.</p> <p>The following list shows the
     * supported languages and corresponding language codes for call analytics
     * jobs:</p> <ul> <li> <p>Gulf Arabic (ar-AE)</p> </li> <li> <p>Mandarin Chinese,
     * Mainland (zh-CN)</p> </li> <li> <p>Australian English (en-AU)</p> </li> <li>
     * <p>British English (en-GB)</p> </li> <li> <p>Indian English (en-IN)</p> </li>
     * <li> <p>Irish English (en-IE)</p> </li> <li> <p>Scottish English (en-AB)</p>
     * </li> <li> <p>US English (en-US)</p> </li> <li> <p>Welsh English (en-WL)</p>
     * </li> <li> <p>Spanish (es-ES)</p> </li> <li> <p>US Spanish (es-US)</p> </li>
     * <li> <p>French (fr-FR)</p> </li> <li> <p>Canadian French (fr-CA)</p> </li> <li>
     * <p>German (de-DE)</p> </li> <li> <p>Swiss German (de-CH)</p> </li> <li>
     * <p>Indian Hindi (hi-IN)</p> </li> <li> <p>Italian (it-IT)</p> </li> <li>
     * <p>Japanese (ja-JP)</p> </li> <li> <p>Korean (ko-KR)</p> </li> <li>
     * <p>Portuguese (pt-PT)</p> </li> <li> <p>Brazilian Portuguese (pt-BR)</p> </li>
     * </ul>
     */
    inline CallAnalyticsJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in Hertz, of the audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz, of the audio.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz, of the audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz, of the audio.</p>
     */
    inline CallAnalyticsJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>The format of the input audio file. Note: for call analytics jobs, only the
     * following media formats are supported: MP3, MP4, WAV, FLAC, OGG, and WebM. </p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }

    /**
     * <p>The format of the input audio file. Note: for call analytics jobs, only the
     * following media formats are supported: MP3, MP4, WAV, FLAC, OGG, and WebM. </p>
     */
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }

    /**
     * <p>The format of the input audio file. Note: for call analytics jobs, only the
     * following media formats are supported: MP3, MP4, WAV, FLAC, OGG, and WebM. </p>
     */
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }

    /**
     * <p>The format of the input audio file. Note: for call analytics jobs, only the
     * following media formats are supported: MP3, MP4, WAV, FLAC, OGG, and WebM. </p>
     */
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }

    /**
     * <p>The format of the input audio file. Note: for call analytics jobs, only the
     * following media formats are supported: MP3, MP4, WAV, FLAC, OGG, and WebM. </p>
     */
    inline CallAnalyticsJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input audio file. Note: for call analytics jobs, only the
     * following media formats are supported: MP3, MP4, WAV, FLAC, OGG, and WebM. </p>
     */
    inline CallAnalyticsJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline CallAnalyticsJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline CallAnalyticsJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    
    inline CallAnalyticsJob& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    
    inline CallAnalyticsJob& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the analytics job started processing.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that shows when the analytics job started processing.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the analytics job started processing.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that shows when the analytics job started processing.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the analytics job started processing.</p>
     */
    inline CallAnalyticsJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the analytics job started processing.</p>
     */
    inline CallAnalyticsJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the analytics job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the analytics job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the analytics job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the analytics job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the analytics job was created.</p>
     */
    inline CallAnalyticsJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the analytics job was created.</p>
     */
    inline CallAnalyticsJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the analytics job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>A timestamp that shows when the analytics job was completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the analytics job was completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>A timestamp that shows when the analytics job was completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the analytics job was completed.</p>
     */
    inline CallAnalyticsJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the analytics job was completed.</p>
     */
    inline CallAnalyticsJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline CallAnalyticsJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline CallAnalyticsJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>AnalyticsJobStatus</code> is <code>FAILED</code>, this field
     * contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field can contain one of the following values:</p>
     * <ul> <li> <p> <code>Unsupported media format</code>: The media format specified
     * in the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>: The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>: The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>:
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>: The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <i>Guidelines and Quotas</i> in the Amazon Transcribe Medical Guide</p>
     * </li> <li> <p> <code>Invalid number of channels: number of channels too
     * large</code>: Your audio contains more channels than Amazon Transcribe Medical
     * is configured to process. To request additional channels, see Amazon Transcribe
     * Medical Endpoints and Quotas in the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/Welcome.html">Amazon Web
     * Services General Reference</a>.</p> </li> </ul>
     */
    inline CallAnalyticsJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline CallAnalyticsJob& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline CallAnalyticsJob& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that you use to get access to the analytics
     * job.</p>
     */
    inline CallAnalyticsJob& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. This value appears only when you don't
     * provide a single language code. Larger values indicate that Amazon Transcribe
     * has higher confidence in the language that it identified</p>
     */
    inline double GetIdentifiedLanguageScore() const{ return m_identifiedLanguageScore; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. This value appears only when you don't
     * provide a single language code. Larger values indicate that Amazon Transcribe
     * has higher confidence in the language that it identified</p>
     */
    inline bool IdentifiedLanguageScoreHasBeenSet() const { return m_identifiedLanguageScoreHasBeenSet; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. This value appears only when you don't
     * provide a single language code. Larger values indicate that Amazon Transcribe
     * has higher confidence in the language that it identified</p>
     */
    inline void SetIdentifiedLanguageScore(double value) { m_identifiedLanguageScoreHasBeenSet = true; m_identifiedLanguageScore = value; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigned to the language
     * that it identified in the source audio. This value appears only when you don't
     * provide a single language code. Larger values indicate that Amazon Transcribe
     * has higher confidence in the language that it identified</p>
     */
    inline CallAnalyticsJob& WithIdentifiedLanguageScore(double value) { SetIdentifiedLanguageScore(value); return *this;}


    /**
     * <p>Provides information about the settings used to run a transcription job.</p>
     */
    inline const CallAnalyticsJobSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Provides information about the settings used to run a transcription job.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Provides information about the settings used to run a transcription job.</p>
     */
    inline void SetSettings(const CallAnalyticsJobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Provides information about the settings used to run a transcription job.</p>
     */
    inline void SetSettings(CallAnalyticsJobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Provides information about the settings used to run a transcription job.</p>
     */
    inline CallAnalyticsJob& WithSettings(const CallAnalyticsJobSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Provides information about the settings used to run a transcription job.</p>
     */
    inline CallAnalyticsJob& WithSettings(CallAnalyticsJobSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline const Aws::Vector<ChannelDefinition>& GetChannelDefinitions() const{ return m_channelDefinitions; }

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline void SetChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = value; }

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline void SetChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions = std::move(value); }

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline CallAnalyticsJob& WithChannelDefinitions(const Aws::Vector<ChannelDefinition>& value) { SetChannelDefinitions(value); return *this;}

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline CallAnalyticsJob& WithChannelDefinitions(Aws::Vector<ChannelDefinition>&& value) { SetChannelDefinitions(std::move(value)); return *this;}

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline CallAnalyticsJob& AddChannelDefinitions(const ChannelDefinition& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(value); return *this; }

    /**
     * <p>Shows numeric values to indicate the channel assigned to the agent's audio
     * and the channel assigned to the customer's audio. </p>
     */
    inline CallAnalyticsJob& AddChannelDefinitions(ChannelDefinition&& value) { m_channelDefinitionsHasBeenSet = true; m_channelDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet;

    CallAnalyticsJobStatus m_callAnalyticsJobStatus;
    bool m_callAnalyticsJobStatusHasBeenSet;

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

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;

    double m_identifiedLanguageScore;
    bool m_identifiedLanguageScoreHasBeenSet;

    CallAnalyticsJobSettings m_settings;
    bool m_settingsHasBeenSet;

    Aws::Vector<ChannelDefinition> m_channelDefinitions;
    bool m_channelDefinitionsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
