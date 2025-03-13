/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupSelectionsListMember.h>
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
  class ListBackupSelectionsResult
  {
  public:
    AWS_BACKUP_API ListBackupSelectionsResult() = default;
    AWS_BACKUP_API ListBackupSelectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupSelectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListBackupSelectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of backup selection list items containing metadata about each
     * resource in the list.</p>
     */
    inline const Aws::Vector<BackupSelectionsListMember>& GetBackupSelectionsList() const { return m_backupSelectionsList; }
    template<typename BackupSelectionsListT = Aws::Vector<BackupSelectionsListMember>>
    void SetBackupSelectionsList(BackupSelectionsListT&& value) { m_backupSelectionsListHasBeenSet = true; m_backupSelectionsList = std::forward<BackupSelectionsListT>(value); }
    template<typename BackupSelectionsListT = Aws::Vector<BackupSelectionsListMember>>
    ListBackupSelectionsResult& WithBackupSelectionsList(BackupSelectionsListT&& value) { SetBackupSelectionsList(std::forward<BackupSelectionsListT>(value)); return *this;}
    template<typename BackupSelectionsListT = BackupSelectionsListMember>
    ListBackupSelectionsResult& AddBackupSelectionsList(BackupSelectionsListT&& value) { m_backupSelectionsListHasBeenSet = true; m_backupSelectionsList.emplace_back(std::forward<BackupSelectionsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupSelectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BackupSelectionsListMember> m_backupSelectionsList;
    bool m_backupSelectionsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
