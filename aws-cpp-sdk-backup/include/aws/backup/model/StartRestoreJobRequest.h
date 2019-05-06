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
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class AWS_BACKUP_API StartRestoreJobRequest : public BackupRequest
  {
  public:
    StartRestoreJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRestoreJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline StartRestoreJobRequest& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline StartRestoreJobRequest& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline StartRestoreJobRequest& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of metadata key-value pairs. Lists the metadata that the recovery point
     * was created with.</p>
     */
    inline StartRestoreJobRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartRestoreJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartRestoreJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that AWS Backup uses to create
     * the target recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartRestoreJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline StartRestoreJobRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline StartRestoreJobRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer chosen string that can be used to distinguish between calls to
     * <code>StartRestoreJob</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>StartRestoreJob</code> multiple times with the same
     * idempotency token within one hour, AWS Backup recognizes that you are requesting
     * only one restore job and initiates only one. If you change the idempotency token
     * for each call, AWS Backup recognizes that you are requesting to start multiple
     * restores. </p>
     */
    inline StartRestoreJobRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p>
     * </li> <li> <p> <code>SGW</code> for AWS Storage Gateway</p> </li> <li> <p>
     * <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>DDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EFS</code> for
     * Amazon Elastic File System</p> </li> </ul>
     */
    inline StartRestoreJobRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
