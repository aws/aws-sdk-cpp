/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Pipeline
  {
  public:
    AWS_ELASTICTRANSCODER_API Pipeline() = default;
    AWS_ELASTICTRANSCODER_API Pipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the pipeline. You use this value to identify the pipeline
     * in which you want to perform a variety of operations, such as creating a job or
     * a preset.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Pipeline& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the pipeline.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Pipeline& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipeline. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p> <p>Constraints: Maximum 40
     * characters</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Pipeline& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Pipeline& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket from which Elastic Transcoder gets media files for
     * transcoding and the graphics files, if any, that you want to use for
     * watermarks.</p>
     */
    inline const Aws::String& GetInputBucket() const { return m_inputBucket; }
    inline bool InputBucketHasBeenSet() const { return m_inputBucketHasBeenSet; }
    template<typename InputBucketT = Aws::String>
    void SetInputBucket(InputBucketT&& value) { m_inputBucketHasBeenSet = true; m_inputBucket = std::forward<InputBucketT>(value); }
    template<typename InputBucketT = Aws::String>
    Pipeline& WithInputBucket(InputBucketT&& value) { SetInputBucket(std::forward<InputBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket in which you want Elastic Transcoder to save transcoded
     * files, thumbnails, and playlists. Either you specify this value, or you specify
     * both <code>ContentConfig</code> and <code>ThumbnailConfig</code>.</p>
     */
    inline const Aws::String& GetOutputBucket() const { return m_outputBucket; }
    inline bool OutputBucketHasBeenSet() const { return m_outputBucketHasBeenSet; }
    template<typename OutputBucketT = Aws::String>
    void SetOutputBucket(OutputBucketT&& value) { m_outputBucketHasBeenSet = true; m_outputBucket = std::forward<OutputBucketT>(value); }
    template<typename OutputBucketT = Aws::String>
    Pipeline& WithOutputBucket(OutputBucketT&& value) { SetOutputBucket(std::forward<OutputBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Amazon Resource Name (ARN) for the role that Elastic Transcoder uses
     * to transcode jobs for this pipeline.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    Pipeline& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Key Management Service (AWS KMS) key that you want to use with this
     * pipeline.</p> <p>If you use either <code>s3</code> or <code>s3-aws-kms</code> as
     * your <code>Encryption:Mode</code>, you don't need to provide a key with your job
     * because a default key, known as an AWS-KMS key, is created for you
     * automatically. You need to provide an AWS-KMS key only if you want to use a
     * non-default AWS-KMS key, or if you are using an <code>Encryption:Mode</code> of
     * <code>aes-cbc-pkcs7</code>, <code>aes-ctr</code>, or <code>aes-gcm</code>.</p>
     */
    inline const Aws::String& GetAwsKmsKeyArn() const { return m_awsKmsKeyArn; }
    inline bool AwsKmsKeyArnHasBeenSet() const { return m_awsKmsKeyArnHasBeenSet; }
    template<typename AwsKmsKeyArnT = Aws::String>
    void SetAwsKmsKeyArn(AwsKmsKeyArnT&& value) { m_awsKmsKeyArnHasBeenSet = true; m_awsKmsKeyArn = std::forward<AwsKmsKeyArnT>(value); }
    template<typename AwsKmsKeyArnT = Aws::String>
    Pipeline& WithAwsKmsKeyArn(AwsKmsKeyArnT&& value) { SetAwsKmsKeyArn(std::forward<AwsKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) topic that you want to
     * notify to report job status.</p>  <p>To receive notifications, you
     * must also subscribe to the new topic in the Amazon SNS console.</p> 
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
    inline const Notifications& GetNotifications() const { return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    template<typename NotificationsT = Notifications>
    void SetNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications = std::forward<NotificationsT>(value); }
    template<typename NotificationsT = Notifications>
    Pipeline& WithNotifications(NotificationsT&& value) { SetNotifications(std::forward<NotificationsT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const PipelineOutputConfig& GetContentConfig() const { return m_contentConfig; }
    inline bool ContentConfigHasBeenSet() const { return m_contentConfigHasBeenSet; }
    template<typename ContentConfigT = PipelineOutputConfig>
    void SetContentConfig(ContentConfigT&& value) { m_contentConfigHasBeenSet = true; m_contentConfig = std::forward<ContentConfigT>(value); }
    template<typename ContentConfigT = PipelineOutputConfig>
    Pipeline& WithContentConfig(ContentConfigT&& value) { SetContentConfig(std::forward<ContentConfigT>(value)); return *this;}
    ///@}

    ///@{
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
     * CloudFront distribution.</p>  <p>A canonical user ID is not the same
     * as an AWS account number.</p>  </li> <li> <p> <code>Email</code>:
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
    inline const PipelineOutputConfig& GetThumbnailConfig() const { return m_thumbnailConfig; }
    inline bool ThumbnailConfigHasBeenSet() const { return m_thumbnailConfigHasBeenSet; }
    template<typename ThumbnailConfigT = PipelineOutputConfig>
    void SetThumbnailConfig(ThumbnailConfigT&& value) { m_thumbnailConfigHasBeenSet = true; m_thumbnailConfig = std::forward<ThumbnailConfigT>(value); }
    template<typename ThumbnailConfigT = PipelineOutputConfig>
    Pipeline& WithThumbnailConfig(ThumbnailConfigT&& value) { SetThumbnailConfig(std::forward<ThumbnailConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_inputBucket;
    bool m_inputBucketHasBeenSet = false;

    Aws::String m_outputBucket;
    bool m_outputBucketHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_awsKmsKeyArn;
    bool m_awsKmsKeyArnHasBeenSet = false;

    Notifications m_notifications;
    bool m_notificationsHasBeenSet = false;

    PipelineOutputConfig m_contentConfig;
    bool m_contentConfigHasBeenSet = false;

    PipelineOutputConfig m_thumbnailConfig;
    bool m_thumbnailConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
