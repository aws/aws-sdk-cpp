/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/EbsSnapshotConfiguration.h>
#include <aws/accessanalyzer/model/EcrRepositoryConfiguration.h>
#include <aws/accessanalyzer/model/IamRoleConfiguration.h>
#include <aws/accessanalyzer/model/EfsFileSystemConfiguration.h>
#include <aws/accessanalyzer/model/KmsKeyConfiguration.h>
#include <aws/accessanalyzer/model/RdsDbClusterSnapshotConfiguration.h>
#include <aws/accessanalyzer/model/RdsDbSnapshotConfiguration.h>
#include <aws/accessanalyzer/model/SecretsManagerSecretConfiguration.h>
#include <aws/accessanalyzer/model/S3BucketConfiguration.h>
#include <aws/accessanalyzer/model/SnsTopicConfiguration.h>
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
  class Configuration
  {
  public:
    AWS_ACCESSANALYZER_API Configuration();
    AWS_ACCESSANALYZER_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline const EbsSnapshotConfiguration& GetEbsSnapshot() const{ return m_ebsSnapshot; }

    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline bool EbsSnapshotHasBeenSet() const { return m_ebsSnapshotHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline void SetEbsSnapshot(const EbsSnapshotConfiguration& value) { m_ebsSnapshotHasBeenSet = true; m_ebsSnapshot = value; }

    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline void SetEbsSnapshot(EbsSnapshotConfiguration&& value) { m_ebsSnapshotHasBeenSet = true; m_ebsSnapshot = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline Configuration& WithEbsSnapshot(const EbsSnapshotConfiguration& value) { SetEbsSnapshot(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline Configuration& WithEbsSnapshot(EbsSnapshotConfiguration&& value) { SetEbsSnapshot(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline const EcrRepositoryConfiguration& GetEcrRepository() const{ return m_ecrRepository; }

    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline bool EcrRepositoryHasBeenSet() const { return m_ecrRepositoryHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline void SetEcrRepository(const EcrRepositoryConfiguration& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = value; }

    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline void SetEcrRepository(EcrRepositoryConfiguration&& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline Configuration& WithEcrRepository(const EcrRepositoryConfiguration& value) { SetEcrRepository(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline Configuration& WithEcrRepository(EcrRepositoryConfiguration&& value) { SetEcrRepository(std::move(value)); return *this;}


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
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline const EfsFileSystemConfiguration& GetEfsFileSystem() const{ return m_efsFileSystem; }

    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline bool EfsFileSystemHasBeenSet() const { return m_efsFileSystemHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline void SetEfsFileSystem(const EfsFileSystemConfiguration& value) { m_efsFileSystemHasBeenSet = true; m_efsFileSystem = value; }

    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline void SetEfsFileSystem(EfsFileSystemConfiguration&& value) { m_efsFileSystemHasBeenSet = true; m_efsFileSystem = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline Configuration& WithEfsFileSystem(const EfsFileSystemConfiguration& value) { SetEfsFileSystem(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline Configuration& WithEfsFileSystem(EfsFileSystemConfiguration&& value) { SetEfsFileSystem(std::move(value)); return *this;}


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
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline const RdsDbClusterSnapshotConfiguration& GetRdsDbClusterSnapshot() const{ return m_rdsDbClusterSnapshot; }

    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline bool RdsDbClusterSnapshotHasBeenSet() const { return m_rdsDbClusterSnapshotHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline void SetRdsDbClusterSnapshot(const RdsDbClusterSnapshotConfiguration& value) { m_rdsDbClusterSnapshotHasBeenSet = true; m_rdsDbClusterSnapshot = value; }

    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline void SetRdsDbClusterSnapshot(RdsDbClusterSnapshotConfiguration&& value) { m_rdsDbClusterSnapshotHasBeenSet = true; m_rdsDbClusterSnapshot = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline Configuration& WithRdsDbClusterSnapshot(const RdsDbClusterSnapshotConfiguration& value) { SetRdsDbClusterSnapshot(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline Configuration& WithRdsDbClusterSnapshot(RdsDbClusterSnapshotConfiguration&& value) { SetRdsDbClusterSnapshot(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline const RdsDbSnapshotConfiguration& GetRdsDbSnapshot() const{ return m_rdsDbSnapshot; }

    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline bool RdsDbSnapshotHasBeenSet() const { return m_rdsDbSnapshotHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline void SetRdsDbSnapshot(const RdsDbSnapshotConfiguration& value) { m_rdsDbSnapshotHasBeenSet = true; m_rdsDbSnapshot = value; }

    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline void SetRdsDbSnapshot(RdsDbSnapshotConfiguration&& value) { m_rdsDbSnapshotHasBeenSet = true; m_rdsDbSnapshot = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline Configuration& WithRdsDbSnapshot(const RdsDbSnapshotConfiguration& value) { SetRdsDbSnapshot(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline Configuration& WithRdsDbSnapshot(RdsDbSnapshotConfiguration&& value) { SetRdsDbSnapshot(std::move(value)); return *this;}


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
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline const SnsTopicConfiguration& GetSnsTopic() const{ return m_snsTopic; }

    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline void SetSnsTopic(const SnsTopicConfiguration& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }

    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline void SetSnsTopic(SnsTopicConfiguration&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline Configuration& WithSnsTopic(const SnsTopicConfiguration& value) { SetSnsTopic(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline Configuration& WithSnsTopic(SnsTopicConfiguration&& value) { SetSnsTopic(std::move(value)); return *this;}


    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline const SqsQueueConfiguration& GetSqsQueue() const{ return m_sqsQueue; }

    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline bool SqsQueueHasBeenSet() const { return m_sqsQueueHasBeenSet; }

    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline void SetSqsQueue(const SqsQueueConfiguration& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = value; }

    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline void SetSqsQueue(SqsQueueConfiguration&& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = std::move(value); }

    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline Configuration& WithSqsQueue(const SqsQueueConfiguration& value) { SetSqsQueue(value); return *this;}

    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline Configuration& WithSqsQueue(SqsQueueConfiguration&& value) { SetSqsQueue(std::move(value)); return *this;}

  private:

    EbsSnapshotConfiguration m_ebsSnapshot;
    bool m_ebsSnapshotHasBeenSet = false;

    EcrRepositoryConfiguration m_ecrRepository;
    bool m_ecrRepositoryHasBeenSet = false;

    IamRoleConfiguration m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    EfsFileSystemConfiguration m_efsFileSystem;
    bool m_efsFileSystemHasBeenSet = false;

    KmsKeyConfiguration m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    RdsDbClusterSnapshotConfiguration m_rdsDbClusterSnapshot;
    bool m_rdsDbClusterSnapshotHasBeenSet = false;

    RdsDbSnapshotConfiguration m_rdsDbSnapshot;
    bool m_rdsDbSnapshotHasBeenSet = false;

    SecretsManagerSecretConfiguration m_secretsManagerSecret;
    bool m_secretsManagerSecretHasBeenSet = false;

    S3BucketConfiguration m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    SnsTopicConfiguration m_snsTopic;
    bool m_snsTopicHasBeenSet = false;

    SqsQueueConfiguration m_sqsQueue;
    bool m_sqsQueueHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
