/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupVaultListMember.h>
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
  class ListBackupVaultsResult
  {
  public:
    AWS_BACKUP_API ListBackupVaultsResult() = default;
    AWS_BACKUP_API ListBackupVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of backup vault list members containing vault metadata, including
     * Amazon Resource Name (ARN), display name, creation date, number of saved
     * recovery points, and encryption information if the resources saved in the backup
     * vault are encrypted.</p>
     */
    inline const Aws::Vector<BackupVaultListMember>& GetBackupVaultList() const { return m_backupVaultList; }
    template<typename BackupVaultListT = Aws::Vector<BackupVaultListMember>>
    void SetBackupVaultList(BackupVaultListT&& value) { m_backupVaultListHasBeenSet = true; m_backupVaultList = std::forward<BackupVaultListT>(value); }
    template<typename BackupVaultListT = Aws::Vector<BackupVaultListMember>>
    ListBackupVaultsResult& WithBackupVaultList(BackupVaultListT&& value) { SetBackupVaultList(std::forward<BackupVaultListT>(value)); return *this;}
    template<typename BackupVaultListT = BackupVaultListMember>
    ListBackupVaultsResult& AddBackupVaultList(BackupVaultListT&& value) { m_backupVaultListHasBeenSet = true; m_backupVaultList.emplace_back(std::forward<BackupVaultListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBackupVaultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupVaultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BackupVaultListMember> m_backupVaultList;
    bool m_backupVaultListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
