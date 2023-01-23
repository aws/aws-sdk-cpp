/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DisassociateRecoveryPointRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DisassociateRecoveryPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateRecoveryPoint"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline DisassociateRecoveryPointRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline DisassociateRecoveryPointRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The unique name of an Backup vault.</p>
     */
    inline DisassociateRecoveryPointRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline DisassociateRecoveryPointRequest& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline DisassociateRecoveryPointRequest& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies an Backup recovery
     * point.</p>
     */
    inline DisassociateRecoveryPointRequest& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
