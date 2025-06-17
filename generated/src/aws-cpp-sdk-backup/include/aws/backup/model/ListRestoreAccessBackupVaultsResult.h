/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/RestoreAccessBackupVaultListMember.h>
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
  class ListRestoreAccessBackupVaultsResult
  {
  public:
    AWS_BACKUP_API ListRestoreAccessBackupVaultsResult() = default;
    AWS_BACKUP_API ListRestoreAccessBackupVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreAccessBackupVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use in a subsequent request to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRestoreAccessBackupVaultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of restore access backup vaults associated with the specified backup
     * vault.</p>
     */
    inline const Aws::Vector<RestoreAccessBackupVaultListMember>& GetRestoreAccessBackupVaults() const { return m_restoreAccessBackupVaults; }
    template<typename RestoreAccessBackupVaultsT = Aws::Vector<RestoreAccessBackupVaultListMember>>
    void SetRestoreAccessBackupVaults(RestoreAccessBackupVaultsT&& value) { m_restoreAccessBackupVaultsHasBeenSet = true; m_restoreAccessBackupVaults = std::forward<RestoreAccessBackupVaultsT>(value); }
    template<typename RestoreAccessBackupVaultsT = Aws::Vector<RestoreAccessBackupVaultListMember>>
    ListRestoreAccessBackupVaultsResult& WithRestoreAccessBackupVaults(RestoreAccessBackupVaultsT&& value) { SetRestoreAccessBackupVaults(std::forward<RestoreAccessBackupVaultsT>(value)); return *this;}
    template<typename RestoreAccessBackupVaultsT = RestoreAccessBackupVaultListMember>
    ListRestoreAccessBackupVaultsResult& AddRestoreAccessBackupVaults(RestoreAccessBackupVaultsT&& value) { m_restoreAccessBackupVaultsHasBeenSet = true; m_restoreAccessBackupVaults.emplace_back(std::forward<RestoreAccessBackupVaultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRestoreAccessBackupVaultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RestoreAccessBackupVaultListMember> m_restoreAccessBackupVaults;
    bool m_restoreAccessBackupVaultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
