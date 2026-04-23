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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Notifications.h>
#include <aws/elastictranscoder/model/PipelineOutputConfig.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The pipeline (queue) that is used to manage jobs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Pipeline">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API Pipeline
  {
  public:
    Pipeline();
    Pipeline(Aws::Utils::Json::JsonView jsonValue);
    Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline Pipeline& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline Pipeline& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline Pipeline& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline Pipeline& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline Pipeline& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline Pipeline& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline Pipeline& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline Pipeline& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline Pipeline& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline Pipeline& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline Pipeline& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline Pipeline& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline const Aws::String& GetInputBucket() const{ return m_inputBucket; }

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline bool InputBucketHasBeenSet() const { return m_inputBucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline void SetInputBucket(const Aws::String& value) { m_inputBucketHasBeenSet = true; m_inputBucket = value; }

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline void SetInputBucket(Aws::String&& value) { m_inputBucketHasBeenSet = true; m_inputBucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline void SetInputBucket(const char* value) { m_inputBucketHasBeenSet = true; m_inputBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline Pipeline& WithInputBucket(const Aws::String& value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline Pipeline& WithInputBucket(Aws::String&& value) { SetInputBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline Pipeline& WithInputBucket(const char* value) { SetInputBucket(value); return *this;}


    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline const Aws::String& GetOutputBucket() const{ return m_outputBucket; }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline bool OutputBucketHasBeenSet() const { return m_outputBucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline void SetOutputBucket(const Aws::String& value) { m_outputBucketHasBeenSet = true; m_outputBucket = value; }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline void SetOutputBucket(Aws::String&& value) { m_outputBucketHasBeenSet = true; m_outputBucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline void SetOutputBucket(const char* value) { m_outputBucketHasBeenSet = true; m_outputBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline Pipeline& WithOutputBucket(const Aws::String& value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline Pipeline& WithOutputBucket(Aws::String&& value) { SetOutputBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline Pipeline& WithOutputBucket(const char* value) { SetOutputBucket(value); return *this;}


    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline Pipeline& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline Pipeline& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline Pipeline& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline const Aws::String& GetAwsKmsKeyArn() const{ return m_awsKmsKeyArn; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline bool AwsKmsKeyArnHasBeenSet() const { return m_awsKmsKeyArnHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline void SetAwsKmsKeyArn(const Aws::String& value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline void SetAwsKmsKeyArn(Aws::String&& value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline void SetAwsKmsKeyArn(const char* value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline Pipeline& WithAwsKmsKeyArn(const Aws::String& value) { SetAwsKmsKeyArn(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline Pipeline& WithAwsKmsKeyArn(Aws::String&& value) { SetAwsKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline Pipeline& WithAwsKmsKeyArn(const char* value) { SetAwsKmsKeyArn(value); return *this;}


    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b> (optional): The Amazon Simple Notification
     * Service (Amazon SNS) topic that you want to notify when Elastic Transcoder has
     * started to process the job.</p> </li> <li> <p> <b>Complete</b> (optional): The
     * Amazon SNS topic that you want to notify when Elastic Transcoder has finished
     * processing the job.</p> </li> <li> <p> <b>Warning</b> (optional): The Amazon SNS
     * topic that you want to notify when Elastic Transcoder encounters a warning
     * condition.</p> </li> <li> <p> <b>Error</b> (optional): The Amazon SNS topic that
     * you want to notify when Elastic Transcoder encounters an error condition.</p>
     * </li> </ul>
     */
    inline const Notifications& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b> (optional): The Amazon Simple Notification
     * Service (Amazon SNS) topic that you want to notify when Elastic Transcoder has
     * started to process the job.</p> </li> <li> <p> <b>Complete</b> (optional): The
     * Amazon SNS topic that you want to notify when Elastic Transcoder has finished
     * processing the job.</p> </li> <li> <p> <b>Warning</b> (optional): The Amazon SNS
     * topic that you want to notify when Elastic Transcoder encounters a warning
     * condition.</p> </li> <li> <p> <b>Error</b> (optional): The Amazon SNS topic that
     * you want to notify when Elastic Transcoder encounters an error condition.</p>
     * </li> </ul>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b> (optional): The Amazon Simple Notification
     * Service (Amazon SNS) topic that you want to notify when Elastic Transcoder has
     * started to process the job.</p> </li> <li> <p> <b>Complete</b> (optional): The
     * Amazon SNS topic that you want to notify when Elastic Transcoder has finished
     * processing the job.</p> </li> <li> <p> <b>Warning</b> (optional): The Amazon SNS
     * topic that you want to notify when Elastic Transcoder encounters a warning
     * condition.</p> </li> <li> <p> <b>Error</b> (optional): The Amazon SNS topic that
     * you want to notify when Elastic Transcoder encounters an error condition.</p>
     * </li> </ul>
     */
    inline void SetNotifications(const Notifications& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b> (optional): The Amazon Simple Notification
     * Service (Amazon SNS) topic that you want to notify when Elastic Transcoder has
     * started to process the job.</p> </li> <li> <p> <b>Complete</b> (optional): The
     * Amazon SNS topic that you want to notify when Elastic Transcoder has finished
     * processing the job.</p> </li> <li> <p> <b>Warning</b> (optional): The Amazon SNS
     * topic that you want to notify when Elastic Transcoder encounters a warning
     * condition.</p> </li> <li> <p> <b>Error</b> (optional): The Amazon SNS topic that
     * you want to notify when Elastic Transcoder encounters an error condition.</p>
     * </li> </ul>
     */
    inline void SetNotifications(Notifications&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b> (optional): The Amazon Simple Notification
     * Service (Amazon SNS) topic that you want to notify when Elastic Transcoder has
     * started to process the job.</p> </li> <li> <p> <b>Complete</b> (optional): The
     * Amazon SNS topic that you want to notify when Elastic Transcoder has finished
     * processing the job.</p> </li> <li> <p> <b>Warning</b> (optional): The Amazon SNS
     * topic that you want to notify when Elastic Transcoder encounters a warning
     * condition.</p> </li> <li> <p> <b>Error</b> (optional): The Amazon SNS topic that
     * you want to notify when Elastic Transcoder encounters an error condition.</p>
     * </li> </ul>
     */
    inline Pipeline& WithNotifications(const Notifications& value) { SetNotifications(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b> (optional): The Amazon Simple Notification
     * Service (Amazon SNS) topic that you want to notify when Elastic Transcoder has
     * started to process the job.</p> </li> <li> <p> <b>Complete</b> (optional): The
     * Amazon SNS topic that you want to notify when Elastic Transcoder has finished
     * processing the job.</p> </li> <li> <p> <b>Warning</b> (optional): The Amazon SNS
     * topic that you want to notify when Elastic Transcoder encounters a warning
     * condition.</p> </li> <li> <p> <b>Error</b> (optional): The Amazon SNS topic that
     * you want to notify when Elastic Transcoder encounters an error condition.</p>
     * </li> </ul>
     */
    inline Pipeline& WithNotifications(Notifications&& value) { SetNotifications(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save transcoded files and playlists. Either you specify both
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, or you specify
     * <code>OutputBucket</code>.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket
     * in which you want Elastic Transcoder to save transcoded files and playlists.</p>
     * </li> <li> <p> <b>Permissions</b>: A list of the users and/or predefined Amazon
     * S3 groups you want to have access to transcoded files and playlists, and the
     * type of access that you want them to have. </p> <ul> <li> <p>GranteeType: The
     * type of value that appears in the <code>Grantee</code> object: </p> <ul> <li>
     * <p> <code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution.</p> </li> <li>
     * <p> <code>Email</code>: The registered email address of an AWS account.</p>
     * </li> <li> <p> <code>Group</code>: One of the following predefined Amazon S3
     * groups: <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to transcoded files and
     * playlists.</p> </li> <li> <p> <code>Access</code>: The permission that you want
     * to give to the AWS user that is listed in <code>Grantee</code>. Valid values
     * include:</p> <ul> <li> <p> <code>READ</code>: The grantee can read the objects
     * and metadata for objects that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li>
     * </ul> </li> <li> <p> <b>StorageClass</b>: The Amazon S3 storage class, Standard
     * or ReducedRedundancy, that you want Elastic Transcoder to assign to the video
     * files and playlists that it stores in your Amazon S3 bucket. </p> </li> </ul>
     */
    inline const PipelineOutputConfig& GetContentConfig() const{ return m_contentConfig; }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save transcoded files and playlists. Either you specify both
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, or you specify
     * <code>OutputBucket</code>.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket
     * in which you want Elastic Transcoder to save transcoded files and playlists.</p>
     * </li> <li> <p> <b>Permissions</b>: A list of the users and/or predefined Amazon
     * S3 groups you want to have access to transcoded files and playlists, and the
     * type of access that you want them to have. </p> <ul> <li> <p>GranteeType: The
     * type of value that appears in the <code>Grantee</code> object: </p> <ul> <li>
     * <p> <code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution.</p> </li> <li>
     * <p> <code>Email</code>: The registered email address of an AWS account.</p>
     * </li> <li> <p> <code>Group</code>: One of the following predefined Amazon S3
     * groups: <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to transcoded files and
     * playlists.</p> </li> <li> <p> <code>Access</code>: The permission that you want
     * to give to the AWS user that is listed in <code>Grantee</code>. Valid values
     * include:</p> <ul> <li> <p> <code>READ</code>: The grantee can read the objects
     * and metadata for objects that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li>
     * </ul> </li> <li> <p> <b>StorageClass</b>: The Amazon S3 storage class, Standard
     * or ReducedRedundancy, that you want Elastic Transcoder to assign to the video
     * files and playlists that it stores in your Amazon S3 bucket. </p> </li> </ul>
     */
    inline bool ContentConfigHasBeenSet() const { return m_contentConfigHasBeenSet; }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save transcoded files and playlists. Either you specify both
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, or you specify
     * <code>OutputBucket</code>.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket
     * in which you want Elastic Transcoder to save transcoded files and playlists.</p>
     * </li> <li> <p> <b>Permissions</b>: A list of the users and/or predefined Amazon
     * S3 groups you want to have access to transcoded files and playlists, and the
     * type of access that you want them to have. </p> <ul> <li> <p>GranteeType: The
     * type of value that appears in the <code>Grantee</code> object: </p> <ul> <li>
     * <p> <code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution.</p> </li> <li>
     * <p> <code>Email</code>: The registered email address of an AWS account.</p>
     * </li> <li> <p> <code>Group</code>: One of the following predefined Amazon S3
     * groups: <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to transcoded files and
     * playlists.</p> </li> <li> <p> <code>Access</code>: The permission that you want
     * to give to the AWS user that is listed in <code>Grantee</code>. Valid values
     * include:</p> <ul> <li> <p> <code>READ</code>: The grantee can read the objects
     * and metadata for objects that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li>
     * </ul> </li> <li> <p> <b>StorageClass</b>: The Amazon S3 storage class, Standard
     * or ReducedRedundancy, that you want Elastic Transcoder to assign to the video
     * files and playlists that it stores in your Amazon S3 bucket. </p> </li> </ul>
     */
    inline void SetContentConfig(const PipelineOutputConfig& value) { m_contentConfigHasBeenSet = true; m_contentConfig = value; }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save transcoded files and playlists. Either you specify both
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, or you specify
     * <code>OutputBucket</code>.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket
     * in which you want Elastic Transcoder to save transcoded files and playlists.</p>
     * </li> <li> <p> <b>Permissions</b>: A list of the users and/or predefined Amazon
     * S3 groups you want to have access to transcoded files and playlists, and the
     * type of access that you want them to have. </p> <ul> <li> <p>GranteeType: The
     * type of value that appears in the <code>Grantee</code> object: </p> <ul> <li>
     * <p> <code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution.</p> </li> <li>
     * <p> <code>Email</code>: The registered email address of an AWS account.</p>
     * </li> <li> <p> <code>Group</code>: One of the following predefined Amazon S3
     * groups: <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to transcoded files and
     * playlists.</p> </li> <li> <p> <code>Access</code>: The permission that you want
     * to give to the AWS user that is listed in <code>Grantee</code>. Valid values
     * include:</p> <ul> <li> <p> <code>READ</code>: The grantee can read the objects
     * and metadata for objects that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li>
     * </ul> </li> <li> <p> <b>StorageClass</b>: The Amazon S3 storage class, Standard
     * or ReducedRedundancy, that you want Elastic Transcoder to assign to the video
     * files and playlists that it stores in your Amazon S3 bucket. </p> </li> </ul>
     */
    inline void SetContentConfig(PipelineOutputConfig&& value) { m_contentConfigHasBeenSet = true; m_contentConfig = std::move(value); }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save transcoded files and playlists. Either you specify both
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, or you specify
     * <code>OutputBucket</code>.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket
     * in which you want Elastic Transcoder to save transcoded files and playlists.</p>
     * </li> <li> <p> <b>Permissions</b>: A list of the users and/or predefined Amazon
     * S3 groups you want to have access to transcoded files and playlists, and the
     * type of access that you want them to have. </p> <ul> <li> <p>GranteeType: The
     * type of value that appears in the <code>Grantee</code> object: </p> <ul> <li>
     * <p> <code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution.</p> </li> <li>
     * <p> <code>Email</code>: The registered email address of an AWS account.</p>
     * </li> <li> <p> <code>Group</code>: One of the following predefined Amazon S3
     * groups: <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to transcoded files and
     * playlists.</p> </li> <li> <p> <code>Access</code>: The permission that you want
     * to give to the AWS user that is listed in <code>Grantee</code>. Valid values
     * include:</p> <ul> <li> <p> <code>READ</code>: The grantee can read the objects
     * and metadata for objects that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li>
     * </ul> </li> <li> <p> <b>StorageClass</b>: The Amazon S3 storage class, Standard
     * or ReducedRedundancy, that you want Elastic Transcoder to assign to the video
     * files and playlists that it stores in your Amazon S3 bucket. </p> </li> </ul>
     */
    inline Pipeline& WithContentConfig(const PipelineOutputConfig& value) { SetContentConfig(value); return *this;}

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save transcoded files and playlists. Either you specify both
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, or you specify
     * <code>OutputBucket</code>.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket
     * in which you want Elastic Transcoder to save transcoded files and playlists.</p>
     * </li> <li> <p> <b>Permissions</b>: A list of the users and/or predefined Amazon
     * S3 groups you want to have access to transcoded files and playlists, and the
     * type of access that you want them to have. </p> <ul> <li> <p>GranteeType: The
     * type of value that appears in the <code>Grantee</code> object: </p> <ul> <li>
     * <p> <code>Canonical</code>: Either the canonical user ID for an AWS account or
     * an origin access identity for an Amazon CloudFront distribution.</p> </li> <li>
     * <p> <code>Email</code>: The registered email address of an AWS account.</p>
     * </li> <li> <p> <code>Group</code>: One of the following predefined Amazon S3
     * groups: <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to transcoded files and
     * playlists.</p> </li> <li> <p> <code>Access</code>: The permission that you want
     * to give to the AWS user that is listed in <code>Grantee</code>. Valid values
     * include:</p> <ul> <li> <p> <code>READ</code>: The grantee can read the objects
     * and metadata for objects that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li>
     * </ul> </li> <li> <p> <b>StorageClass</b>: The Amazon S3 storage class, Standard
     * or ReducedRedundancy, that you want Elastic Transcoder to assign to the video
     * files and playlists that it stores in your Amazon S3 bucket. </p> </li> </ul>
     */
    inline Pipeline& WithContentConfig(PipelineOutputConfig&& value) { SetContentConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save thumbnail files. Either you specify both <code>ContentConfig</code> and
     * <code>ThumbnailConfig</code>, or you specify <code>OutputBucket</code>.</p> <ul>
     * <li> <p> <code>Bucket</code>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files. </p> </li> <li> <p>
     * <code>Permissions</code>: A list of the users and/or predefined Amazon S3 groups
     * you want to have access to thumbnail files, and the type of access that you want
     * them to have. </p> <ul> <li> <p>GranteeType: The type of value that appears in
     * the Grantee object:</p> <ul> <li> <p> <code>Canonical</code>: Either the
     * canonical user ID for an AWS account or an origin access identity for an Amazon
     * CloudFront distribution.</p> <important> <p>A canonical user ID is not the same
     * as an AWS account number.</p> </important> </li> <li> <p> <code>Email</code>:
     * The registered email address of an AWS account.</p> </li> <li> <p>
     * <code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to thumbnail files.</p> </li>
     * <li> <p>Access: The permission that you want to give to the AWS user that is
     * listed in Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>:
     * The grantee can read the thumbnails and metadata for thumbnails that Elastic
     * Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>READ_ACP</code>: The grantee can read the object ACL for thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>WRITE_ACP</code>: The grantee can write the ACL for the thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> </ul> </li> </ul> </li> <li> <p> <code>StorageClass</code>:
     * The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline const PipelineOutputConfig& GetThumbnailConfig() const{ return m_thumbnailConfig; }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save thumbnail files. Either you specify both <code>ContentConfig</code> and
     * <code>ThumbnailConfig</code>, or you specify <code>OutputBucket</code>.</p> <ul>
     * <li> <p> <code>Bucket</code>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files. </p> </li> <li> <p>
     * <code>Permissions</code>: A list of the users and/or predefined Amazon S3 groups
     * you want to have access to thumbnail files, and the type of access that you want
     * them to have. </p> <ul> <li> <p>GranteeType: The type of value that appears in
     * the Grantee object:</p> <ul> <li> <p> <code>Canonical</code>: Either the
     * canonical user ID for an AWS account or an origin access identity for an Amazon
     * CloudFront distribution.</p> <important> <p>A canonical user ID is not the same
     * as an AWS account number.</p> </important> </li> <li> <p> <code>Email</code>:
     * The registered email address of an AWS account.</p> </li> <li> <p>
     * <code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to thumbnail files.</p> </li>
     * <li> <p>Access: The permission that you want to give to the AWS user that is
     * listed in Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>:
     * The grantee can read the thumbnails and metadata for thumbnails that Elastic
     * Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>READ_ACP</code>: The grantee can read the object ACL for thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>WRITE_ACP</code>: The grantee can write the ACL for the thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> </ul> </li> </ul> </li> <li> <p> <code>StorageClass</code>:
     * The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline bool ThumbnailConfigHasBeenSet() const { return m_thumbnailConfigHasBeenSet; }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save thumbnail files. Either you specify both <code>ContentConfig</code> and
     * <code>ThumbnailConfig</code>, or you specify <code>OutputBucket</code>.</p> <ul>
     * <li> <p> <code>Bucket</code>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files. </p> </li> <li> <p>
     * <code>Permissions</code>: A list of the users and/or predefined Amazon S3 groups
     * you want to have access to thumbnail files, and the type of access that you want
     * them to have. </p> <ul> <li> <p>GranteeType: The type of value that appears in
     * the Grantee object:</p> <ul> <li> <p> <code>Canonical</code>: Either the
     * canonical user ID for an AWS account or an origin access identity for an Amazon
     * CloudFront distribution.</p> <important> <p>A canonical user ID is not the same
     * as an AWS account number.</p> </important> </li> <li> <p> <code>Email</code>:
     * The registered email address of an AWS account.</p> </li> <li> <p>
     * <code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to thumbnail files.</p> </li>
     * <li> <p>Access: The permission that you want to give to the AWS user that is
     * listed in Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>:
     * The grantee can read the thumbnails and metadata for thumbnails that Elastic
     * Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>READ_ACP</code>: The grantee can read the object ACL for thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>WRITE_ACP</code>: The grantee can write the ACL for the thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> </ul> </li> </ul> </li> <li> <p> <code>StorageClass</code>:
     * The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline void SetThumbnailConfig(const PipelineOutputConfig& value) { m_thumbnailConfigHasBeenSet = true; m_thumbnailConfig = value; }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save thumbnail files. Either you specify both <code>ContentConfig</code> and
     * <code>ThumbnailConfig</code>, or you specify <code>OutputBucket</code>.</p> <ul>
     * <li> <p> <code>Bucket</code>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files. </p> </li> <li> <p>
     * <code>Permissions</code>: A list of the users and/or predefined Amazon S3 groups
     * you want to have access to thumbnail files, and the type of access that you want
     * them to have. </p> <ul> <li> <p>GranteeType: The type of value that appears in
     * the Grantee object:</p> <ul> <li> <p> <code>Canonical</code>: Either the
     * canonical user ID for an AWS account or an origin access identity for an Amazon
     * CloudFront distribution.</p> <important> <p>A canonical user ID is not the same
     * as an AWS account number.</p> </important> </li> <li> <p> <code>Email</code>:
     * The registered email address of an AWS account.</p> </li> <li> <p>
     * <code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to thumbnail files.</p> </li>
     * <li> <p>Access: The permission that you want to give to the AWS user that is
     * listed in Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>:
     * The grantee can read the thumbnails and metadata for thumbnails that Elastic
     * Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>READ_ACP</code>: The grantee can read the object ACL for thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>WRITE_ACP</code>: The grantee can write the ACL for the thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> </ul> </li> </ul> </li> <li> <p> <code>StorageClass</code>:
     * The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline void SetThumbnailConfig(PipelineOutputConfig&& value) { m_thumbnailConfigHasBeenSet = true; m_thumbnailConfig = std::move(value); }

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save thumbnail files. Either you specify both <code>ContentConfig</code> and
     * <code>ThumbnailConfig</code>, or you specify <code>OutputBucket</code>.</p> <ul>
     * <li> <p> <code>Bucket</code>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files. </p> </li> <li> <p>
     * <code>Permissions</code>: A list of the users and/or predefined Amazon S3 groups
     * you want to have access to thumbnail files, and the type of access that you want
     * them to have. </p> <ul> <li> <p>GranteeType: The type of value that appears in
     * the Grantee object:</p> <ul> <li> <p> <code>Canonical</code>: Either the
     * canonical user ID for an AWS account or an origin access identity for an Amazon
     * CloudFront distribution.</p> <important> <p>A canonical user ID is not the same
     * as an AWS account number.</p> </important> </li> <li> <p> <code>Email</code>:
     * The registered email address of an AWS account.</p> </li> <li> <p>
     * <code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to thumbnail files.</p> </li>
     * <li> <p>Access: The permission that you want to give to the AWS user that is
     * listed in Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>:
     * The grantee can read the thumbnails and metadata for thumbnails that Elastic
     * Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>READ_ACP</code>: The grantee can read the object ACL for thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>WRITE_ACP</code>: The grantee can write the ACL for the thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> </ul> </li> </ul> </li> <li> <p> <code>StorageClass</code>:
     * The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline Pipeline& WithThumbnailConfig(const PipelineOutputConfig& value) { SetThumbnailConfig(value); return *this;}

    /**
     * <p>Information about the Amazon S3 bucket in which you want Elastic Transcoder
     * to save thumbnail files. Either you specify both <code>ContentConfig</code> and
     * <code>ThumbnailConfig</code>, or you specify <code>OutputBucket</code>.</p> <ul>
     * <li> <p> <code>Bucket</code>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files. </p> </li> <li> <p>
     * <code>Permissions</code>: A list of the users and/or predefined Amazon S3 groups
     * you want to have access to thumbnail files, and the type of access that you want
     * them to have. </p> <ul> <li> <p>GranteeType: The type of value that appears in
     * the Grantee object:</p> <ul> <li> <p> <code>Canonical</code>: Either the
     * canonical user ID for an AWS account or an origin access identity for an Amazon
     * CloudFront distribution.</p> <important> <p>A canonical user ID is not the same
     * as an AWS account number.</p> </important> </li> <li> <p> <code>Email</code>:
     * The registered email address of an AWS account.</p> </li> <li> <p>
     * <code>Group</code>: One of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <code>Grantee</code>:
     * The AWS user or group that you want to have access to thumbnail files.</p> </li>
     * <li> <p>Access: The permission that you want to give to the AWS user that is
     * listed in Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>:
     * The grantee can read the thumbnails and metadata for thumbnails that Elastic
     * Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>READ_ACP</code>: The grantee can read the object ACL for thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>WRITE_ACP</code>: The grantee can write the ACL for the thumbnails that
     * Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has READ, READ_ACP, and WRITE_ACP
     * permissions for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> </ul> </li> </ul> </li> <li> <p> <code>StorageClass</code>:
     * The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline Pipeline& WithThumbnailConfig(PipelineOutputConfig&& value) { SetThumbnailConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_inputBucket;
    bool m_inputBucketHasBeenSet;

    Aws::String m_outputBucket;
    bool m_outputBucketHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_awsKmsKeyArn;
    bool m_awsKmsKeyArnHasBeenSet;

    Notifications m_notifications;
    bool m_notificationsHasBeenSet;

    PipelineOutputConfig m_contentConfig;
    bool m_contentConfigHasBeenSet;

    PipelineOutputConfig m_thumbnailConfig;
    bool m_thumbnailConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
