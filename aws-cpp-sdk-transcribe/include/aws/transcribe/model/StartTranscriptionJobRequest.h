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
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/Settings.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API StartTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    StartTranscriptionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTranscriptionJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline const Aws::String& GetTranscriptionJobName() const{ return m_transcriptionJobName; }

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline bool TranscriptionJobNameHasBeenSet() const { return m_transcriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline void SetTranscriptionJobName(const Aws::String& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = value; }

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline void SetTranscriptionJobName(Aws::String&& value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName = std::move(value); }

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline void SetTranscriptionJobName(const char* value) { m_transcriptionJobNameHasBeenSet = true; m_transcriptionJobName.assign(value); }

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline StartTranscriptionJobRequest& WithTranscriptionJobName(const Aws::String& value) { SetTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline StartTranscriptionJobRequest& WithTranscriptionJobName(Aws::String&& value) { SetTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job. Note that you can't use the strings "." or ".." by
     * themselves as the job name. The name must also be unique within an AWS
     * account.</p>
     */
    inline StartTranscriptionJobRequest& WithTranscriptionJobName(const char* value) { SetTranscriptionJobName(value); return *this;}


    /**
     * <p>The language code for the language used in the input media file.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the language used in the input media file.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code for the language used in the input media file.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code for the language used in the input media file.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code for the language used in the input media file.</p>
     */
    inline StartTranscriptionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language used in the input media file.</p>
     */
    inline StartTranscriptionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


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
    inline StartTranscriptionJobRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


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
    inline StartTranscriptionJobRequest& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The format of the input media file.</p>
     */
    inline StartTranscriptionJobRequest& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline const Media& GetMedia() const{ return m_media; }

    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

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
    inline StartTranscriptionJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}

    /**
     * <p>An object that describes the input media for a transcription job.</p>
     */
    inline StartTranscriptionJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline const Aws::String& GetOutputBucketName() const{ return m_outputBucketName; }

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline void SetOutputBucketName(const Aws::String& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = value; }

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline void SetOutputBucketName(Aws::String&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::move(value); }

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline void SetOutputBucketName(const char* value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName.assign(value); }

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline StartTranscriptionJobRequest& WithOutputBucketName(const Aws::String& value) { SetOutputBucketName(value); return *this;}

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline StartTranscriptionJobRequest& WithOutputBucketName(Aws::String&& value) { SetOutputBucketName(std::move(value)); return *this;}

    /**
     * <p>The location where the transcription is stored.</p> <p>If you set the
     * <code>OutputBucketName</code>, Amazon Transcribe puts the transcription in the
     * specified S3 bucket. When you call the <a>GetTranscriptionJob</a> operation, the
     * operation returns this location in the <code>TranscriptFileUri</code> field. The
     * S3 bucket must have permissions that allow Amazon Transcribe to put files in the
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/access-control-managing-permissions.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>Amazon Transcribe uses the default
     * Amazon S3 key for server-side encryption of transcripts that are placed in your
     * S3 bucket. You can't specify your own encryption key.</p> <p>If you don't set
     * the <code>OutputBucketName</code>, Amazon Transcribe generates a pre-signed URL,
     * a shareable URL that provides secure access to your transcription, and returns
     * it in the <code>TranscriptFileUri</code> field. Use this URL to download the
     * transcription.</p>
     */
    inline StartTranscriptionJobRequest& WithOutputBucketName(const char* value) { SetOutputBucketName(value); return *this;}


    /**
     * <p>A <code>Settings</code> object that provides optional settings for a
     * transcription job.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a
     * transcription job.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a
     * transcription job.</p>
     */
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a
     * transcription job.</p>
     */
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a
     * transcription job.</p>
     */
    inline StartTranscriptionJobRequest& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p>A <code>Settings</code> object that provides optional settings for a
     * transcription job.</p>
     */
    inline StartTranscriptionJobRequest& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Aws::String m_transcriptionJobName;
    bool m_transcriptionJobNameHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet;

    MediaFormat m_mediaFormat;
    bool m_mediaFormatHasBeenSet;

    Media m_media;
    bool m_mediaHasBeenSet;

    Aws::String m_outputBucketName;
    bool m_outputBucketNameHasBeenSet;

    Settings m_settings;
    bool m_settingsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
