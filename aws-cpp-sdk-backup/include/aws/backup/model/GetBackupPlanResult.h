/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/BackupPlan.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/AdvancedBackupSetting.h>
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
  class GetBackupPlanResult
  {
  public:
    AWS_BACKUP_API GetBackupPlanResult();
    AWS_BACKUP_API GetBackupPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetBackupPlanResult& WithBackupPlan(const BackupPlan& value) { SetBackupPlan(value); return *this;}

    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline GetBackupPlanResult& WithBackupPlan(BackupPlan&& value) { SetBackupPlan(std::move(value)); return *this;}


    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupPlanResult& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupPlanResult& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupPlanResult& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline const Aws::String& GetBackupPlanArn() const{ return m_backupPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline void SetBackupPlanArn(const Aws::String& value) { m_backupPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline void SetBackupPlanArn(Aws::String&& value) { m_backupPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline void SetBackupPlanArn(const char* value) { m_backupPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline GetBackupPlanResult& WithBackupPlanArn(const Aws::String& value) { SetBackupPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline GetBackupPlanResult& WithBackupPlanArn(Aws::String&& value) { SetBackupPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline GetBackupPlanResult& WithBackupPlanArn(const char* value) { SetBackupPlanArn(value); return *this;}


    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline GetBackupPlanResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline GetBackupPlanResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline GetBackupPlanResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline GetBackupPlanResult& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline GetBackupPlanResult& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline GetBackupPlanResult& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupPlanResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupPlanResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that a backup plan is deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>DeletionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }

    /**
     * <p>The date and time that a backup plan is deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>DeletionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDate = value; }

    /**
     * <p>The date and time that a backup plan is deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>DeletionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDate = std::move(value); }

    /**
     * <p>The date and time that a backup plan is deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>DeletionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupPlanResult& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}

    /**
     * <p>The date and time that a backup plan is deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>DeletionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupPlanResult& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(std::move(value)); return *this;}


    /**
     * <p>The last time a job to back up resources was run with this backup plan. A
     * date and time, in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const{ return m_lastExecutionDate; }

    /**
     * <p>The last time a job to back up resources was run with this backup plan. A
     * date and time, in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastExecutionDate(const Aws::Utils::DateTime& value) { m_lastExecutionDate = value; }

    /**
     * <p>The last time a job to back up resources was run with this backup plan. A
     * date and time, in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastExecutionDate(Aws::Utils::DateTime&& value) { m_lastExecutionDate = std::move(value); }

    /**
     * <p>The last time a job to back up resources was run with this backup plan. A
     * date and time, in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupPlanResult& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}

    /**
     * <p>The last time a job to back up resources was run with this backup plan. A
     * date and time, in Unix format and Coordinated Universal Time (UTC). The value of
     * <code>LastExecutionDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupPlanResult& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}


    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline const Aws::Vector<AdvancedBackupSetting>& GetAdvancedBackupSettings() const{ return m_advancedBackupSettings; }

    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline void SetAdvancedBackupSettings(const Aws::Vector<AdvancedBackupSetting>& value) { m_advancedBackupSettings = value; }

    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline void SetAdvancedBackupSettings(Aws::Vector<AdvancedBackupSetting>&& value) { m_advancedBackupSettings = std::move(value); }

    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline GetBackupPlanResult& WithAdvancedBackupSettings(const Aws::Vector<AdvancedBackupSetting>& value) { SetAdvancedBackupSettings(value); return *this;}

    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline GetBackupPlanResult& WithAdvancedBackupSettings(Aws::Vector<AdvancedBackupSetting>&& value) { SetAdvancedBackupSettings(std::move(value)); return *this;}

    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline GetBackupPlanResult& AddAdvancedBackupSettings(const AdvancedBackupSetting& value) { m_advancedBackupSettings.push_back(value); return *this; }

    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline GetBackupPlanResult& AddAdvancedBackupSettings(AdvancedBackupSetting&& value) { m_advancedBackupSettings.push_back(std::move(value)); return *this; }

  private:

    BackupPlan m_backupPlan;

    Aws::String m_backupPlanId;

    Aws::String m_backupPlanArn;

    Aws::String m_versionId;

    Aws::String m_creatorRequestId;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_deletionDate;

    Aws::Utils::DateTime m_lastExecutionDate;

    Aws::Vector<AdvancedBackupSetting> m_advancedBackupSettings;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
