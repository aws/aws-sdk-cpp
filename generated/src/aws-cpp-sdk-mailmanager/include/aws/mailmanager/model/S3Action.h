/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>Writes the MIME content of the email to an S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/S3Action">AWS
   * API Reference</a></p>
   */
  class S3Action
  {
  public:
    AWS_MAILMANAGER_API S3Action();
    AWS_MAILMANAGER_API S3Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API S3Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified the bucket has
     * been deleted.</p>
     */
    inline const ActionFailurePolicy& GetActionFailurePolicy() const{ return m_actionFailurePolicy; }

    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified the bucket has
     * been deleted.</p>
     */
    inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }

    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified the bucket has
     * been deleted.</p>
     */
    inline void SetActionFailurePolicy(const ActionFailurePolicy& value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = value; }

    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified the bucket has
     * been deleted.</p>
     */
    inline void SetActionFailurePolicy(ActionFailurePolicy&& value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = std::move(value); }

    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified the bucket has
     * been deleted.</p>
     */
    inline S3Action& WithActionFailurePolicy(const ActionFailurePolicy& value) { SetActionFailurePolicy(value); return *this;}

    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the specified the bucket has
     * been deleted.</p>
     */
    inline S3Action& WithActionFailurePolicy(ActionFailurePolicy&& value) { SetActionFailurePolicy(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline S3Action& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline S3Action& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Role to use while writing to S3.
     * This role must have access to the s3:PutObject, kms:Encrypt, and
     * kms:GenerateDataKey APIs for the given bucket.</p>
     */
    inline S3Action& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline S3Action& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline S3Action& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The bucket name of the S3 bucket to write to.</p>
     */
    inline S3Action& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline S3Action& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline S3Action& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The S3 prefix to use for the write to the s3 bucket.</p>
     */
    inline S3Action& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline const Aws::String& GetS3SseKmsKeyId() const{ return m_s3SseKmsKeyId; }

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline void SetS3SseKmsKeyId(const Aws::String& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = value; }

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline void SetS3SseKmsKeyId(Aws::String&& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = std::move(value); }

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline void SetS3SseKmsKeyId(const char* value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId.assign(value); }

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline S3Action& WithS3SseKmsKeyId(const Aws::String& value) { SetS3SseKmsKeyId(value); return *this;}

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline S3Action& WithS3SseKmsKeyId(Aws::String&& value) { SetS3SseKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS Key ID to use to encrypt the message in S3.</p>
     */
    inline S3Action& WithS3SseKmsKeyId(const char* value) { SetS3SseKmsKeyId(value); return *this;}

  private:

    ActionFailurePolicy m_actionFailurePolicy;
    bool m_actionFailurePolicyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_s3SseKmsKeyId;
    bool m_s3SseKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
