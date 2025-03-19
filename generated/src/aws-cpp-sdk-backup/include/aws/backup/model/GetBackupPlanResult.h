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
    AWS_BACKUP_API GetBackupPlanResult() = default;
    AWS_BACKUP_API GetBackupPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the body of a backup plan. Includes a <code>BackupPlanName</code>
     * and one or more sets of <code>Rules</code>.</p>
     */
    inline const BackupPlan& GetBackupPlan() const { return m_backupPlan; }
    template<typename BackupPlanT = BackupPlan>
    void SetBackupPlan(BackupPlanT&& value) { m_backupPlanHasBeenSet = true; m_backupPlan = std::forward<BackupPlanT>(value); }
    template<typename BackupPlanT = BackupPlan>
    GetBackupPlanResult& WithBackupPlan(BackupPlanT&& value) { SetBackupPlan(std::forward<BackupPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    GetBackupPlanResult& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline const Aws::String& GetBackupPlanArn() const { return m_backupPlanArn; }
    template<typename BackupPlanArnT = Aws::String>
    void SetBackupPlanArn(BackupPlanArnT&& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = std::forward<BackupPlanArnT>(value); }
    template<typename BackupPlanArnT = Aws::String>
    GetBackupPlanResult& WithBackupPlanArn(BackupPlanArnT&& value) { SetBackupPlanArn(std::forward<BackupPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetBackupPlanResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    GetBackupPlanResult& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetBackupPlanResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup plan is deleted, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>DeletionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const { return m_deletionDate; }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    void SetDeletionDate(DeletionDateT&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::forward<DeletionDateT>(value); }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    GetBackupPlanResult& WithDeletionDate(DeletionDateT&& value) { SetDeletionDate(std::forward<DeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time this backup plan was run. A date and time, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastExecutionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const { return m_lastExecutionDate; }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    void SetLastExecutionDate(LastExecutionDateT&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::forward<LastExecutionDateT>(value); }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    GetBackupPlanResult& WithLastExecutionDate(LastExecutionDateT&& value) { SetLastExecutionDate(std::forward<LastExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of <code>BackupOptions</code> for each resource type. The
     * list is populated only if the advanced option is set for the backup plan.</p>
     */
    inline const Aws::Vector<AdvancedBackupSetting>& GetAdvancedBackupSettings() const { return m_advancedBackupSettings; }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    void SetAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = std::forward<AdvancedBackupSettingsT>(value); }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    GetBackupPlanResult& WithAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { SetAdvancedBackupSettings(std::forward<AdvancedBackupSettingsT>(value)); return *this;}
    template<typename AdvancedBackupSettingsT = AdvancedBackupSetting>
    GetBackupPlanResult& AddAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.emplace_back(std::forward<AdvancedBackupSettingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackupPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BackupPlan m_backupPlan;
    bool m_backupPlanHasBeenSet = false;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_backupPlanArn;
    bool m_backupPlanArnHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_deletionDate{};
    bool m_deletionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate{};
    bool m_lastExecutionDateHasBeenSet = false;

    Aws::Vector<AdvancedBackupSetting> m_advancedBackupSettings;
    bool m_advancedBackupSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
