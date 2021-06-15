/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/IamRoleConfiguration.h>
#include <aws/accessanalyzer/model/KmsKeyConfiguration.h>
#include <aws/accessanalyzer/model/S3BucketConfiguration.h>
#include <aws/accessanalyzer/model/SecretsManagerSecretConfiguration.h>
#include <aws/accessanalyzer/model/SqsQueueConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Access control configuration structures for your resource. You specify the
   * configuration as a type-value pair. You can specify only one type of access
   * control configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Configuration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API Configuration
  {
  public:
    Configuration();
    Configuration(Aws::Utils::Json::JsonView jsonValue);
    Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline const IamRoleConfiguration& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline void SetIamRole(const IamRoleConfiguration& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline void SetIamRole(IamRoleConfiguration&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline Configuration& WithIamRole(const IamRoleConfiguration& value) { SetIamRole(value); return *this;}

    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline Configuration& WithIamRole(IamRoleConfiguration&& value) { SetIamRole(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline const KmsKeyConfiguration& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline void SetKmsKey(const KmsKeyConfiguration& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline void SetKmsKey(KmsKeyConfiguration&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline Configuration& WithKmsKey(const KmsKeyConfiguration& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline Configuration& WithKmsKey(KmsKeyConfiguration&& value) { SetKmsKey(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for an Amazon S3 Bucket. </p>
     */
    inline const S3BucketConfiguration& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The access control configuration is for an Amazon S3 Bucket. </p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon S3 Bucket. </p>
     */
    inline void SetS3Bucket(const S3BucketConfiguration& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The access control configuration is for an Amazon S3 Bucket. </p>
     */
    inline void SetS3Bucket(S3BucketConfiguration&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon S3 Bucket. </p>
     */
    inline Configuration& WithS3Bucket(const S3BucketConfiguration& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon S3 Bucket. </p>
     */
    inline Configuration& WithS3Bucket(S3BucketConfiguration&& value) { SetS3Bucket(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline const SecretsManagerSecretConfiguration& GetSecretsManagerSecret() const{ return m_secretsManagerSecret; }

    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline bool SecretsManagerSecretHasBeenSet() const { return m_secretsManagerSecretHasBeenSet; }

    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline void SetSecretsManagerSecret(const SecretsManagerSecretConfiguration& value) { m_secretsManagerSecretHasBeenSet = true; m_secretsManagerSecret = value; }

    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline void SetSecretsManagerSecret(SecretsManagerSecretConfiguration&& value) { m_secretsManagerSecretHasBeenSet = true; m_secretsManagerSecret = std::move(value); }

    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline Configuration& WithSecretsManagerSecret(const SecretsManagerSecretConfiguration& value) { SetSecretsManagerSecret(value); return *this;}

    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline Configuration& WithSecretsManagerSecret(SecretsManagerSecretConfiguration&& value) { SetSecretsManagerSecret(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for an SQS queue. </p>
     */
    inline const SqsQueueConfiguration& GetSqsQueue() const{ return m_sqsQueue; }

    /**
     * <p>The access control configuration is for an SQS queue. </p>
     */
    inline bool SqsQueueHasBeenSet() const { return m_sqsQueueHasBeenSet; }

    /**
     * <p>The access control configuration is for an SQS queue. </p>
     */
    inline void SetSqsQueue(const SqsQueueConfiguration& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = value; }

    /**
     * <p>The access control configuration is for an SQS queue. </p>
     */
    inline void SetSqsQueue(SqsQueueConfiguration&& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = std::move(value); }

    /**
     * <p>The access control configuration is for an SQS queue. </p>
     */
    inline Configuration& WithSqsQueue(const SqsQueueConfiguration& value) { SetSqsQueue(value); return *this;}

    /**
     * <p>The access control configuration is for an SQS queue. </p>
     */
    inline Configuration& WithSqsQueue(SqsQueueConfiguration&& value) { SetSqsQueue(std::move(value)); return *this;}

  private:

    IamRoleConfiguration m_iamRole;
    bool m_iamRoleHasBeenSet;

    KmsKeyConfiguration m_kmsKey;
    bool m_kmsKeyHasBeenSet;

    S3BucketConfiguration m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    SecretsManagerSecretConfiguration m_secretsManagerSecret;
    bool m_secretsManagerSecretHasBeenSet;

    SqsQueueConfiguration m_sqsQueue;
    bool m_sqsQueueHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
