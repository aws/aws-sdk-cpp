/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupPlanTemplatesListMember.h>
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
  class ListBackupPlanTemplatesResult
  {
  public:
    AWS_BACKUP_API ListBackupPlanTemplatesResult() = default;
    AWS_BACKUP_API ListBackupPlanTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListBackupPlanTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListBackupPlanTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of template list items containing metadata about your saved
     * templates.</p>
     */
    inline const Aws::Vector<BackupPlanTemplatesListMember>& GetBackupPlanTemplatesList() const { return m_backupPlanTemplatesList; }
    template<typename BackupPlanTemplatesListT = Aws::Vector<BackupPlanTemplatesListMember>>
    void SetBackupPlanTemplatesList(BackupPlanTemplatesListT&& value) { m_backupPlanTemplatesListHasBeenSet = true; m_backupPlanTemplatesList = std::forward<BackupPlanTemplatesListT>(value); }
    template<typename BackupPlanTemplatesListT = Aws::Vector<BackupPlanTemplatesListMember>>
    ListBackupPlanTemplatesResult& WithBackupPlanTemplatesList(BackupPlanTemplatesListT&& value) { SetBackupPlanTemplatesList(std::forward<BackupPlanTemplatesListT>(value)); return *this;}
    template<typename BackupPlanTemplatesListT = BackupPlanTemplatesListMember>
    ListBackupPlanTemplatesResult& AddBackupPlanTemplatesList(BackupPlanTemplatesListT&& value) { m_backupPlanTemplatesListHasBeenSet = true; m_backupPlanTemplatesList.emplace_back(std::forward<BackupPlanTemplatesListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBackupPlanTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BackupPlanTemplatesListMember> m_backupPlanTemplatesList;
    bool m_backupPlanTemplatesListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
