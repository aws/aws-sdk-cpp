/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupPlansListMember.h>
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
  class ListBackupPlanVersionsResult
  {
  public:
    AWS_BACKUP_API ListBackupPlanVersionsResult() = default;
    AWS_BACKUP_API ListBackupPlanVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupPlanVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListBackupPlanVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of version list items containing metadata about your backup
     * plans.</p>
     */
    inline const Aws::Vector<BackupPlansListMember>& GetBackupPlanVersionsList() const { return m_backupPlanVersionsList; }
    template<typename BackupPlanVersionsListT = Aws::Vector<BackupPlansListMember>>
    void SetBackupPlanVersionsList(BackupPlanVersionsListT&& value) { m_backupPlanVersionsListHasBeenSet = true; m_backupPlanVersionsList = std::forward<BackupPlanVersionsListT>(value); }
    template<typename BackupPlanVersionsListT = Aws::Vector<BackupPlansListMember>>
    ListBackupPlanVersionsResult& WithBackupPlanVersionsList(BackupPlanVersionsListT&& value) { SetBackupPlanVersionsList(std::forward<BackupPlanVersionsListT>(value)); return *this;}
    template<typename BackupPlanVersionsListT = BackupPlansListMember>
    ListBackupPlanVersionsResult& AddBackupPlanVersionsList(BackupPlanVersionsListT&& value) { m_backupPlanVersionsListHasBeenSet = true; m_backupPlanVersionsList.emplace_back(std::forward<BackupPlanVersionsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupPlanVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BackupPlansListMember> m_backupPlanVersionsList;
    bool m_backupPlanVersionsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
