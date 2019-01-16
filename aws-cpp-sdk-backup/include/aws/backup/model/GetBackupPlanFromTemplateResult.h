/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BACKUP_API GetBackupPlanFromTemplateResult
  {
  public:
    GetBackupPlanFromTemplateResult();
    GetBackupPlanFromTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBackupPlanFromTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
