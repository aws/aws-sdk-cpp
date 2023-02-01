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
  class GetBackupPlanFromJSONResult
  {
  public:
    AWS_BACKUP_API GetBackupPlanFromJSONResult();
    AWS_BACKUP_API GetBackupPlanFromJSONResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupPlanFromJSONResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline const BackupPlan& GetBackupPlan() const{ return m_backupPlan; }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline void SetBackupPlan(const BackupPlan& value) { m_backupPlan = value; }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline void SetBackupPlan(BackupPlan&& value) { m_backupPlan = std::move(value); }

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline GetBackupPlanFromJSONResult& WithBackupPlan(const BackupPlan& value) { SetBackupPlan(value); return *this;}

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline GetBackupPlanFromJSONResult& WithBackupPlan(BackupPlan&& value) { SetBackupPlan(std::move(value)); return *this;}

  private:

    BackupPlan m_backupPlan;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
