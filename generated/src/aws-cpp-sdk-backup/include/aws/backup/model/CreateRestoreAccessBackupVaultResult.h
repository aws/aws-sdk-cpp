/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/VaultState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class CreateRestoreAccessBackupVaultResult
  {
  public:
    AWS_BACKUP_API CreateRestoreAccessBackupVaultResult() = default;
    AWS_BACKUP_API CreateRestoreAccessBackupVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateRestoreAccessBackupVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that uniquely identifies the created restore access backup vault.</p>
     */
    inline const Aws::String& GetRestoreAccessBackupVaultArn() const { return m_restoreAccessBackupVaultArn; }
    template<typename RestoreAccessBackupVaultArnT = Aws::String>
    void SetRestoreAccessBackupVaultArn(RestoreAccessBackupVaultArnT&& value) { m_restoreAccessBackupVaultArnHasBeenSet = true; m_restoreAccessBackupVaultArn = std::forward<RestoreAccessBackupVaultArnT>(value); }
    template<typename RestoreAccessBackupVaultArnT = Aws::String>
    CreateRestoreAccessBackupVaultResult& WithRestoreAccessBackupVaultArn(RestoreAccessBackupVaultArnT&& value) { SetRestoreAccessBackupVaultArn(std::forward<RestoreAccessBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the restore access backup vault.</p>
     */
    inline VaultState GetVaultState() const { return m_vaultState; }
    inline void SetVaultState(VaultState value) { m_vaultStateHasBeenSet = true; m_vaultState = value; }
    inline CreateRestoreAccessBackupVaultResult& WithVaultState(VaultState value) { SetVaultState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the created restore access backup vault.</p>
     */
    inline const Aws::String& GetRestoreAccessBackupVaultName() const { return m_restoreAccessBackupVaultName; }
    template<typename RestoreAccessBackupVaultNameT = Aws::String>
    void SetRestoreAccessBackupVaultName(RestoreAccessBackupVaultNameT&& value) { m_restoreAccessBackupVaultNameHasBeenSet = true; m_restoreAccessBackupVaultName = std::forward<RestoreAccessBackupVaultNameT>(value); }
    template<typename RestoreAccessBackupVaultNameT = Aws::String>
    CreateRestoreAccessBackupVaultResult& WithRestoreAccessBackupVaultName(RestoreAccessBackupVaultNameT&& value) { SetRestoreAccessBackupVaultName(std::forward<RestoreAccessBackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>&gt;The date and time when the restore access backup vault was created, in
     * Unix format and Coordinated Universal Time </p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    CreateRestoreAccessBackupVaultResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRestoreAccessBackupVaultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoreAccessBackupVaultArn;
    bool m_restoreAccessBackupVaultArnHasBeenSet = false;

    VaultState m_vaultState{VaultState::NOT_SET};
    bool m_vaultStateHasBeenSet = false;

    Aws::String m_restoreAccessBackupVaultName;
    bool m_restoreAccessBackupVaultNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
