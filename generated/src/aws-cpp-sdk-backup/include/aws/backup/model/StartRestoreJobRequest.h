/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartRestoreJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartRestoreJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRestoreJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }
    inline StartRestoreJobRequest& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline StartRestoreJobRequest& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline StartRestoreJobRequest& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of metadata key-value pairs.</p> <p>You can get configuration metadata
     * about a resource at the time it was backed up by calling
     * <code>GetRecoveryPointRestoreMetadata</code>. However, values in addition to
     * those provided by <code>GetRecoveryPointRestoreMetadata</code> might be required
     * to restore a resource. For example, you might need to provide a new resource
     * name if the original already exists.</p> <p>For more information about the
     * metadata for each resource, see the following:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-aur.html#aur-restore-cli">Metadata
     * for Amazon Aurora</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-docdb.html#docdb-restore-cli">Metadata
     * for Amazon DocumentDB</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restore-application-stacks.html#restoring-cfn-cli">Metadata
     * for CloudFormation</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-dynamodb.html#ddb-restore-cli">Metadata
     * for Amazon DynamoDB</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-ebs.html#ebs-restore-cli">
     * Metadata for Amazon EBS</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-ec2.html#restoring-ec2-cli">Metadata
     * for Amazon EC2</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-efs.html#efs-restore-cli">Metadata
     * for Amazon EFS</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-fsx.html#fsx-restore-cli">Metadata
     * for Amazon FSx</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-nep.html#nep-restore-cli">Metadata
     * for Amazon Neptune</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-rds.html#rds-restore-cli">Metadata
     * for Amazon RDS</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/redshift-restores.html#redshift-restore-api">Metadata
     * for Amazon Redshift</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-storage-gateway.html#restoring-sgw-cli">Metadata
     * for Storage Gateway</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-s3.html#s3-restore-cli">Metadata
     * for Amazon S3</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/timestream-restore.html#timestream-restore-api">Metadata
     * for Amazon Timestream</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/restoring-vm.html#vm-restore-cli">Metadata
     * for virtual machines</a> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline StartRestoreJobRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline StartRestoreJobRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline StartRestoreJobRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline StartRestoreJobRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline StartRestoreJobRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline StartRestoreJobRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline StartRestoreJobRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Backup uses to create the
     * target resource; for example:
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline StartRestoreJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline StartRestoreJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline StartRestoreJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartRestoreJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline StartRestoreJobRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline StartRestoreJobRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline StartRestoreJobRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Starts a job to restore a recovery point for one of the following
     * resources:</p> <ul> <li> <p> <code>Aurora</code> - Amazon Aurora</p> </li> <li>
     * <p> <code>DocumentDB</code> - Amazon DocumentDB</p> </li> <li> <p>
     * <code>CloudFormation</code> - CloudFormation</p> </li> <li> <p>
     * <code>DynamoDB</code> - Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code> -
     * Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> - Amazon Elastic
     * Compute Cloud</p> </li> <li> <p> <code>EFS</code> - Amazon Elastic File
     * System</p> </li> <li> <p> <code>FSx</code> - Amazon FSx</p> </li> <li> <p>
     * <code>Neptune</code> - Amazon Neptune</p> </li> <li> <p> <code>RDS</code> -
     * Amazon Relational Database Service</p> </li> <li> <p> <code>Redshift</code> -
     * Amazon Redshift</p> </li> <li> <p> <code>Storage Gateway</code> - Storage
     * Gateway</p> </li> <li> <p> <code>S3</code> - Amazon Simple Storage Service</p>
     * </li> <li> <p> <code>Timestream</code> - Amazon Timestream</p> </li> <li> <p>
     * <code>VirtualMachine</code> - Virtual machines</p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline StartRestoreJobRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline StartRestoreJobRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline StartRestoreJobRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional parameter. If this equals <code>True</code>, tags
     * included in the backup will be copied to the restored resource.</p> <p>This can
     * only be applied to backups created through Backup.</p>
     */
    inline bool GetCopySourceTagsToRestoredResource() const{ return m_copySourceTagsToRestoredResource; }
    inline bool CopySourceTagsToRestoredResourceHasBeenSet() const { return m_copySourceTagsToRestoredResourceHasBeenSet; }
    inline void SetCopySourceTagsToRestoredResource(bool value) { m_copySourceTagsToRestoredResourceHasBeenSet = true; m_copySourceTagsToRestoredResource = value; }
    inline StartRestoreJobRequest& WithCopySourceTagsToRestoredResource(bool value) { SetCopySourceTagsToRestoredResource(value); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    bool m_copySourceTagsToRestoredResource;
    bool m_copySourceTagsToRestoredResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
