/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/Media.h>
#include <aws/transcribe/model/MedicalTranscriptionSetting.h>
#include <aws/transcribe/model/Specialty.h>
#include <aws/transcribe/model/Type.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobRequest : public TranscribeServiceRequest
  {
  public:
    StartMedicalTranscriptionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalTranscriptionJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline const Aws::String& GetMedicalTranscriptionJobName() const{ return m_medicalTranscriptionJobName; }

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline bool MedicalTranscriptionJobNameHasBeenSet() const { return m_medicalTranscriptionJobNameHasBeenSet; }

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalTranscriptionJobName(const Aws::String& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = value; }

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalTranscriptionJobName(Aws::String&& value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName = std::move(value); }

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline void SetMedicalTranscriptionJobName(const char* value) { m_medicalTranscriptionJobNameHasBeenSet = true; m_medicalTranscriptionJobName.assign(value); }

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(const Aws::String& value) { SetMedicalTranscriptionJobName(value); return *this;}

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(Aws::String&& value) { SetMedicalTranscriptionJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the medical transcription job. You can't use the strings
     * "<code>.</code>" or "<code>..</code>" by themselves as the job name. The name
     * must also be unique within an AWS account. If you try to create a medical
     * transcription job with the same name as a previous medical transcription job,
     * you get a <code>ConflictException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMedicalTranscriptionJobName(const char* value) { SetMedicalTranscriptionJobName(value); return *this;}


    /**
     * <p>The language code for the language spoken in the input media file. US English
     * (en-US) is the valid value for medical transcription jobs. Any other value you
     * enter for language code results in a <code>BadRequestException</code> error.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the language spoken in the input media file. US English
     * (en-US) is the valid value for medical transcription jobs. Any other value you
     * enter for language code results in a <code>BadRequestException</code> error.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code for the language spoken in the input media file. US English
     * (en-US) is the valid value for medical transcription jobs. Any other value you
     * enter for language code results in a <code>BadRequestException</code> error.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code for the language spoken in the input media file. US English
     * (en-US) is the valid value for medical transcription jobs. Any other value you
     * enter for language code results in a <code>BadRequestException</code> error.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code for the language spoken in the input media file. US English
     * (en-US) is the valid value for medical transcription jobs. Any other value you
     * enter for language code results in a <code>BadRequestException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language spoken in the input media file. US English
     * (en-US) is the valid value for medical transcription jobs. Any other value you
     * enter for language code results in a <code>BadRequestException</code> error.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file.</p>
     * <p>If you do not specify the media sample rate, Amazon Transcribe Medical
     * determines the sample rate. If you specify the sample rate, it must match the
     * rate detected by Amazon Transcribe Medical. In most cases, you should leave the
     * <code>MediaSampleRateHertz</code> field blank and let Amazon Transcribe Medical
     * determine the sample rate.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file.</p>
     * <p>If you do not specify the media sample rate, Amazon Transcribe Medical
     * determines the sample rate. If you specify the sample rate, it must match the
     * rate detected by Amazon Transcribe Medical. In most cases, you should leave the
     * <code>MediaSampleRateHertz</code> field blank and let Amazon Transcribe Medical
     * determine the sample rate.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file.</p>
     * <p>If you do not specify the media sample rate, Amazon Transcribe Medical
     * determines the sample rate. If you specify the sample rate, it must match the
     * rate detected by Amazon Transcribe Medical. In most cases, you should leave the
     * <code>MediaSampleRateHertz</code> field blank and let Amazon Transcribe Medical
     * determine the sample rate.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate, in Hertz, of the audio track in the input media file.</p>
     * <p>If you do not specify the media sample rate, Amazon Transcribe Medical
     * determines the sample rate. If you specify the sample rate, it must match the
     * rate detected by Amazon Transcribe Medical. In most cases, you should leave the
     * <code>MediaSampleRateHertz</code> field blank and let Amazon Transcribe Medical
     * determine the sample rate.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>The audio format of the input media file.</p>
     */
    inline const MediaFormat& GetMediaFormat() const{ return m_mediaFormat; }

    /**
     * <p>The audio format of the input media file.</p>
     */
    inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }

    /**
     * <p>The audio format of the input media file.</p>
     */
    inline void SetMediaFormat(const MediaFormat& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = value; }

    /**
     * <p>The audio format of the input media file.</p>
     */
    inline void SetMediaFormat(MediaFormat&& value) { m_mediaFormatHasBeenSet = true; m_mediaFormat = std::move(value); }

    /**
     * <p>The audio format of the input media file.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMediaFormat(const MediaFormat& value) { SetMediaFormat(value); return *this;}

    /**
     * <p>The audio format of the input media file.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithMediaFormat(MediaFormat&& value) { SetMediaFormat(std::move(value)); return *this;}


    
    inline const Media& GetMedia() const{ return m_media; }

    
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }

    
    inline void SetMedia(const Media& value) { m_mediaHasBeenSet = true; m_media = value; }

    
    inline void SetMedia(Media&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }

    
    inline StartMedicalTranscriptionJobRequest& WithMedia(const Media& value) { SetMedia(value); return *this;}

    
    inline StartMedicalTranscriptionJobRequest& WithMedia(Media&& value) { SetMedia(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline const Aws::String& GetOutputBucketName() const{ return m_outputBucketName; }

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline bool OutputBucketNameHasBeenSet() const { return m_outputBucketNameHasBeenSet; }

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline void SetOutputBucketName(const Aws::String& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = value; }

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline void SetOutputBucketName(Aws::String&& value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName = std::move(value); }

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline void SetOutputBucketName(const char* value) { m_outputBucketNameHasBeenSet = true; m_outputBucketName.assign(value); }

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputBucketName(const Aws::String& value) { SetOutputBucketName(value); return *this;}

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputBucketName(Aws::String&& value) { SetOutputBucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location where the transcription is stored.</p> <p>You must set
     * <code>OutputBucketName</code> for Amazon Transcribe Medical to store the
     * transcription results. Your transcript appears in the S3 location you specify.
     * When you call the <a>GetMedicalTranscriptionJob</a>, the operation returns this
     * location in the <code>TranscriptFileUri</code> field. The S3 bucket must have
     * permissions that allow Amazon Transcribe Medical to put files in the bucket. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/security_iam_id-based-policy-examples.html#auth-role-iam-user">Permissions
     * Required for IAM User Roles</a>.</p> <p>You can specify an AWS Key Management
     * Service (KMS) key to encrypt the output of your transcription using the
     * <code>OutputEncryptionKMSKeyId</code> parameter. If you don't specify a KMS key,
     * Amazon Transcribe Medical uses the default Amazon S3 key for server-side
     * encryption of transcripts that are placed in your S3 bucket.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputBucketName(const char* value) { SetOutputBucketName(value); return *this;}


    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::move(value); }

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputKey(Aws::String&& value) { SetOutputKey(std::move(value)); return *this;}

    /**
     * <p>You can specify a location in an Amazon S3 bucket to store the output of your
     * medical transcription job.</p> <p>If you don't specify an output key, Amazon
     * Transcribe Medical stores the output of your transcription job in the Amazon S3
     * bucket you specified. By default, the object key is
     * "your-transcription-job-name.json".</p> <p>You can use output keys to specify
     * the Amazon S3 prefix and file name of the transcription output. For example,
     * specifying the Amazon S3 prefix, "folder1/folder2/", as an output key would lead
     * to the output being stored as
     * "folder1/folder2/your-transcription-job-name.json". If you specify
     * "my-other-job-name.json" as the output key, the object key is changed to
     * "my-other-job-name.json". You can use an output key to change both the prefix
     * and the file name, for example "folder/my-other-job-name.json".</p> <p>If you
     * specify an output key, you must also specify an S3 bucket in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const{ return m_outputEncryptionKMSKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const Aws::String& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(Aws::String&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline void SetOutputEncryptionKMSKeyId(const char* value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(const Aws::String& value) { SetOutputEncryptionKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(Aws::String&& value) { SetOutputEncryptionKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (KMS) key
     * used to encrypt the output of the transcription job. The user calling the
     * <a>StartMedicalTranscriptionJob</a> operation must have permission to use the
     * specified KMS key.</p> <p>You use either of the following to identify a KMS key
     * in the current account:</p> <ul> <li> <p>KMS Key ID:
     * "1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>KMS Key Alias:
     * "alias/ExampleAlias"</p> </li> </ul> <p>You can use either of the following to
     * identify a KMS key in the current account or another account:</p> <ul> <li>
     * <p>Amazon Resource Name (ARN) of a KMS key in the current account or another
     * account: "arn:aws:kms:region:account
     * ID:key/1234abcd-12ab-34cd-56ef-1234567890ab"</p> </li> <li> <p>ARN of a KMS Key
     * Alias: "arn:aws:kms:region:account ID:alias/ExampleAlias"</p> </li> </ul> <p>If
     * you don't specify an encryption key, the output of the medical transcription job
     * is encrypted with the default Amazon S3 key (SSE-S3).</p> <p>If you specify a
     * KMS key to encrypt your output, you must also specify an output location in the
     * <code>OutputBucketName</code> parameter.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithOutputEncryptionKMSKeyId(const char* value) { SetOutputEncryptionKMSKeyId(value); return *this;}


    /**
     * <p>Optional settings for the medical transcription job.</p>
     */
    inline const MedicalTranscriptionSetting& GetSettings() const{ return m_settings; }

    /**
     * <p>Optional settings for the medical transcription job.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>Optional settings for the medical transcription job.</p>
     */
    inline void SetSettings(const MedicalTranscriptionSetting& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>Optional settings for the medical transcription job.</p>
     */
    inline void SetSettings(MedicalTranscriptionSetting&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>Optional settings for the medical transcription job.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSettings(const MedicalTranscriptionSetting& value) { SetSettings(value); return *this;}

    /**
     * <p>Optional settings for the medical transcription job.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSettings(MedicalTranscriptionSetting&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The medical specialty of any clinician speaking in the input media.</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>The medical specialty of any clinician speaking in the input media.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>The medical specialty of any clinician speaking in the input media.</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>The medical specialty of any clinician speaking in the input media.</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>The medical specialty of any clinician speaking in the input media.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>The medical specialty of any clinician speaking in the input media.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>The type of speech in the input audio. <code>CONVERSATION</code> refers to
     * conversations between two or more speakers, e.g., a conversations between
     * doctors and patients. <code>DICTATION</code> refers to single-speaker dictated
     * speech, e.g., for clinical notes.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of speech in the input audio. <code>CONVERSATION</code> refers to
     * conversations between two or more speakers, e.g., a conversations between
     * doctors and patients. <code>DICTATION</code> refers to single-speaker dictated
     * speech, e.g., for clinical notes.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of speech in the input audio. <code>CONVERSATION</code> refers to
     * conversations between two or more speakers, e.g., a conversations between
     * doctors and patients. <code>DICTATION</code> refers to single-speaker dictated
     * speech, e.g., for clinical notes.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of speech in the input audio. <code>CONVERSATION</code> refers to
     * conversations between two or more speakers, e.g., a conversations between
     * doctors and patients. <code>DICTATION</code> refers to single-speaker dictated
     * speech, e.g., for clinical notes.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of speech in the input audio. <code>CONVERSATION</code> refers to
     * conversations between two or more speakers, e.g., a conversations between
     * doctors and patients. <code>DICTATION</code> refers to single-speaker dictated
     * speech, e.g., for clinical notes.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of speech in the input audio. <code>CONVERSATION</code> refers to
     * conversations between two or more speakers, e.g., a conversations between
     * doctors and patients. <code>DICTATION</code> refers to single-speaker dictated
     * speech, e.g., for clinical notes.</p>
     */
    inline StartMedicalTranscriptionJobRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_medicalTranscriptionJobName;
    bool m_medicalTranscriptionJobNameHasBeenSet;

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

    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet;

    MedicalTranscriptionSetting m_settings;
    bool m_settingsHasBeenSet;

    Specialty m_specialty;
    bool m_specialtyHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
