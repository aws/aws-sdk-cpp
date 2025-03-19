/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/BackupPlan.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetBackupPlanFromTemplateResult
  {
  public:
    AWS_BACKUP_API GetBackupPlanFromTemplateResult() = default;
    AWS_BACKUP_API GetBackupPlanFromTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupPlanFromTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the body of a backup plan based on the target template, including the
     * name, rules, and backup vault of the plan.</p>
     */
    inline const BackupPlan& GetBackupPlanDocument() const { return m_backupPlanDocument; }
    template<typename BackupPlanDocumentT = BackupPlan>
    void SetBackupPlanDocument(BackupPlanDocumentT&& value) { m_backupPlanDocumentHasBeenSet = true; m_backupPlanDocument = std::forward<BackupPlanDocumentT>(value); }
    template<typename BackupPlanDocumentT = BackupPlan>
    GetBackupPlanFromTemplateResult& WithBackupPlanDocument(BackupPlanDocumentT&& value) { SetBackupPlanDocument(std::forward<BackupPlanDocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackupPlanFromTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BackupPlan m_backupPlanDocument;
    bool m_backupPlanDocumentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
