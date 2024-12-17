/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/IndexStatus.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This is a recovery point that has an associated backup index.</p> <p>Only
   * recovery points with a backup index can be included in a search.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/IndexedRecoveryPoint">AWS
   * API Reference</a></p>
   */
  class IndexedRecoveryPoint
  {
  public:
    AWS_BACKUP_API IndexedRecoveryPoint();
    AWS_BACKUP_API IndexedRecoveryPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API IndexedRecoveryPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>
     * </p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }
    inline IndexedRecoveryPoint& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}
    inline IndexedRecoveryPoint& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}
    inline IndexedRecoveryPoint& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string of the Amazon Resource Name (ARN) that uniquely identifies the
     * source resource.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = value; }
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::move(value); }
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn.assign(value); }
    inline IndexedRecoveryPoint& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}
    inline IndexedRecoveryPoint& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}
    inline IndexedRecoveryPoint& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specifies the IAM role ARN used for this operation.</p> <p>For example,
     * arn:aws:iam::123456789012:role/S3Access</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline IndexedRecoveryPoint& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline IndexedRecoveryPoint& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline IndexedRecoveryPoint& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup was created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationDate() const{ return m_backupCreationDate; }
    inline bool BackupCreationDateHasBeenSet() const { return m_backupCreationDateHasBeenSet; }
    inline void SetBackupCreationDate(const Aws::Utils::DateTime& value) { m_backupCreationDateHasBeenSet = true; m_backupCreationDate = value; }
    inline void SetBackupCreationDate(Aws::Utils::DateTime&& value) { m_backupCreationDateHasBeenSet = true; m_backupCreationDate = std::move(value); }
    inline IndexedRecoveryPoint& WithBackupCreationDate(const Aws::Utils::DateTime& value) { SetBackupCreationDate(value); return *this;}
    inline IndexedRecoveryPoint& WithBackupCreationDate(Aws::Utils::DateTime&& value) { SetBackupCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the indexed recovery point.</p> <ul> <li> <p>
     * <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li> <p>
     * <code>S3</code> for Amazon Simple Storage Service (Amazon S3)</p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline IndexedRecoveryPoint& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline IndexedRecoveryPoint& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline IndexedRecoveryPoint& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup index was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCreationDate() const{ return m_indexCreationDate; }
    inline bool IndexCreationDateHasBeenSet() const { return m_indexCreationDateHasBeenSet; }
    inline void SetIndexCreationDate(const Aws::Utils::DateTime& value) { m_indexCreationDateHasBeenSet = true; m_indexCreationDate = value; }
    inline void SetIndexCreationDate(Aws::Utils::DateTime&& value) { m_indexCreationDateHasBeenSet = true; m_indexCreationDate = std::move(value); }
    inline IndexedRecoveryPoint& WithIndexCreationDate(const Aws::Utils::DateTime& value) { SetIndexCreationDate(value); return *this;}
    inline IndexedRecoveryPoint& WithIndexCreationDate(Aws::Utils::DateTime&& value) { SetIndexCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status for the backup index associated with the specified
     * recovery point.</p> <p>Statuses are: <code>PENDING</code> | <code>ACTIVE</code>
     * | <code>FAILED</code> | <code>DELETING</code> </p> <p>A recovery point with an
     * index that has the status of <code>ACTIVE</code> can be included in a
     * search.</p>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }
    inline IndexedRecoveryPoint& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline IndexedRecoveryPoint& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the form of a detailed message explaining the status of a backup
     * index associated with the recovery point.</p>
     */
    inline const Aws::String& GetIndexStatusMessage() const{ return m_indexStatusMessage; }
    inline bool IndexStatusMessageHasBeenSet() const { return m_indexStatusMessageHasBeenSet; }
    inline void SetIndexStatusMessage(const Aws::String& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = value; }
    inline void SetIndexStatusMessage(Aws::String&& value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage = std::move(value); }
    inline void SetIndexStatusMessage(const char* value) { m_indexStatusMessageHasBeenSet = true; m_indexStatusMessage.assign(value); }
    inline IndexedRecoveryPoint& WithIndexStatusMessage(const Aws::String& value) { SetIndexStatusMessage(value); return *this;}
    inline IndexedRecoveryPoint& WithIndexStatusMessage(Aws::String&& value) { SetIndexStatusMessage(std::move(value)); return *this;}
    inline IndexedRecoveryPoint& WithIndexStatusMessage(const char* value) { SetIndexStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies the backup vault where the recovery point
     * index is stored.</p> <p>For example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }
    inline IndexedRecoveryPoint& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}
    inline IndexedRecoveryPoint& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}
    inline IndexedRecoveryPoint& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_backupCreationDate;
    bool m_backupCreationDateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_indexCreationDate;
    bool m_indexCreationDateHasBeenSet = false;

    IndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet = false;

    Aws::String m_indexStatusMessage;
    bool m_indexStatusMessageHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
