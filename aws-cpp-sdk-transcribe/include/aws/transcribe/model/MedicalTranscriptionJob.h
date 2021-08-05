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
#include <aws/transcribe/model/MedicalTranscript.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/MedicalTranscriptionSetting.h>
#include <aws/transcribe/model/MedicalContentIdentificationType.h>
#include <aws/transcribe/model/Specialty.h>
#include <aws/transcribe/model/Type.h>
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
   * <p>The data structure that contains the information for a medical transcription
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscriptionJob">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API MedicalTranscriptionJob
  {
  public:
    MedicalTranscriptionJob();
    MedicalTranscriptionJob(Aws::Utils::Json::JsonView jsonValue);
    MedicalTranscriptionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const{ return m_medicalTranscriptionJobName; }

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobName(const Aws::String& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = value; }

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobName(Aws::String&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::move(value); }

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobName(const char* value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName.assign(value); }

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithMedicalTranscriptionJobName(const Aws::String& value) { SetMedicalTranscriptionJobName(value); return *this;}

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithMedicalTranscriptionJobName(Aws::String&& value) { SetMedicalTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name for a given medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithMedicalTranscriptionJobName(const char* value) { SetMedicalTranscriptionJobName(value); return *this;}


    /**
     * <p>The completion status of a medical transcription job.</p>
     */
    inline const TranscriptionJobStatus& GetTranscriptionJobStatus() const{ return m_transcriptionJobStatus; }

    /**
     * <p>The completion status of a medical transcription job.</p>
     */
    inline bool TranscriptionJobStatusHasBeenSet() const { return m_transcriptionJobStatusHasBeenSet; }

    /**
     * <p>The completion status of a medical transcription job.</p>
     */
    inline void SetTranscriptionJobStatus(const TranscriptionJobStatus& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = value; }

    /**
     * <p>The completion status of a medical transcription job.</p>
     */
    inline void SetTranscriptionJobStatus(TranscriptionJobStatus&& value) { m_transcriptionJobStatusHasBeenSet = true; m_transcriptionJobStatus = std::move(value); }

    /**
     * <p>The completion status of a medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithTranscriptionJobStatus(const TranscriptionJobStatus& value) { SetTranscriptionJobStatus(value); return *this;}

    /**
     * <p>The completion status of a medical transcription job.</p>
     */
    inline MedicalTranscriptionJob& WithTranscriptionJobStatus(TranscriptionJobStatus&& value) { SetTranscriptionJobStatus(std::move(value)); return *this;}


    /**
     * <p>The language code for the language spoken in the source audio file. US
     * English (en-US) is the only supported language for medical transcriptions. Any
     * other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the language spoken in the source audio file. US
     * English (en-US) is the only supported language for medical transcriptions. Any
     * other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code for the language spoken in the source audio file. US
     * English (en-US) is the only supported language for medical transcriptions. Any
     * other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code for the language spoken in the source audio file. US
     * English (en-US) is the only supported language for medical transcriptions. Any
     * other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code for the language spoken in the source audio file. US
     * English (en-US) is the only supported language for medical transcriptions. Any
     * other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline MedicalTranscriptionJob& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language spoken in the source audio file. US
     * English (en-US) is the only supported language for medical transcriptions. Any
     * other value you enter for language code results in a
     * <code>BadRequestException</code> error.</p>
     */
    inline MedicalTranscriptionJob& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in Hertz, of the source audio containing medical
     * information.</p> <p>If you don't specify the sample rate, Amazon Transcribe
     * Medical determines it for you. If you choose to specify the sample rate, it must
     * match the rate detected by Amazon Transcribe Medical. In most cases, you should
     * leave the <code>MedicalMediaSampleHertz</code> blank and let Amazon Transcribe
     * Medical determine the sample rate.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz, of the source audio containing medical
     * information.</p> <p>If you don't specify the sample rate, Amazon Transcribe
     * Medical determines it for you. If you choose to specify the sample rate, it must
     * match the rate detected by Amazon Transcribe Medical. In most cases, you should
     * leave the <code>MedicalMediaSampleHertz</code> blank and let Amazon Transcribe
     * Medical determine the sample rate.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz, of the source audio containing medical
     * information.</p> <p>If you don't specify the sample rate, Amazon Transcribe
     * Medical determines it for you. If you choose to specify the sample rate, it must
     * match the rate detected by Amazon Transcribe Medical. In most cases, you should
     * leave the <code>MedicalMediaSampleHertz</code> blank and let Amazon Transcribe
     * Medical determine the sample rate.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz, of the source audio containing medical
     * information.</p> <p>If you don't specify the sample rate, Amazon Transcribe
     * Medical determines it for you. If you choose to specify the sample rate, it must
     * match the rate detected by Amazon Transcribe Medical. In most cases, you should
     * leave the <code>MedicalMediaSampleHertz</code> blank and let Amazon Transcribe
     * Medical determine the sample rate.</p>
     */
    inline MedicalTranscriptionJob& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


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
    inline MedicalTranscriptionJob& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input media file.</p>
     */
    inline MedicalTranscriptionJob& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline MedicalTranscriptionJob& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline MedicalTranscriptionJob& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>An object that contains the <code>MedicalTranscript</code>. The
     * <code>MedicalTranscript</code> contains the <code>TranscriptFileUri</code>.</p>
     */
    inline const MedicalTranscript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>An object that contains the <code>MedicalTranscript</code>. The
     * <code>MedicalTranscript</code> contains the <code>TranscriptFileUri</code>.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>An object that contains the <code>MedicalTranscript</code>. The
     * <code>MedicalTranscript</code> contains the <code>TranscriptFileUri</code>.</p>
     */
    inline void SetTranscript(const MedicalTranscript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>An object that contains the <code>MedicalTranscript</code>. The
     * <code>MedicalTranscript</code> contains the <code>TranscriptFileUri</code>.</p>
     */
    inline void SetTranscript(MedicalTranscript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>An object that contains the <code>MedicalTranscript</code>. The
     * <code>MedicalTranscript</code> contains the <code>TranscriptFileUri</code>.</p>
     */
    inline MedicalTranscriptionJob& WithTranscript(const MedicalTranscript& value) { SetTranscript(value); return *this;}

    /**
     * <p>An object that contains the <code>MedicalTranscript</code>. The
     * <code>MedicalTranscript</code> contains the <code>TranscriptFileUri</code>.</p>
     */
    inline MedicalTranscriptionJob& WithTranscript(MedicalTranscript&& value) { SetTranscript(std::move(value)); return *this;}


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
    inline MedicalTranscriptionJob& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job started processing.</p>
     */
    inline MedicalTranscriptionJob& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline MedicalTranscriptionJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline MedicalTranscriptionJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline MedicalTranscriptionJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline MedicalTranscriptionJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>TranscriptionJobStatus</code> field is <code>FAILED</code>, this
     * field contains information about why the job failed.</p> <p>The
     * <code>FailureReason</code> field contains one of the following values:</p> <ul>
     * <li> <p> <code>Unsupported media format</code>- The media format specified in
     * the <code>MediaFormat</code> field of the request isn't valid. See the
     * description of the <code>MediaFormat</code> field for a list of valid
     * values.</p> </li> <li> <p> <code>The media format provided does not match the
     * detected media format</code>- The media format of the audio file doesn't match
     * the format specified in the <code>MediaFormat</code> field in the request. Check
     * the media format of your media file and make sure the two values match.</p>
     * </li> <li> <p> <code>Invalid sample rate for audio file</code>- The sample rate
     * specified in the <code>MediaSampleRateHertz</code> of the request isn't valid.
     * The sample rate must be between 8000 and 48000 Hertz.</p> </li> <li> <p>
     * <code>The sample rate provided does not match the detected sample rate</code>-
     * The sample rate in the audio file doesn't match the sample rate specified in the
     * <code>MediaSampleRateHertz</code> field in the request. Check the sample rate of
     * your media file and make sure that the two values match.</p> </li> <li> <p>
     * <code>Invalid file size: file size too large</code>- The size of your audio file
     * is larger than what Amazon Transcribe Medical can process. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/limits-guidelines.html#limits">Guidelines
     * and Quotas</a> in the <i>Amazon Transcribe Medical Guide</i> </p> </li> <li> <p>
     * <code>Invalid number of channels: number of channels too large</code>- Your
     * audio contains more channels than Amazon Transcribe Medical is configured to
     * process. To request additional channels, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/transcribe-medical.html">Amazon
     * Transcribe Medical Endpoints and Quotas</a> in the <i>Amazon Web Services
     * General Reference</i> </p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Object that contains object.</p>
     */
    inline const MedicalTranscriptionSetting& GetSettings() const{ return m_settings; }

    /**
     * <p>Object that contains object.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Object that contains object.</p>
     */
    inline void SetSettings(const MedicalTranscriptionSetting& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Object that contains object.</p>
     */
    inline void SetSettings(MedicalTranscriptionSetting&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Object that contains object.</p>
     */
    inline MedicalTranscriptionJob& WithSettings(const MedicalTranscriptionSetting& value) { SetSettings(value); return *this;}

    /**
     * <p>Object that contains object.</p>
     */
    inline MedicalTranscriptionJob& WithSettings(MedicalTranscriptionSetting&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>Shows the type of content that you've configured Amazon Transcribe Medical to
     * identify in a transcription job. If the value is <code>PHI</code>, you've
     * configured the job to identify personal health information (PHI) in the
     * transcription output.</p>
     */
    inline const MedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Shows the type of content that you've configured Amazon Transcribe Medical to
     * identify in a transcription job. If the value is <code>PHI</code>, you've
     * configured the job to identify personal health information (PHI) in the
     * transcription output.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Shows the type of content that you've configured Amazon Transcribe Medical to
     * identify in a transcription job. If the value is <code>PHI</code>, you've
     * configured the job to identify personal health information (PHI) in the
     * transcription output.</p>
     */
    inline void SetContentIdentificationType(const MedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Shows the type of content that you've configured Amazon Transcribe Medical to
     * identify in a transcription job. If the value is <code>PHI</code>, you've
     * configured the job to identify personal health information (PHI) in the
     * transcription output.</p>
     */
    inline void SetContentIdentificationType(MedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Shows the type of content that you've configured Amazon Transcribe Medical to
     * identify in a transcription job. If the value is <code>PHI</code>, you've
     * configured the job to identify personal health information (PHI) in the
     * transcription output.</p>
     */
    inline MedicalTranscriptionJob& WithContentIdentificationType(const MedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Shows the type of content that you've configured Amazon Transcribe Medical to
     * identify in a transcription job. If the value is <code>PHI</code>, you've
     * configured the job to identify personal health information (PHI) in the
     * transcription output.</p>
     */
    inline MedicalTranscriptionJob& WithContentIdentificationType(MedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>The medical specialty of any clinicians providing a dictation or having a
     * conversation. <code>PRIMARYCARE</code> is the only available setting for this
     * object. This specialty enables you to generate transcriptions for the following
     * medical fields:</p> <ul> <li> <p>Family Medicine</p> </li> </ul>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>The medical specialty of any clinicians providing a dictation or having a
     * conversation. <code>PRIMARYCARE</code> is the only available setting for this
     * object. This specialty enables you to generate transcriptions for the following
     * medical fields:</p> <ul> <li> <p>Family Medicine</p> </li> </ul>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>The medical specialty of any clinicians providing a dictation or having a
     * conversation. <code>PRIMARYCARE</code> is the only available setting for this
     * object. This specialty enables you to generate transcriptions for the following
     * medical fields:</p> <ul> <li> <p>Family Medicine</p> </li> </ul>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>The medical specialty of any clinicians providing a dictation or having a
     * conversation. <code>PRIMARYCARE</code> is the only available setting for this
     * object. This specialty enables you to generate transcriptions for the following
     * medical fields:</p> <ul> <li> <p>Family Medicine</p> </li> </ul>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>The medical specialty of any clinicians providing a dictation or having a
     * conversation. <code>PRIMARYCARE</code> is the only available setting for this
     * object. This specialty enables you to generate transcriptions for the following
     * medical fields:</p> <ul> <li> <p>Family Medicine</p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>The medical specialty of any clinicians providing a dictation or having a
     * conversation. <code>PRIMARYCARE</code> is the only available setting for this
     * object. This specialty enables you to generate transcriptions for the following
     * medical fields:</p> <ul> <li> <p>Family Medicine</p> </li> </ul>
     */
    inline MedicalTranscriptionJob& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>The type of speech in the transcription job. <code>CONVERSATION</code> is
     * generally used for patient-physician dialogues. <code>DICTATION</code> is the
     * setting for physicians speaking their notes after seeing a patient. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/what-is-transcribe-med.html">What
     * is Amazon Transcribe Medical?</a>.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of speech in the transcription job. <code>CONVERSATION</code> is
     * generally used for patient-physician dialogues. <code>DICTATION</code> is the
     * setting for physicians speaking their notes after seeing a patient. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/what-is-transcribe-med.html">What
     * is Amazon Transcribe Medical?</a>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of speech in the transcription job. <code>CONVERSATION</code> is
     * generally used for patient-physician dialogues. <code>DICTATION</code> is the
     * setting for physicians speaking their notes after seeing a patient. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/what-is-transcribe-med.html">What
     * is Amazon Transcribe Medical?</a>.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of speech in the transcription job. <code>CONVERSATION</code> is
     * generally used for patient-physician dialogues. <code>DICTATION</code> is the
     * setting for physicians speaking their notes after seeing a patient. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/what-is-transcribe-med.html">What
     * is Amazon Transcribe Medical?</a>.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of speech in the transcription job. <code>CONVERSATION</code> is
     * generally used for patient-physician dialogues. <code>DICTATION</code> is the
     * setting for physicians speaking their notes after seeing a patient. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/what-is-transcribe-med.html">What
     * is Amazon Transcribe Medical?</a>.</p>
     */
    inline MedicalTranscriptionJob& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of speech in the transcription job. <code>CONVERSATION</code> is
     * generally used for patient-physician dialogues. <code>DICTATION</code> is the
     * setting for physicians speaking their notes after seeing a patient. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/what-is-transcribe-med.html">What
     * is Amazon Transcribe Medical?</a>.</p>
     */
    inline MedicalTranscriptionJob& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet;

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

    MedicalTranscript m_transcript;
    bool m_transcriptHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    MedicalTranscriptionSetting m_settings;
    bool m_settingsHasBeenSet;

    MedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
