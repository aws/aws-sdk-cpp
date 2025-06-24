/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Lifecycle.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class StartCopyJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartCopyJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCopyJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline const Aws::String& GetRecoveryPointArn() const { return m_recoveryPointArn; }
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }
    template<typename RecoveryPointArnT = Aws::String>
    void SetRecoveryPointArn(RecoveryPointArnT&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::forward<RecoveryPointArnT>(value); }
    template<typename RecoveryPointArnT = Aws::String>
    StartCopyJobRequest& WithRecoveryPointArn(RecoveryPointArnT&& value) { SetRecoveryPointArn(std::forward<RecoveryPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetSourceBackupVaultName() const { return m_sourceBackupVaultName; }
    inline bool SourceBackupVaultNameHasBeenSet() const { return m_sourceBackupVaultNameHasBeenSet; }
    template<typename SourceBackupVaultNameT = Aws::String>
    void SetSourceBackupVaultName(SourceBackupVaultNameT&& value) { m_sourceBackupVaultNameHasBeenSet = true; m_sourceBackupVaultName = std::forward<SourceBackupVaultNameT>(value); }
    template<typename SourceBackupVaultNameT = Aws::String>
    StartCopyJobRequest& WithSourceBackupVaultName(SourceBackupVaultNameT&& value) { SetSourceBackupVaultName(std::forward<SourceBackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const { return m_destinationBackupVaultArn; }
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }
    template<typename DestinationBackupVaultArnT = Aws::String>
    void SetDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::forward<DestinationBackupVaultArnT>(value); }
    template<typename DestinationBackupVaultArnT = Aws::String>
    StartCopyJobRequest& WithDestinationBackupVaultArn(DestinationBackupVaultArnT&& value) { SetDestinationBackupVaultArn(std::forward<DestinationBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    StartCopyJobRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    StartCopyJobRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Lifecycle& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = Lifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Lifecycle>
    StartCopyJobRequest& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_sourceBackupVaultName;
    bool m_sourceBackupVaultNameHasBeenSet = false;

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
