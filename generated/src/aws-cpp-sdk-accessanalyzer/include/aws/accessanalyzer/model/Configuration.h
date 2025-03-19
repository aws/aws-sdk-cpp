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
    AWS_ACCESSANALYZER_API Configuration() = default;
    AWS_ACCESSANALYZER_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access control configuration is for an Amazon EBS volume snapshot.</p>
     */
    inline const EbsSnapshotConfiguration& GetEbsSnapshot() const { return m_ebsSnapshot; }
    inline bool EbsSnapshotHasBeenSet() const { return m_ebsSnapshotHasBeenSet; }
    template<typename EbsSnapshotT = EbsSnapshotConfiguration>
    void SetEbsSnapshot(EbsSnapshotT&& value) { m_ebsSnapshotHasBeenSet = true; m_ebsSnapshot = std::forward<EbsSnapshotT>(value); }
    template<typename EbsSnapshotT = EbsSnapshotConfiguration>
    Configuration& WithEbsSnapshot(EbsSnapshotT&& value) { SetEbsSnapshot(std::forward<EbsSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon ECR repository.</p>
     */
    inline const EcrRepositoryConfiguration& GetEcrRepository() const { return m_ecrRepository; }
    inline bool EcrRepositoryHasBeenSet() const { return m_ecrRepositoryHasBeenSet; }
    template<typename EcrRepositoryT = EcrRepositoryConfiguration>
    void SetEcrRepository(EcrRepositoryT&& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = std::forward<EcrRepositoryT>(value); }
    template<typename EcrRepositoryT = EcrRepositoryConfiguration>
    Configuration& WithEcrRepository(EcrRepositoryT&& value) { SetEcrRepository(std::forward<EcrRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an IAM role. </p>
     */
    inline const IamRoleConfiguration& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = IamRoleConfiguration>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = IamRoleConfiguration>
    Configuration& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon EFS file system.</p>
     */
    inline const EfsFileSystemConfiguration& GetEfsFileSystem() const { return m_efsFileSystem; }
    inline bool EfsFileSystemHasBeenSet() const { return m_efsFileSystemHasBeenSet; }
    template<typename EfsFileSystemT = EfsFileSystemConfiguration>
    void SetEfsFileSystem(EfsFileSystemT&& value) { m_efsFileSystemHasBeenSet = true; m_efsFileSystem = std::forward<EfsFileSystemT>(value); }
    template<typename EfsFileSystemT = EfsFileSystemConfiguration>
    Configuration& WithEfsFileSystem(EfsFileSystemT&& value) { SetEfsFileSystem(std::forward<EfsFileSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a KMS key. </p>
     */
    inline const KmsKeyConfiguration& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = KmsKeyConfiguration>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = KmsKeyConfiguration>
    Configuration& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon RDS DB cluster
     * snapshot.</p>
     */
    inline const RdsDbClusterSnapshotConfiguration& GetRdsDbClusterSnapshot() const { return m_rdsDbClusterSnapshot; }
    inline bool RdsDbClusterSnapshotHasBeenSet() const { return m_rdsDbClusterSnapshotHasBeenSet; }
    template<typename RdsDbClusterSnapshotT = RdsDbClusterSnapshotConfiguration>
    void SetRdsDbClusterSnapshot(RdsDbClusterSnapshotT&& value) { m_rdsDbClusterSnapshotHasBeenSet = true; m_rdsDbClusterSnapshot = std::forward<RdsDbClusterSnapshotT>(value); }
    template<typename RdsDbClusterSnapshotT = RdsDbClusterSnapshotConfiguration>
    Configuration& WithRdsDbClusterSnapshot(RdsDbClusterSnapshotT&& value) { SetRdsDbClusterSnapshot(std::forward<RdsDbClusterSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon RDS DB snapshot.</p>
     */
    inline const RdsDbSnapshotConfiguration& GetRdsDbSnapshot() const { return m_rdsDbSnapshot; }
    inline bool RdsDbSnapshotHasBeenSet() const { return m_rdsDbSnapshotHasBeenSet; }
    template<typename RdsDbSnapshotT = RdsDbSnapshotConfiguration>
    void SetRdsDbSnapshot(RdsDbSnapshotT&& value) { m_rdsDbSnapshotHasBeenSet = true; m_rdsDbSnapshot = std::forward<RdsDbSnapshotT>(value); }
    template<typename RdsDbSnapshotT = RdsDbSnapshotConfiguration>
    Configuration& WithRdsDbSnapshot(RdsDbSnapshotT&& value) { SetRdsDbSnapshot(std::forward<RdsDbSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a Secrets Manager secret.</p>
     */
    inline const SecretsManagerSecretConfiguration& GetSecretsManagerSecret() const { return m_secretsManagerSecret; }
    inline bool SecretsManagerSecretHasBeenSet() const { return m_secretsManagerSecretHasBeenSet; }
    template<typename SecretsManagerSecretT = SecretsManagerSecretConfiguration>
    void SetSecretsManagerSecret(SecretsManagerSecretT&& value) { m_secretsManagerSecretHasBeenSet = true; m_secretsManagerSecret = std::forward<SecretsManagerSecretT>(value); }
    template<typename SecretsManagerSecretT = SecretsManagerSecretConfiguration>
    Configuration& WithSecretsManagerSecret(SecretsManagerSecretT&& value) { SetSecretsManagerSecret(std::forward<SecretsManagerSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon S3 bucket. </p>
     */
    inline const S3BucketConfiguration& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = S3BucketConfiguration>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = S3BucketConfiguration>
    Configuration& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon SNS topic</p>
     */
    inline const SnsTopicConfiguration& GetSnsTopic() const { return m_snsTopic; }
    inline bool SnsTopicHasBeenSet() const { return m_snsTopicHasBeenSet; }
    template<typename SnsTopicT = SnsTopicConfiguration>
    void SetSnsTopic(SnsTopicT&& value) { m_snsTopicHasBeenSet = true; m_snsTopic = std::forward<SnsTopicT>(value); }
    template<typename SnsTopicT = SnsTopicConfiguration>
    Configuration& WithSnsTopic(SnsTopicT&& value) { SetSnsTopic(std::forward<SnsTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon SQS queue. </p>
     */
    inline const SqsQueueConfiguration& GetSqsQueue() const { return m_sqsQueue; }
    inline bool SqsQueueHasBeenSet() const { return m_sqsQueueHasBeenSet; }
    template<typename SqsQueueT = SqsQueueConfiguration>
    void SetSqsQueue(SqsQueueT&& value) { m_sqsQueueHasBeenSet = true; m_sqsQueue = std::forward<SqsQueueT>(value); }
    template<typename SqsQueueT = SqsQueueConfiguration>
    Configuration& WithSqsQueue(SqsQueueT&& value) { SetSqsQueue(std::forward<SqsQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for an Amazon S3 directory bucket.</p>
     */
    inline const S3ExpressDirectoryBucketConfiguration& GetS3ExpressDirectoryBucket() const { return m_s3ExpressDirectoryBucket; }
    inline bool S3ExpressDirectoryBucketHasBeenSet() const { return m_s3ExpressDirectoryBucketHasBeenSet; }
    template<typename S3ExpressDirectoryBucketT = S3ExpressDirectoryBucketConfiguration>
    void SetS3ExpressDirectoryBucket(S3ExpressDirectoryBucketT&& value) { m_s3ExpressDirectoryBucketHasBeenSet = true; m_s3ExpressDirectoryBucket = std::forward<S3ExpressDirectoryBucketT>(value); }
    template<typename S3ExpressDirectoryBucketT = S3ExpressDirectoryBucketConfiguration>
    Configuration& WithS3ExpressDirectoryBucket(S3ExpressDirectoryBucketT&& value) { SetS3ExpressDirectoryBucket(std::forward<S3ExpressDirectoryBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a DynamoDB stream.</p>
     */
    inline const DynamodbStreamConfiguration& GetDynamodbStream() const { return m_dynamodbStream; }
    inline bool DynamodbStreamHasBeenSet() const { return m_dynamodbStreamHasBeenSet; }
    template<typename DynamodbStreamT = DynamodbStreamConfiguration>
    void SetDynamodbStream(DynamodbStreamT&& value) { m_dynamodbStreamHasBeenSet = true; m_dynamodbStream = std::forward<DynamodbStreamT>(value); }
    template<typename DynamodbStreamT = DynamodbStreamConfiguration>
    Configuration& WithDynamodbStream(DynamodbStreamT&& value) { SetDynamodbStream(std::forward<DynamodbStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control configuration is for a DynamoDB table or index.</p>
     */
    inline const DynamodbTableConfiguration& GetDynamodbTable() const { return m_dynamodbTable; }
    inline bool DynamodbTableHasBeenSet() const { return m_dynamodbTableHasBeenSet; }
    template<typename DynamodbTableT = DynamodbTableConfiguration>
    void SetDynamodbTable(DynamodbTableT&& value) { m_dynamodbTableHasBeenSet = true; m_dynamodbTable = std::forward<DynamodbTableT>(value); }
    template<typename DynamodbTableT = DynamodbTableConfiguration>
    Configuration& WithDynamodbTable(DynamodbTableT&& value) { SetDynamodbTable(std::forward<DynamodbTableT>(value)); return *this;}
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
