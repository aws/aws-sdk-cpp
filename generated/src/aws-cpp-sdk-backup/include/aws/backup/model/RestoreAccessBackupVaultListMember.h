/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/VaultState.h>
#include <aws/backup/model/LatestRevokeRequest.h>
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
   * <p>Contains information about a restore access backup vault.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RestoreAccessBackupVaultListMember">AWS
   * API Reference</a></p>
   */
  class RestoreAccessBackupVaultListMember
  {
  public:
    AWS_BACKUP_API RestoreAccessBackupVaultListMember() = default;
    AWS_BACKUP_API RestoreAccessBackupVaultListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RestoreAccessBackupVaultListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the restore access backup vault.</p>
     */
    inline const Aws::String& GetRestoreAccessBackupVaultArn() const { return m_restoreAccessBackupVaultArn; }
    inline bool RestoreAccessBackupVaultArnHasBeenSet() const { return m_restoreAccessBackupVaultArnHasBeenSet; }
    template<typename RestoreAccessBackupVaultArnT = Aws::String>
    void SetRestoreAccessBackupVaultArn(RestoreAccessBackupVaultArnT&& value) { m_restoreAccessBackupVaultArnHasBeenSet = true; m_restoreAccessBackupVaultArn = std::forward<RestoreAccessBackupVaultArnT>(value); }
    template<typename RestoreAccessBackupVaultArnT = Aws::String>
    RestoreAccessBackupVaultListMember& WithRestoreAccessBackupVaultArn(RestoreAccessBackupVaultArnT&& value) { SetRestoreAccessBackupVaultArn(std::forward<RestoreAccessBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the restore access backup vault was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    RestoreAccessBackupVaultListMember& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the restore access backup vault was approved.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovalDate() const { return m_approvalDate; }
    inline bool ApprovalDateHasBeenSet() const { return m_approvalDateHasBeenSet; }
    template<typename ApprovalDateT = Aws::Utils::DateTime>
    void SetApprovalDate(ApprovalDateT&& value) { m_approvalDateHasBeenSet = true; m_approvalDate = std::forward<ApprovalDateT>(value); }
    template<typename ApprovalDateT = Aws::Utils::DateTime>
    RestoreAccessBackupVaultListMember& WithApprovalDate(ApprovalDateT&& value) { SetApprovalDate(std::forward<ApprovalDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the restore access backup vault.</p>
     */
    inline VaultState GetVaultState() const { return m_vaultState; }
    inline bool VaultStateHasBeenSet() const { return m_vaultStateHasBeenSet; }
    inline void SetVaultState(VaultState value) { m_vaultStateHasBeenSet = true; m_vaultState = value; }
    inline RestoreAccessBackupVaultListMember& WithVaultState(VaultState value) { SetVaultState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the latest request to revoke access to this backup
     * vault.</p>
     */
    inline const LatestRevokeRequest& GetLatestRevokeRequest() const { return m_latestRevokeRequest; }
    inline bool LatestRevokeRequestHasBeenSet() const { return m_latestRevokeRequestHasBeenSet; }
    template<typename LatestRevokeRequestT = LatestRevokeRequest>
    void SetLatestRevokeRequest(LatestRevokeRequestT&& value) { m_latestRevokeRequestHasBeenSet = true; m_latestRevokeRequest = std::forward<LatestRevokeRequestT>(value); }
    template<typename LatestRevokeRequestT = LatestRevokeRequest>
    RestoreAccessBackupVaultListMember& WithLatestRevokeRequest(LatestRevokeRequestT&& value) { SetLatestRevokeRequest(std::forward<LatestRevokeRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoreAccessBackupVaultArn;
    bool m_restoreAccessBackupVaultArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_approvalDate{};
    bool m_approvalDateHasBeenSet = false;

    VaultState m_vaultState{VaultState::NOT_SET};
    bool m_vaultStateHasBeenSet = false;

    LatestRevokeRequest m_latestRevokeRequest;
    bool m_latestRevokeRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
