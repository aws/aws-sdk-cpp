/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>This is a recovery point which is a child (nested) recovery point of a parent
   * (composite) recovery point. These recovery points can be disassociated from
   * their parent (composite) recovery point, in which case they will no longer be a
   * member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointMember">AWS
   * API Reference</a></p>
   */
  class RecoveryPointMember
  {
  public:
    AWS_BACKUP_API RecoveryPointMember();
    AWS_BACKUP_API RecoveryPointMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline RecoveryPointMember& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline RecoveryPointMember& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) that uniquely identifies a saved
     * resource.</p>
     */
    inline RecoveryPointMember& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>This is the Amazon Web Services resource type that is saved as a recovery
     * point.</p>
     */
    inline RecoveryPointMember& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline RecoveryPointMember& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline RecoveryPointMember& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>This is the name of the backup vault (the logical container in which backups
     * are stored).</p>
     */
    inline RecoveryPointMember& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}

  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
