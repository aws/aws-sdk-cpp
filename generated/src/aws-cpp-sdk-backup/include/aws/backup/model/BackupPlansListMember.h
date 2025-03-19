/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/AdvancedBackupSetting.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains metadata about a backup plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupPlansListMember">AWS
   * API Reference</a></p>
   */
  class BackupPlansListMember
  {
  public:
    AWS_BACKUP_API BackupPlansListMember() = default;
    AWS_BACKUP_API BackupPlansListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupPlansListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline const Aws::String& GetBackupPlanArn() const { return m_backupPlanArn; }
    inline bool BackupPlanArnHasBeenSet() const { return m_backupPlanArnHasBeenSet; }
    template<typename BackupPlanArnT = Aws::String>
    void SetBackupPlanArn(BackupPlanArnT&& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = std::forward<BackupPlanArnT>(value); }
    template<typename BackupPlanArnT = Aws::String>
    BackupPlansListMember& WithBackupPlanArn(BackupPlanArnT&& value) { SetBackupPlanArn(std::forward<BackupPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    BackupPlansListMember& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a resource backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    BackupPlansListMember& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup plan is deleted, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>DeletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const { return m_deletionDate; }
    inline bool DeletionDateHasBeenSet() const { return m_deletionDateHasBeenSet; }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    void SetDeletionDate(DeletionDateT&& value) { m_deletionDateHasBeenSet = true; m_deletionDate = std::forward<DeletionDateT>(value); }
    template<typename DeletionDateT = Aws::Utils::DateTime>
    BackupPlansListMember& WithDeletionDate(DeletionDateT&& value) { SetDeletionDate(std::forward<DeletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    BackupPlansListMember& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a saved backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanName() const { return m_backupPlanName; }
    inline bool BackupPlanNameHasBeenSet() const { return m_backupPlanNameHasBeenSet; }
    template<typename BackupPlanNameT = Aws::String>
    void SetBackupPlanName(BackupPlanNameT&& value) { m_backupPlanNameHasBeenSet = true; m_backupPlanName = std::forward<BackupPlanNameT>(value); }
    template<typename BackupPlanNameT = Aws::String>
    BackupPlansListMember& WithBackupPlanName(BackupPlanNameT&& value) { SetBackupPlanName(std::forward<BackupPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    BackupPlansListMember& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time this backup plan was run. A date and time, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastExecutionDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const { return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    void SetLastExecutionDate(LastExecutionDateT&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::forward<LastExecutionDateT>(value); }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    BackupPlansListMember& WithLastExecutionDate(LastExecutionDateT&& value) { SetLastExecutionDate(std::forward<LastExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of <code>BackupOptions</code> for a resource type.</p>
     */
    inline const Aws::Vector<AdvancedBackupSetting>& GetAdvancedBackupSettings() const { return m_advancedBackupSettings; }
    inline bool AdvancedBackupSettingsHasBeenSet() const { return m_advancedBackupSettingsHasBeenSet; }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    void SetAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings = std::forward<AdvancedBackupSettingsT>(value); }
    template<typename AdvancedBackupSettingsT = Aws::Vector<AdvancedBackupSetting>>
    BackupPlansListMember& WithAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { SetAdvancedBackupSettings(std::forward<AdvancedBackupSettingsT>(value)); return *this;}
    template<typename AdvancedBackupSettingsT = AdvancedBackupSetting>
    BackupPlansListMember& AddAdvancedBackupSettings(AdvancedBackupSettingsT&& value) { m_advancedBackupSettingsHasBeenSet = true; m_advancedBackupSettings.emplace_back(std::forward<AdvancedBackupSettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_backupPlanArn;
    bool m_backupPlanArnHasBeenSet = false;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_deletionDate{};
    bool m_deletionDateHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_backupPlanName;
    bool m_backupPlanNameHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate{};
    bool m_lastExecutionDateHasBeenSet = false;

    Aws::Vector<AdvancedBackupSetting> m_advancedBackupSettings;
    bool m_advancedBackupSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
