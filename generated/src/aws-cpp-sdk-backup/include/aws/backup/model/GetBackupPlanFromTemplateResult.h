/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/BackupPlan.h>
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
    AWS_BACKUP_API GetBackupPlanFromTemplateResult();
    AWS_BACKUP_API GetBackupPlanFromTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupPlanFromTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the body of a backup plan based on the target template, including the
     * name, rules, and backup vault of the plan.</p>
     */
    inline const BackupPlan& GetBackupPlanDocument() const{ return m_backupPlanDocument; }

    /**
     * <p>Returns the body of a backup plan based on the target template, including the
     * name, rules, and backup vault of the plan.</p>
     */
    inline void SetBackupPlanDocument(const BackupPlan& value) { m_backupPlanDocument = value; }

    /**
     * <p>Returns the body of a backup plan based on the target template, including the
     * name, rules, and backup vault of the plan.</p>
     */
    inline void SetBackupPlanDocument(BackupPlan&& value) { m_backupPlanDocument = std::move(value); }

    /**
     * <p>Returns the body of a backup plan based on the target template, including the
     * name, rules, and backup vault of the plan.</p>
     */
    inline GetBackupPlanFromTemplateResult& WithBackupPlanDocument(const BackupPlan& value) { SetBackupPlanDocument(value); return *this;}

    /**
     * <p>Returns the body of a backup plan based on the target template, including the
     * name, rules, and backup vault of the plan.</p>
     */
    inline GetBackupPlanFromTemplateResult& WithBackupPlanDocument(BackupPlan&& value) { SetBackupPlanDocument(std::move(value)); return *this;}

  private:

    BackupPlan m_backupPlanDocument;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
