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
  class ListBackupPlansResult
  {
  public:
    AWS_BACKUP_API ListBackupPlansResult() = default;
    AWS_BACKUP_API ListBackupPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListBackupPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the backup plans.</p>
     */
    inline const Aws::Vector<BackupPlansListMember>& GetBackupPlansList() const { return m_backupPlansList; }
    template<typename BackupPlansListT = Aws::Vector<BackupPlansListMember>>
    void SetBackupPlansList(BackupPlansListT&& value) { m_backupPlansListHasBeenSet = true; m_backupPlansList = std::forward<BackupPlansListT>(value); }
    template<typename BackupPlansListT = Aws::Vector<BackupPlansListMember>>
    ListBackupPlansResult& WithBackupPlansList(BackupPlansListT&& value) { SetBackupPlansList(std::forward<BackupPlansListT>(value)); return *this;}
    template<typename BackupPlansListT = BackupPlansListMember>
    ListBackupPlansResult& AddBackupPlansList(BackupPlansListT&& value) { m_backupPlansListHasBeenSet = true; m_backupPlansList.emplace_back(std::forward<BackupPlansListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BackupPlansListMember> m_backupPlansList;
    bool m_backupPlansListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
