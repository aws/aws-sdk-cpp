﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/CopyAction.h>
#include <aws/backup/model/IndexAction.h>
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
   * <p>Specifies a scheduled task used to back up a selection of
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupRuleInput">AWS
   * API Reference</a></p>
   */
  class BackupRuleInput
  {
  public:
    AWS_BACKUP_API BackupRuleInput() = default;
    AWS_BACKUP_API BackupRuleInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupRuleInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    BackupRuleInput& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetTargetBackupVaultName() const { return m_targetBackupVaultName; }
    inline bool TargetBackupVaultNameHasBeenSet() const { return m_targetBackupVaultNameHasBeenSet; }
    template<typename TargetBackupVaultNameT = Aws::String>
    void SetTargetBackupVaultName(TargetBackupVaultNameT&& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = std::forward<TargetBackupVaultNameT>(value); }
    template<typename TargetBackupVaultNameT = Aws::String>
    BackupRuleInput& WithTargetBackupVaultName(TargetBackupVaultNameT&& value) { SetTargetBackupVaultName(std::forward<TargetBackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CRON expression in UTC specifying when Backup initiates a backup job.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    BackupRuleInput& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional. If this value is
     * included, it must be at least 60 minutes to avoid errors.</p> <p>This parameter
     * has a maximum value of 100 years (52,560,000 minutes).</p> <p>During the start
     * window, the backup job status remains in <code>CREATED</code> status until it
     * has successfully begun or until the start window time has run out. If within the
     * start window time Backup receives an error that allows the job to be retried,
     * Backup will automatically retry to begin the job at least every 10 minutes until
     * the backup successfully begins (the job status changes to <code>RUNNING</code>)
     * or until the job status changes to <code>EXPIRED</code> (which is expected to
     * occur when the start window time is over).</p>
     */
    inline long long GetStartWindowMinutes() const { return m_startWindowMinutes; }
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }
    inline BackupRuleInput& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by Backup. This value is optional.</p>
     */
    inline long long GetCompletionWindowMinutes() const { return m_completionWindowMinutes; }
    inline bool CompletionWindowMinutesHasBeenSet() const { return m_completionWindowMinutesHasBeenSet; }
    inline void SetCompletionWindowMinutes(long long value) { m_completionWindowMinutesHasBeenSet = true; m_completionWindowMinutes = value; }
    inline BackupRuleInput& WithCompletionWindowMinutes(long long value) { SetCompletionWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold
     * storage.</p> <p>Resource types that can transition to cold storage are listed in
     * the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
     * availability by resource</a> table. Backup ignores this expression for other
     * resource types.</p> <p>This parameter has a maximum value of 100 years (36,500
     * days).</p>
     */
    inline const Lifecycle& GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    template<typename LifecycleT = Lifecycle>
    void SetLifecycle(LifecycleT&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::forward<LifecycleT>(value); }
    template<typename LifecycleT = Lifecycle>
    BackupRuleInput& WithLifecycle(LifecycleT&& value) { SetLifecycle(std::forward<LifecycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecoveryPointTags() const { return m_recoveryPointTags; }
    inline bool RecoveryPointTagsHasBeenSet() const { return m_recoveryPointTagsHasBeenSet; }
    template<typename RecoveryPointTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetRecoveryPointTags(RecoveryPointTagsT&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = std::forward<RecoveryPointTagsT>(value); }
    template<typename RecoveryPointTagsT = Aws::Map<Aws::String, Aws::String>>
    BackupRuleInput& WithRecoveryPointTags(RecoveryPointTagsT&& value) { SetRecoveryPointTags(std::forward<RecoveryPointTagsT>(value)); return *this;}
    template<typename RecoveryPointTagsKeyT = Aws::String, typename RecoveryPointTagsValueT = Aws::String>
    BackupRuleInput& AddRecoveryPointTags(RecoveryPointTagsKeyT&& key, RecoveryPointTagsValueT&& value) {
      m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::forward<RecoveryPointTagsKeyT>(key), std::forward<RecoveryPointTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline const Aws::Vector<CopyAction>& GetCopyActions() const { return m_copyActions; }
    inline bool CopyActionsHasBeenSet() const { return m_copyActionsHasBeenSet; }
    template<typename CopyActionsT = Aws::Vector<CopyAction>>
    void SetCopyActions(CopyActionsT&& value) { m_copyActionsHasBeenSet = true; m_copyActions = std::forward<CopyActionsT>(value); }
    template<typename CopyActionsT = Aws::Vector<CopyAction>>
    BackupRuleInput& WithCopyActions(CopyActionsT&& value) { SetCopyActions(std::forward<CopyActionsT>(value)); return *this;}
    template<typename CopyActionsT = CopyAction>
    BackupRuleInput& AddCopyActions(CopyActionsT&& value) { m_copyActionsHasBeenSet = true; m_copyActions.emplace_back(std::forward<CopyActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether Backup creates continuous backups. True causes Backup to
     * create continuous backups capable of point-in-time restore (PITR). False (or not
     * specified) causes Backup to create snapshot backups.</p>
     */
    inline bool GetEnableContinuousBackup() const { return m_enableContinuousBackup; }
    inline bool EnableContinuousBackupHasBeenSet() const { return m_enableContinuousBackupHasBeenSet; }
    inline void SetEnableContinuousBackup(bool value) { m_enableContinuousBackupHasBeenSet = true; m_enableContinuousBackup = value; }
    inline BackupRuleInput& WithEnableContinuousBackup(bool value) { SetEnableContinuousBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone in which the schedule expression is set. By default,
     * ScheduleExpressions are in UTC. You can modify this to a specified timezone.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const { return m_scheduleExpressionTimezone; }
    inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }
    template<typename ScheduleExpressionTimezoneT = Aws::String>
    void SetScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = std::forward<ScheduleExpressionTimezoneT>(value); }
    template<typename ScheduleExpressionTimezoneT = Aws::String>
    BackupRuleInput& WithScheduleExpressionTimezone(ScheduleExpressionTimezoneT&& value) { SetScheduleExpressionTimezone(std::forward<ScheduleExpressionTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There can up to one IndexAction in each BackupRule, as each backup can have 0
     * or 1 backup index associated with it.</p> <p>Within the array is ResourceTypes.
     * Only 1 resource type will be accepted for each BackupRule. Valid values:</p>
     * <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li> <p>
     * <code>S3</code> for Amazon Simple Storage Service (Amazon S3)</p> </li> </ul>
     */
    inline const Aws::Vector<IndexAction>& GetIndexActions() const { return m_indexActions; }
    inline bool IndexActionsHasBeenSet() const { return m_indexActionsHasBeenSet; }
    template<typename IndexActionsT = Aws::Vector<IndexAction>>
    void SetIndexActions(IndexActionsT&& value) { m_indexActionsHasBeenSet = true; m_indexActions = std::forward<IndexActionsT>(value); }
    template<typename IndexActionsT = Aws::Vector<IndexAction>>
    BackupRuleInput& WithIndexActions(IndexActionsT&& value) { SetIndexActions(std::forward<IndexActionsT>(value)); return *this;}
    template<typename IndexActionsT = IndexAction>
    BackupRuleInput& AddIndexActions(IndexActionsT&& value) { m_indexActionsHasBeenSet = true; m_indexActions.emplace_back(std::forward<IndexActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_targetBackupVaultName;
    bool m_targetBackupVaultNameHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    long long m_startWindowMinutes{0};
    bool m_startWindowMinutesHasBeenSet = false;

    long long m_completionWindowMinutes{0};
    bool m_completionWindowMinutesHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_recoveryPointTags;
    bool m_recoveryPointTagsHasBeenSet = false;

    Aws::Vector<CopyAction> m_copyActions;
    bool m_copyActionsHasBeenSet = false;

    bool m_enableContinuousBackup{false};
    bool m_enableContinuousBackupHasBeenSet = false;

    Aws::String m_scheduleExpressionTimezone;
    bool m_scheduleExpressionTimezoneHasBeenSet = false;

    Aws::Vector<IndexAction> m_indexActions;
    bool m_indexActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
