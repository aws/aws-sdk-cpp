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
#include <aws/accessanalyzer/model/S3ExpressDirectoryBucketConfiguration.h>
#include <aws/accessanalyzer/model/DynamodbStreamConfiguration.h>
#include <aws/accessanalyzer/model/DynamodbTableConfiguration.h>
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


    ///@{
    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline const EbsSnapshotConfiguration& GetEbsSnapshot() const{ return m_ebsSnapshot; }
    inline bool EbsSnapshotHasBeenSet() const { return m_ebsSnapshotHasBeenSet; }
    inline void SetEbsSnapshot(const EbsSnapshotConfiguration& value) { m_ebsSnapshotHasBeenSet = true; m_ebsSnapshot = value; }
    inline void SetEbsSnapshot(EbsSnapshotConfiguration&& value) { m_ebsSnapshotHasBeenSet = true; m_ebsSnapshot = std::move(value); }
    inline Configuration& WithEbsSnapshot(const EbsSnapshotConfiguration& value) { SetEbsSnapshot(value); return *this;}
    inline Configuration& WithEbsSnapshot(EbsSnapshotConfiguration&& value) { SetEbsSnapshot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline const EcrRepositoryConfiguration& GetEcrRepository() const{ return m_ecrRepository; }
    inline bool EcrRepositoryHasBeenSet() const { return m_ecrRepositoryHasBeenSet; }
    inline void SetEcrRepository(const EcrRepositoryConfiguration& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = value; }
    inline void SetEcrRepository(EcrRepositoryConfiguration&& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = std::move(value); }
    inline Configuration& WithEcrRepository(const EcrRepositoryConfiguration& value) { SetEcrRepository(value); return *this;}
    inline Configuration& WithEcrRepository(EcrRepositoryConfiguration&& value) { SetEcrRepository(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline const IamRoleConfiguration& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const IamRoleConfiguration& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(IamRoleConfiguration&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline Configuration& WithIamRole(const IamRoleConfiguration& value) { SetIamRole(value); return *this;}
    inline Configuration& WithIamRole(IamRoleConfiguration&& value) { SetIamRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline const EfsFileSystemConfiguration& GetEfsFileSystem() const{ return m_efsFileSystem; }
    inline bool EfsFileSystemHasBeenSet() const { return m_efsFileSystemHasBeenSet; }
    inline void SetEfsFileSystem(const EfsFileSystemConfiguration& value) { m_efsFileSystemHasBeenSet = true; m_efsFileSystem = value; }
    inline void SetEfsFileSystem(EfsFileSystemConfiguration&& value) { m_efsFileSystemHasBeenSet = true; m_efsFileSystem = std::move(value); }
    inline Configuration& WithEfsFileSystem(const EfsFileSystemConfiguration& value) { SetEfsFileSystem(value); return *this;}
    inline Configuration& WithEfsFileSystem(EfsFileSystemConfiguration&& value) { SetEfsFileSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline const KmsKeyConfiguration& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const KmsKeyConfiguration& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(KmsKeyConfiguration&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline Configuration& WithKmsKey(const KmsKeyConfiguration& value) { SetKmsKey(value); return *this;}
    inline Configuration& WithKmsKey(KmsKeyConfiguration&& value) { SetKmsKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline const RdsDbClusterSnapshotConfiguration& GetRdsDbClusterSnapshot() const{ return m_rdsDbClusterSnapshot; }
    inline bool RdsDbClusterSnapshotHasBeenSet() const { return m_rdsDbClusterSnapshotHasBeenSet; }
    inline void SetRdsDbClusterSnapshot(const RdsDbClusterSnapshotConfiguration& value) { m_rdsDbClusterSnapshotHasBeenSet = true; m_rdsDbClusterSnapshot = value; }
    inline void SetRdsDbClusterSnapshot(RdsDbClusterSnapshotConfiguration&& value) { m_rdsDbClusterSnapshotHasBeenSet = true; m_rdsDbClusterSnapshot = std::move(value); }
    inline Configuration& WithRdsDbClusterSnapshot(const RdsDbClusterSnapshotConfiguration& value) { SetRdsDbClusterSnapshot(value); return *this;}
    inline Configuration& WithRdsDbClusterSnapshot(RdsDbClusterSnapshotConfiguration&& value) { SetRdsDbClusterSnapshot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline const RdsDbSnapshotConfiguration& GetRdsDbSnapshot() const{ return m_rdsDbSnapshot; }
    inline bool RdsDbSnapshotHasBeenSet() const { return m_rdsDbSnapshotHasBeenSet; }
    inline void SetRdsDbSnapshot(const RdsDbSnapshotConfiguration& value) { m_rdsDbSnapshotHasBeenSet = true; m_rdsDbSnapshot = value; }
    inline void SetRdsDbSnapshot(RdsDbSnapshotConfiguration&& value) { m_rdsDbSnapshotHasBeenSet = true; m_rdsDbSnapshot = std::move(value); }
    inline Configuration& WithRdsDbSnapshot(const RdsDbSnapshotConfiguration& value) { SetRdsDbSnapshot(value); return *this;}
    inline Configuration& WithRdsDbSnapshot(RdsDbSnapshotConfiguration&& value) { SetRdsDbSnapshot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline const SecretsManagerSecretConfiguration& GetSecretsManagerSecret() const{ return m_secretsManagerSecret; }
    inline bool SecretsManagerSecretHasBeenSet() const { return m_secretsManagerSecretHasBeenSet; }
    inline void SetSecretsManagerSecret(const SecretsManagerSecretConfiguration& value) { m_secretsManagerSecretHasBeenSet = true; m_secretsManagerSecret = value; }
    inline void SetSecretsManagerSecret(SecretsManagerSecretConfiguration&& value) { m_secretsManagerSecretHasBeenSet = true; m_secretsManagerSecret = std::move(value); }
    inline Configuration& WithSecretsManagerSecret(const SecretsManagerSecretConfiguration& value) { SetSecretsManagerSecret(value); return *this;}
    inline Configuration& WithSecretsManagerSecret(SecretsManagerSecretConfiguration&& value) { SetSecretsManagerSecret(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon S3 bucket. </p>
     */
    inline const S3BucketConfiguration& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const S3BucketConfiguration& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(S3BucketConfiguration&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline Configuration& WithS3Bucket(const S3BucketConfiguration& value) { SetS3Bucket(value); return *this;}
    inline Configuration& WithS3Bucket(S3BucketConfiguration&& value) { SetS3Bucket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline const SnsTopicConfiguration& GetSnsTopic() const{ return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    inline void SetSnsTopic(const SnsTopicConfiguration& value) { m_snsTopicHasBeenSet = true; m_snsTopic = value; }
    inline void SetSnsTopic(SnsTopicConfiguration&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::move(value); }
    inline Configuration& WithSnsTopic(const SnsTopicConfiguration& value) { SetSnsTopic(value); return *this;}
    inline Configuration& WithSnsTopic(SnsTopicConfiguration&& value) { SetSnsTopic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline const SqsQueueConfiguration& GetSqsQueue() const{ return m_sqsQueue; }
    inline bool SqsQueueHasBeenSet() const { return m_sqsQueueHasBeenSet; }
    inline void SetSqsQueue(const SqsQueueConfiguration& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = value; }
    inline void SetSqsQueue(SqsQueueConfiguration&& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = std::move(value); }
    inline Configuration& WithSqsQueue(const SqsQueueConfiguration& value) { SetSqsQueue(value); return *this;}
    inline Configuration& WithSqsQueue(SqsQueueConfiguration&& value) { SetSqsQueue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon S3 directory bucket.</p>
     */
    inline const S3ExpressDirectoryBucketConfiguration& GetS3ExpressDirectoryBucket() const{ return m_s3ExpressDirectoryBucket; }
    inline bool S3ExpressDirectoryBucketHasBeenSet() const { return m_s3ExpressDirectoryBucketHasBeenSet; }
    inline void SetS3ExpressDirectoryBucket(const S3ExpressDirectoryBucketConfiguration& value) { m_s3ExpressDirectoryBucketHasBeenSet = true; m_s3ExpressDirectoryBucket = value; }
    inline void SetS3ExpressDirectoryBucket(S3ExpressDirectoryBucketConfiguration&& value) { m_s3ExpressDirectoryBucketHasBeenSet = true; m_s3ExpressDirectoryBucket = std::move(value); }
    inline Configuration& WithS3ExpressDirectoryBucket(const S3ExpressDirectoryBucketConfiguration& value) { SetS3ExpressDirectoryBucket(value); return *this;}
    inline Configuration& WithS3ExpressDirectoryBucket(S3ExpressDirectoryBucketConfiguration&& value) { SetS3ExpressDirectoryBucket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a DynamoDB stream.</p>
     */
    inline const DynamodbStreamConfiguration& GetDynamodbStream() const{ return m_dynamodbStream; }
    inline bool DynamodbStreamHasBeenSet() const { return m_dynamodbStreamHasBeenSet; }
    inline void SetDynamodbStream(const DynamodbStreamConfiguration& value) { m_dynamodbStreamHasBeenSet = true; m_dynamodbStream = value; }
    inline void SetDynamodbStream(DynamodbStreamConfiguration&& value) { m_dynamodbStreamHasBeenSet = true; m_dynamodbStream = std::move(value); }
    inline Configuration& WithDynamodbStream(const DynamodbStreamConfiguration& value) { SetDynamodbStream(value); return *this;}
    inline Configuration& WithDynamodbStream(DynamodbStreamConfiguration&& value) { SetDynamodbStream(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a DynamoDB table or index.</p>
     */
    inline const DynamodbTableConfiguration& GetDynamodbTable() const{ return m_dynamodbTable; }
    inline bool DynamodbTableHasBeenSet() const { return m_dynamodbTableHasBeenSet; }
    inline void SetDynamodbTable(const DynamodbTableConfiguration& value) { m_dynamodbTableHasBeenSet = true; m_dynamodbTable = value; }
    inline void SetDynamodbTable(DynamodbTableConfiguration&& value) { m_dynamodbTableHasBeenSet = true; m_dynamodbTable = std::move(value); }
    inline Configuration& WithDynamodbTable(const DynamodbTableConfiguration& value) { SetDynamodbTable(value); return *this;}
    inline Configuration& WithDynamodbTable(DynamodbTableConfiguration&& value) { SetDynamodbTable(std::move(value)); return *this;}
    ///@}
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

    S3ExpressDirectoryBucketConfiguration m_s3ExpressDirectoryBucket;
    bool m_s3ExpressDirectoryBucketHasBeenSet = false;

    DynamodbStreamConfiguration m_dynamodbStream;
    bool m_dynamodbStreamHasBeenSet = false;

    DynamodbTableConfiguration m_dynamodbTable;
    bool m_dynamodbTableHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
