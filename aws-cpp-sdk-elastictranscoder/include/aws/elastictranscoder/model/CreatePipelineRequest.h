﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Notifications.h>
#include <aws/elastictranscoder/model/PipelineOutputConfig.h>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>CreatePipelineRequest</code> structure.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePipelineRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API CreatePipelineRequest : public ElasticTranscoderRequest
  {
  public:
    CreatePipelineRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline CreatePipelineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline CreatePipelineRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters.</p>
     */
    inline CreatePipelineRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline const Aws::String& GetInputBucket() const{ return m_inputBucket; }

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline void SetInputBucket(const Aws::String& value) { m_inputBucketHasBeenSet = true; m_inputBucket = value; }

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline void SetInputBucket(Aws::String&& value) { m_inputBucketHasBeenSet = true; m_inputBucket = value; }

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline void SetInputBucket(const char* value) { m_inputBucketHasBeenSet = true; m_inputBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline CreatePipelineRequest& WithInputBucket(const Aws::String& value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline CreatePipelineRequest& WithInputBucket(Aws::String&& value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you saved the media files that you want to
     * transcode.</p>
     */
    inline CreatePipelineRequest& WithInputBucket(const char* value) { SetInputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline const Aws::String& GetOutputBucket() const{ return m_outputBucket; }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline void SetOutputBucket(const Aws::String& value) { m_outputBucketHasBeenSet = true; m_outputBucket = value; }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline void SetOutputBucket(Aws::String&& value) { m_outputBucketHasBeenSet = true; m_outputBucket = value; }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline void SetOutputBucket(const char* value) { m_outputBucketHasBeenSet = true; m_outputBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline CreatePipelineRequest& WithOutputBucket(const Aws::String& value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline CreatePipelineRequest& WithOutputBucket(Aws::String&& value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save the
     * transcoded files. (Use this, or use ContentConfig:Bucket plus
     * ThumbnailConfig:Bucket.)</p> <p>Specify this value when all of the following are
     * true:</p> <ul> <li> <p>You want to save transcoded files, thumbnails (if any),
     * and playlists (if any) together in one bucket.</p> </li> <li> <p>You do not want
     * to specify the users or groups who have access to the transcoded files,
     * thumbnails, and playlists.</p> </li> <li> <p>You do not want to specify the
     * permissions that Elastic Transcoder grants to the files. </p> <important>
     * <p>When Elastic Transcoder saves files in <code>OutputBucket</code>, it grants
     * full control over the files only to the AWS account that owns the role that is
     * specified by <code>Role</code>.</p> </important> </li> <li> <p>You want to
     * associate the transcoded files and thumbnails with the Amazon S3 Standard
     * storage class.</p> </li> </ul> <p>If you want to save transcoded files and
     * playlists in one bucket and thumbnails in another bucket, specify which users
     * can access the transcoded files or the permissions the users have, or change the
     * Amazon S3 storage class, omit <code>OutputBucket</code> and specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code> instead.</p>
     */
    inline CreatePipelineRequest& WithOutputBucket(const char* value) { SetOutputBucket(value); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline CreatePipelineRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline CreatePipelineRequest& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that you want Elastic
     * Transcoder to use to create the pipeline.</p>
     */
    inline CreatePipelineRequest& WithRole(const char* value) { SetRole(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline const Aws::String& GetAwsKmsKeyArn() const{ return m_awsKmsKeyArn; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline void SetAwsKmsKeyArn(const Aws::String& value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline void SetAwsKmsKeyArn(Aws::String&& value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline void SetAwsKmsKeyArn(const char* value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline CreatePipelineRequest& WithAwsKmsKeyArn(const Aws::String& value) { SetAwsKmsKeyArn(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline CreatePipelineRequest& WithAwsKmsKeyArn(Aws::String&& value) { SetAwsKmsKeyArn(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>S3</code> or <code>S3-AWS-KMS</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>AES-PKCS7</code>, <code>AES-CTR</code>, or <code>AES-GCM</code>.</p>
     */
    inline CreatePipelineRequest& WithAwsKmsKeyArn(const char* value) { SetAwsKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b>: The topic ARN for the Amazon Simple
     * Notification Service (Amazon SNS) topic that you want to notify when Elastic
     * Transcoder has started to process a job in this pipeline. This is the ARN that
     * Amazon SNS returned when you created the topic. For more information, see Create
     * a Topic in the Amazon Simple Notification Service Developer Guide.</p> </li>
     * <li> <p> <b>Completed</b>: The topic ARN for the Amazon SNS topic that you want
     * to notify when Elastic Transcoder has finished processing a job in this
     * pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic
     * that you want to notify when Elastic Transcoder encounters a warning condition
     * while processing a job in this pipeline. This is the ARN that Amazon SNS
     * returned when you created the topic.</p> </li> <li> <p> <b>Error</b>: The topic
     * ARN for the Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition while processing a job in this pipeline. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline const Notifications& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b>: The topic ARN for the Amazon Simple
     * Notification Service (Amazon SNS) topic that you want to notify when Elastic
     * Transcoder has started to process a job in this pipeline. This is the ARN that
     * Amazon SNS returned when you created the topic. For more information, see Create
     * a Topic in the Amazon Simple Notification Service Developer Guide.</p> </li>
     * <li> <p> <b>Completed</b>: The topic ARN for the Amazon SNS topic that you want
     * to notify when Elastic Transcoder has finished processing a job in this
     * pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic
     * that you want to notify when Elastic Transcoder encounters a warning condition
     * while processing a job in this pipeline. This is the ARN that Amazon SNS
     * returned when you created the topic.</p> </li> <li> <p> <b>Error</b>: The topic
     * ARN for the Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition while processing a job in this pipeline. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline void SetNotifications(const Notifications& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b>: The topic ARN for the Amazon Simple
     * Notification Service (Amazon SNS) topic that you want to notify when Elastic
     * Transcoder has started to process a job in this pipeline. This is the ARN that
     * Amazon SNS returned when you created the topic. For more information, see Create
     * a Topic in the Amazon Simple Notification Service Developer Guide.</p> </li>
     * <li> <p> <b>Completed</b>: The topic ARN for the Amazon SNS topic that you want
     * to notify when Elastic Transcoder has finished processing a job in this
     * pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic
     * that you want to notify when Elastic Transcoder encounters a warning condition
     * while processing a job in this pipeline. This is the ARN that Amazon SNS
     * returned when you created the topic.</p> </li> <li> <p> <b>Error</b>: The topic
     * ARN for the Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition while processing a job in this pipeline. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline void SetNotifications(Notifications&& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b>: The topic ARN for the Amazon Simple
     * Notification Service (Amazon SNS) topic that you want to notify when Elastic
     * Transcoder has started to process a job in this pipeline. This is the ARN that
     * Amazon SNS returned when you created the topic. For more information, see Create
     * a Topic in the Amazon Simple Notification Service Developer Guide.</p> </li>
     * <li> <p> <b>Completed</b>: The topic ARN for the Amazon SNS topic that you want
     * to notify when Elastic Transcoder has finished processing a job in this
     * pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic
     * that you want to notify when Elastic Transcoder encounters a warning condition
     * while processing a job in this pipeline. This is the ARN that Amazon SNS
     * returned when you created the topic.</p> </li> <li> <p> <b>Error</b>: The topic
     * ARN for the Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition while processing a job in this pipeline. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline CreatePipelineRequest& WithNotifications(const Notifications& value) { SetNotifications(value); return *this;}

    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p> <important> <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> </important>
     * <ul> <li> <p> <b>Progressing</b>: The topic ARN for the Amazon Simple
     * Notification Service (Amazon SNS) topic that you want to notify when Elastic
     * Transcoder has started to process a job in this pipeline. This is the ARN that
     * Amazon SNS returned when you created the topic. For more information, see Create
     * a Topic in the Amazon Simple Notification Service Developer Guide.</p> </li>
     * <li> <p> <b>Completed</b>: The topic ARN for the Amazon SNS topic that you want
     * to notify when Elastic Transcoder has finished processing a job in this
     * pipeline. This is the ARN that Amazon SNS returned when you created the
     * topic.</p> </li> <li> <p> <b>Warning</b>: The topic ARN for the Amazon SNS topic
     * that you want to notify when Elastic Transcoder encounters a warning condition
     * while processing a job in this pipeline. This is the ARN that Amazon SNS
     * returned when you created the topic.</p> </li> <li> <p> <b>Error</b>: The topic
     * ARN for the Amazon SNS topic that you want to notify when Elastic Transcoder
     * encounters an error condition while processing a job in this pipeline. This is
     * the ARN that Amazon SNS returned when you created the topic.</p> </li> </ul>
     */
    inline CreatePipelineRequest& WithNotifications(Notifications&& value) { SetNotifications(value); return *this;}

    /**
     * <p>The optional <code>ContentConfig</code> object specifies information about
     * the Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files and playlists: which bucket to use, which users you want to have access to
     * the files, the type of access you want users to have, and the storage class that
     * you want to assign to the files.</p> <p>If you specify values for
     * <code>ContentConfig</code>, you must also specify values for
     * <code>ThumbnailConfig</code>.</p> <p>If you specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, omit the
     * <code>OutputBucket</code> object.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3
     * bucket in which you want Elastic Transcoder to save transcoded files and
     * playlists.</p> </li> <li> <p> <b>Permissions</b> (Optional): The Permissions
     * object specifies which users you want to have access to transcoded files and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p> <b>Grantee
     * Type</b>: Specify the type of value that appears in the <code>Grantee</code>
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution. For more
     * information about canonical user IDs, see Access Control List (ACL) Overview in
     * the Amazon Simple Storage Service Developer Guide. For more information about
     * using CloudFront origin access identities to require that users use CloudFront
     * URLs instead of Amazon S3 URLs, see Using an Origin Access Identity to Restrict
     * Access to Your Amazon S3 Content.</p> <important> <p>A canonical user ID is not
     * the same as an AWS account number.</p> </important> </li> <li> <p> <b>Email</b>:
     * The value in the <code>Grantee</code> object is the registered email address of
     * an AWS account.</p> </li> <li> <p> <b>Group</b>: The value in the
     * <code>Grantee</code> object is one of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <b>Grantee</b>: The AWS
     * user or group that you want to have access to transcoded files and playlists. To
     * identify the user or group, you can specify the canonical user ID for an AWS
     * account, an origin access identity for a CloudFront distribution, the registered
     * email address of an AWS account, or a predefined Amazon S3 group </p> </li> <li>
     * <p> <b>Access</b>: The permission that you want to give to the AWS user that you
     * specified in <code>Grantee</code>. Permissions are granted on the files that
     * Elastic Transcoder adds to the bucket, including playlists and video files.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the objects and metadata for objects that Elastic Transcoder adds to the Amazon
     * S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket.</p> </li>
     * </ul>
     */
    inline const PipelineOutputConfig& GetContentConfig() const{ return m_contentConfig; }

    /**
     * <p>The optional <code>ContentConfig</code> object specifies information about
     * the Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files and playlists: which bucket to use, which users you want to have access to
     * the files, the type of access you want users to have, and the storage class that
     * you want to assign to the files.</p> <p>If you specify values for
     * <code>ContentConfig</code>, you must also specify values for
     * <code>ThumbnailConfig</code>.</p> <p>If you specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, omit the
     * <code>OutputBucket</code> object.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3
     * bucket in which you want Elastic Transcoder to save transcoded files and
     * playlists.</p> </li> <li> <p> <b>Permissions</b> (Optional): The Permissions
     * object specifies which users you want to have access to transcoded files and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p> <b>Grantee
     * Type</b>: Specify the type of value that appears in the <code>Grantee</code>
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution. For more
     * information about canonical user IDs, see Access Control List (ACL) Overview in
     * the Amazon Simple Storage Service Developer Guide. For more information about
     * using CloudFront origin access identities to require that users use CloudFront
     * URLs instead of Amazon S3 URLs, see Using an Origin Access Identity to Restrict
     * Access to Your Amazon S3 Content.</p> <important> <p>A canonical user ID is not
     * the same as an AWS account number.</p> </important> </li> <li> <p> <b>Email</b>:
     * The value in the <code>Grantee</code> object is the registered email address of
     * an AWS account.</p> </li> <li> <p> <b>Group</b>: The value in the
     * <code>Grantee</code> object is one of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <b>Grantee</b>: The AWS
     * user or group that you want to have access to transcoded files and playlists. To
     * identify the user or group, you can specify the canonical user ID for an AWS
     * account, an origin access identity for a CloudFront distribution, the registered
     * email address of an AWS account, or a predefined Amazon S3 group </p> </li> <li>
     * <p> <b>Access</b>: The permission that you want to give to the AWS user that you
     * specified in <code>Grantee</code>. Permissions are granted on the files that
     * Elastic Transcoder adds to the bucket, including playlists and video files.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the objects and metadata for objects that Elastic Transcoder adds to the Amazon
     * S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket.</p> </li>
     * </ul>
     */
    inline void SetContentConfig(const PipelineOutputConfig& value) { m_contentConfigHasBeenSet = true; m_contentConfig = value; }

    /**
     * <p>The optional <code>ContentConfig</code> object specifies information about
     * the Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files and playlists: which bucket to use, which users you want to have access to
     * the files, the type of access you want users to have, and the storage class that
     * you want to assign to the files.</p> <p>If you specify values for
     * <code>ContentConfig</code>, you must also specify values for
     * <code>ThumbnailConfig</code>.</p> <p>If you specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, omit the
     * <code>OutputBucket</code> object.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3
     * bucket in which you want Elastic Transcoder to save transcoded files and
     * playlists.</p> </li> <li> <p> <b>Permissions</b> (Optional): The Permissions
     * object specifies which users you want to have access to transcoded files and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p> <b>Grantee
     * Type</b>: Specify the type of value that appears in the <code>Grantee</code>
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution. For more
     * information about canonical user IDs, see Access Control List (ACL) Overview in
     * the Amazon Simple Storage Service Developer Guide. For more information about
     * using CloudFront origin access identities to require that users use CloudFront
     * URLs instead of Amazon S3 URLs, see Using an Origin Access Identity to Restrict
     * Access to Your Amazon S3 Content.</p> <important> <p>A canonical user ID is not
     * the same as an AWS account number.</p> </important> </li> <li> <p> <b>Email</b>:
     * The value in the <code>Grantee</code> object is the registered email address of
     * an AWS account.</p> </li> <li> <p> <b>Group</b>: The value in the
     * <code>Grantee</code> object is one of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <b>Grantee</b>: The AWS
     * user or group that you want to have access to transcoded files and playlists. To
     * identify the user or group, you can specify the canonical user ID for an AWS
     * account, an origin access identity for a CloudFront distribution, the registered
     * email address of an AWS account, or a predefined Amazon S3 group </p> </li> <li>
     * <p> <b>Access</b>: The permission that you want to give to the AWS user that you
     * specified in <code>Grantee</code>. Permissions are granted on the files that
     * Elastic Transcoder adds to the bucket, including playlists and video files.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the objects and metadata for objects that Elastic Transcoder adds to the Amazon
     * S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket.</p> </li>
     * </ul>
     */
    inline void SetContentConfig(PipelineOutputConfig&& value) { m_contentConfigHasBeenSet = true; m_contentConfig = value; }

    /**
     * <p>The optional <code>ContentConfig</code> object specifies information about
     * the Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files and playlists: which bucket to use, which users you want to have access to
     * the files, the type of access you want users to have, and the storage class that
     * you want to assign to the files.</p> <p>If you specify values for
     * <code>ContentConfig</code>, you must also specify values for
     * <code>ThumbnailConfig</code>.</p> <p>If you specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, omit the
     * <code>OutputBucket</code> object.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3
     * bucket in which you want Elastic Transcoder to save transcoded files and
     * playlists.</p> </li> <li> <p> <b>Permissions</b> (Optional): The Permissions
     * object specifies which users you want to have access to transcoded files and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p> <b>Grantee
     * Type</b>: Specify the type of value that appears in the <code>Grantee</code>
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution. For more
     * information about canonical user IDs, see Access Control List (ACL) Overview in
     * the Amazon Simple Storage Service Developer Guide. For more information about
     * using CloudFront origin access identities to require that users use CloudFront
     * URLs instead of Amazon S3 URLs, see Using an Origin Access Identity to Restrict
     * Access to Your Amazon S3 Content.</p> <important> <p>A canonical user ID is not
     * the same as an AWS account number.</p> </important> </li> <li> <p> <b>Email</b>:
     * The value in the <code>Grantee</code> object is the registered email address of
     * an AWS account.</p> </li> <li> <p> <b>Group</b>: The value in the
     * <code>Grantee</code> object is one of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <b>Grantee</b>: The AWS
     * user or group that you want to have access to transcoded files and playlists. To
     * identify the user or group, you can specify the canonical user ID for an AWS
     * account, an origin access identity for a CloudFront distribution, the registered
     * email address of an AWS account, or a predefined Amazon S3 group </p> </li> <li>
     * <p> <b>Access</b>: The permission that you want to give to the AWS user that you
     * specified in <code>Grantee</code>. Permissions are granted on the files that
     * Elastic Transcoder adds to the bucket, including playlists and video files.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the objects and metadata for objects that Elastic Transcoder adds to the Amazon
     * S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket.</p> </li>
     * </ul>
     */
    inline CreatePipelineRequest& WithContentConfig(const PipelineOutputConfig& value) { SetContentConfig(value); return *this;}

    /**
     * <p>The optional <code>ContentConfig</code> object specifies information about
     * the Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files and playlists: which bucket to use, which users you want to have access to
     * the files, the type of access you want users to have, and the storage class that
     * you want to assign to the files.</p> <p>If you specify values for
     * <code>ContentConfig</code>, you must also specify values for
     * <code>ThumbnailConfig</code>.</p> <p>If you specify values for
     * <code>ContentConfig</code> and <code>ThumbnailConfig</code>, omit the
     * <code>OutputBucket</code> object.</p> <ul> <li> <p> <b>Bucket</b>: The Amazon S3
     * bucket in which you want Elastic Transcoder to save transcoded files and
     * playlists.</p> </li> <li> <p> <b>Permissions</b> (Optional): The Permissions
     * object specifies which users you want to have access to transcoded files and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p> <b>Grantee
     * Type</b>: Specify the type of value that appears in the <code>Grantee</code>
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution. For more
     * information about canonical user IDs, see Access Control List (ACL) Overview in
     * the Amazon Simple Storage Service Developer Guide. For more information about
     * using CloudFront origin access identities to require that users use CloudFront
     * URLs instead of Amazon S3 URLs, see Using an Origin Access Identity to Restrict
     * Access to Your Amazon S3 Content.</p> <important> <p>A canonical user ID is not
     * the same as an AWS account number.</p> </important> </li> <li> <p> <b>Email</b>:
     * The value in the <code>Grantee</code> object is the registered email address of
     * an AWS account.</p> </li> <li> <p> <b>Group</b>: The value in the
     * <code>Grantee</code> object is one of the following predefined Amazon S3 groups:
     * <code>AllUsers</code>, <code>AuthenticatedUsers</code>, or
     * <code>LogDelivery</code>.</p> </li> </ul> </li> <li> <p> <b>Grantee</b>: The AWS
     * user or group that you want to have access to transcoded files and playlists. To
     * identify the user or group, you can specify the canonical user ID for an AWS
     * account, an origin access identity for a CloudFront distribution, the registered
     * email address of an AWS account, or a predefined Amazon S3 group </p> </li> <li>
     * <p> <b>Access</b>: The permission that you want to give to the AWS user that you
     * specified in <code>Grantee</code>. Permissions are granted on the files that
     * Elastic Transcoder adds to the bucket, including playlists and video files.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the objects and metadata for objects that Elastic Transcoder adds to the Amazon
     * S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read the
     * object ACL for objects that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL for the
     * objects that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> <li> <p>
     * <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the objects
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the video files and playlists that it stores in your Amazon S3 bucket.</p> </li>
     * </ul>
     */
    inline CreatePipelineRequest& WithContentConfig(PipelineOutputConfig&& value) { SetContentConfig(value); return *this;}

    /**
     * <p>The <code>ThumbnailConfig</code> object specifies several values, including
     * the Amazon S3 bucket in which you want Elastic Transcoder to save thumbnail
     * files, which users you want to have access to the files, the type of access you
     * want users to have, and the storage class that you want to assign to the
     * files.</p> <p>If you specify values for <code>ContentConfig</code>, you must
     * also specify values for <code>ThumbnailConfig</code> even if you don't want to
     * create thumbnails.</p> <p>If you specify values for <code>ContentConfig</code>
     * and <code>ThumbnailConfig</code>, omit the <code>OutputBucket</code> object.</p>
     * <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files.</p> </li> <li> <p> <b>Permissions</b>
     * (Optional): The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to thumbnail files, and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p>
     * <b>GranteeType</b>: Specify the type of value that appears in the Grantee
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution.</p>
     * <important> <p>A canonical user ID is not the same as an AWS account number.</p>
     * </important> </li> <li> <p> <b>Email</b>: The value in the <code>Grantee</code>
     * object is the registered email address of an AWS account. </p> </li> <li> <p>
     * <b>Group</b>: The value in the <code>Grantee</code> object is one of the
     * following predefined Amazon S3 groups: <code>AllUsers</code>,
     * <code>AuthenticatedUsers</code>, or <code>LogDelivery</code>.</p> </li> </ul>
     * </li> <li> <p> <b>Grantee</b>: The AWS user or group that you want to have
     * access to thumbnail files. To identify the user or group, you can specify the
     * canonical user ID for an AWS account, an origin access identity for a CloudFront
     * distribution, the registered email address of an AWS account, or a predefined
     * Amazon S3 group. </p> </li> <li> <p> <b>Access</b>: The permission that you want
     * to give to the AWS user that you specified in <code>Grantee</code>. Permissions
     * are granted on the thumbnail files that Elastic Transcoder adds to the bucket.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the thumbnails and metadata for objects that Elastic Transcoder adds to the
     * Amazon S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read
     * the object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL
     * for the thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the thumbnails
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline const PipelineOutputConfig& GetThumbnailConfig() const{ return m_thumbnailConfig; }

    /**
     * <p>The <code>ThumbnailConfig</code> object specifies several values, including
     * the Amazon S3 bucket in which you want Elastic Transcoder to save thumbnail
     * files, which users you want to have access to the files, the type of access you
     * want users to have, and the storage class that you want to assign to the
     * files.</p> <p>If you specify values for <code>ContentConfig</code>, you must
     * also specify values for <code>ThumbnailConfig</code> even if you don't want to
     * create thumbnails.</p> <p>If you specify values for <code>ContentConfig</code>
     * and <code>ThumbnailConfig</code>, omit the <code>OutputBucket</code> object.</p>
     * <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files.</p> </li> <li> <p> <b>Permissions</b>
     * (Optional): The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to thumbnail files, and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p>
     * <b>GranteeType</b>: Specify the type of value that appears in the Grantee
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution.</p>
     * <important> <p>A canonical user ID is not the same as an AWS account number.</p>
     * </important> </li> <li> <p> <b>Email</b>: The value in the <code>Grantee</code>
     * object is the registered email address of an AWS account. </p> </li> <li> <p>
     * <b>Group</b>: The value in the <code>Grantee</code> object is one of the
     * following predefined Amazon S3 groups: <code>AllUsers</code>,
     * <code>AuthenticatedUsers</code>, or <code>LogDelivery</code>.</p> </li> </ul>
     * </li> <li> <p> <b>Grantee</b>: The AWS user or group that you want to have
     * access to thumbnail files. To identify the user or group, you can specify the
     * canonical user ID for an AWS account, an origin access identity for a CloudFront
     * distribution, the registered email address of an AWS account, or a predefined
     * Amazon S3 group. </p> </li> <li> <p> <b>Access</b>: The permission that you want
     * to give to the AWS user that you specified in <code>Grantee</code>. Permissions
     * are granted on the thumbnail files that Elastic Transcoder adds to the bucket.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the thumbnails and metadata for objects that Elastic Transcoder adds to the
     * Amazon S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read
     * the object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL
     * for the thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the thumbnails
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline void SetThumbnailConfig(const PipelineOutputConfig& value) { m_thumbnailConfigHasBeenSet = true; m_thumbnailConfig = value; }

    /**
     * <p>The <code>ThumbnailConfig</code> object specifies several values, including
     * the Amazon S3 bucket in which you want Elastic Transcoder to save thumbnail
     * files, which users you want to have access to the files, the type of access you
     * want users to have, and the storage class that you want to assign to the
     * files.</p> <p>If you specify values for <code>ContentConfig</code>, you must
     * also specify values for <code>ThumbnailConfig</code> even if you don't want to
     * create thumbnails.</p> <p>If you specify values for <code>ContentConfig</code>
     * and <code>ThumbnailConfig</code>, omit the <code>OutputBucket</code> object.</p>
     * <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files.</p> </li> <li> <p> <b>Permissions</b>
     * (Optional): The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to thumbnail files, and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p>
     * <b>GranteeType</b>: Specify the type of value that appears in the Grantee
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution.</p>
     * <important> <p>A canonical user ID is not the same as an AWS account number.</p>
     * </important> </li> <li> <p> <b>Email</b>: The value in the <code>Grantee</code>
     * object is the registered email address of an AWS account. </p> </li> <li> <p>
     * <b>Group</b>: The value in the <code>Grantee</code> object is one of the
     * following predefined Amazon S3 groups: <code>AllUsers</code>,
     * <code>AuthenticatedUsers</code>, or <code>LogDelivery</code>.</p> </li> </ul>
     * </li> <li> <p> <b>Grantee</b>: The AWS user or group that you want to have
     * access to thumbnail files. To identify the user or group, you can specify the
     * canonical user ID for an AWS account, an origin access identity for a CloudFront
     * distribution, the registered email address of an AWS account, or a predefined
     * Amazon S3 group. </p> </li> <li> <p> <b>Access</b>: The permission that you want
     * to give to the AWS user that you specified in <code>Grantee</code>. Permissions
     * are granted on the thumbnail files that Elastic Transcoder adds to the bucket.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the thumbnails and metadata for objects that Elastic Transcoder adds to the
     * Amazon S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read
     * the object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL
     * for the thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the thumbnails
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline void SetThumbnailConfig(PipelineOutputConfig&& value) { m_thumbnailConfigHasBeenSet = true; m_thumbnailConfig = value; }

    /**
     * <p>The <code>ThumbnailConfig</code> object specifies several values, including
     * the Amazon S3 bucket in which you want Elastic Transcoder to save thumbnail
     * files, which users you want to have access to the files, the type of access you
     * want users to have, and the storage class that you want to assign to the
     * files.</p> <p>If you specify values for <code>ContentConfig</code>, you must
     * also specify values for <code>ThumbnailConfig</code> even if you don't want to
     * create thumbnails.</p> <p>If you specify values for <code>ContentConfig</code>
     * and <code>ThumbnailConfig</code>, omit the <code>OutputBucket</code> object.</p>
     * <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files.</p> </li> <li> <p> <b>Permissions</b>
     * (Optional): The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to thumbnail files, and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p>
     * <b>GranteeType</b>: Specify the type of value that appears in the Grantee
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution.</p>
     * <important> <p>A canonical user ID is not the same as an AWS account number.</p>
     * </important> </li> <li> <p> <b>Email</b>: The value in the <code>Grantee</code>
     * object is the registered email address of an AWS account. </p> </li> <li> <p>
     * <b>Group</b>: The value in the <code>Grantee</code> object is one of the
     * following predefined Amazon S3 groups: <code>AllUsers</code>,
     * <code>AuthenticatedUsers</code>, or <code>LogDelivery</code>.</p> </li> </ul>
     * </li> <li> <p> <b>Grantee</b>: The AWS user or group that you want to have
     * access to thumbnail files. To identify the user or group, you can specify the
     * canonical user ID for an AWS account, an origin access identity for a CloudFront
     * distribution, the registered email address of an AWS account, or a predefined
     * Amazon S3 group. </p> </li> <li> <p> <b>Access</b>: The permission that you want
     * to give to the AWS user that you specified in <code>Grantee</code>. Permissions
     * are granted on the thumbnail files that Elastic Transcoder adds to the bucket.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the thumbnails and metadata for objects that Elastic Transcoder adds to the
     * Amazon S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read
     * the object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL
     * for the thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the thumbnails
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline CreatePipelineRequest& WithThumbnailConfig(const PipelineOutputConfig& value) { SetThumbnailConfig(value); return *this;}

    /**
     * <p>The <code>ThumbnailConfig</code> object specifies several values, including
     * the Amazon S3 bucket in which you want Elastic Transcoder to save thumbnail
     * files, which users you want to have access to the files, the type of access you
     * want users to have, and the storage class that you want to assign to the
     * files.</p> <p>If you specify values for <code>ContentConfig</code>, you must
     * also specify values for <code>ThumbnailConfig</code> even if you don't want to
     * create thumbnails.</p> <p>If you specify values for <code>ContentConfig</code>
     * and <code>ThumbnailConfig</code>, omit the <code>OutputBucket</code> object.</p>
     * <ul> <li> <p> <b>Bucket</b>: The Amazon S3 bucket in which you want Elastic
     * Transcoder to save thumbnail files.</p> </li> <li> <p> <b>Permissions</b>
     * (Optional): The <code>Permissions</code> object specifies which users and/or
     * predefined Amazon S3 groups you want to have access to thumbnail files, and the
     * type of access you want them to have. You can grant permissions to a maximum of
     * 30 users and/or predefined Amazon S3 groups.</p> </li> <li> <p>
     * <b>GranteeType</b>: Specify the type of value that appears in the Grantee
     * object: </p> <ul> <li> <p> <b>Canonical</b>: The value in the
     * <code>Grantee</code> object is either the canonical user ID for an AWS account
     * or an origin access identity for an Amazon CloudFront distribution.</p>
     * <important> <p>A canonical user ID is not the same as an AWS account number.</p>
     * </important> </li> <li> <p> <b>Email</b>: The value in the <code>Grantee</code>
     * object is the registered email address of an AWS account. </p> </li> <li> <p>
     * <b>Group</b>: The value in the <code>Grantee</code> object is one of the
     * following predefined Amazon S3 groups: <code>AllUsers</code>,
     * <code>AuthenticatedUsers</code>, or <code>LogDelivery</code>.</p> </li> </ul>
     * </li> <li> <p> <b>Grantee</b>: The AWS user or group that you want to have
     * access to thumbnail files. To identify the user or group, you can specify the
     * canonical user ID for an AWS account, an origin access identity for a CloudFront
     * distribution, the registered email address of an AWS account, or a predefined
     * Amazon S3 group. </p> </li> <li> <p> <b>Access</b>: The permission that you want
     * to give to the AWS user that you specified in <code>Grantee</code>. Permissions
     * are granted on the thumbnail files that Elastic Transcoder adds to the bucket.
     * Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee can read
     * the thumbnails and metadata for objects that Elastic Transcoder adds to the
     * Amazon S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee can read
     * the object ACL for thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>WRITE_ACP</code>: The grantee can write the ACL
     * for the thumbnails that Elastic Transcoder adds to the Amazon S3 bucket.</p>
     * </li> <li> <p> <code>FULL_CONTROL</code>: The grantee has <code>READ</code>,
     * <code>READ_ACP</code>, and <code>WRITE_ACP</code> permissions for the thumbnails
     * that Elastic Transcoder adds to the Amazon S3 bucket.</p> </li> </ul> </li> <li>
     * <p> <b>StorageClass</b>: The Amazon S3 storage class, <code>Standard</code> or
     * <code>ReducedRedundancy</code>, that you want Elastic Transcoder to assign to
     * the thumbnails that it stores in your Amazon S3 bucket.</p> </li> </ul>
     */
    inline CreatePipelineRequest& WithThumbnailConfig(PipelineOutputConfig&& value) { SetThumbnailConfig(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
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
