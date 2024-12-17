/**
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
    AWS_BACKUP_API BackupRuleInput();
    AWS_BACKUP_API BackupRuleInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupRuleInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline BackupRuleInput& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline BackupRuleInput& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline BackupRuleInput& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetTargetBackupVaultName() const{ return m_targetBackupVaultName; }
    inline bool TargetBackupVaultNameHasBeenSet() const { return m_targetBackupVaultNameHasBeenSet; }
    inline void SetTargetBackupVaultName(const Aws::String& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = value; }
    inline void SetTargetBackupVaultName(Aws::String&& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = std::move(value); }
    inline void SetTargetBackupVaultName(const char* value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName.assign(value); }
    inline BackupRuleInput& WithTargetBackupVaultName(const Aws::String& value) { SetTargetBackupVaultName(value); return *this;}
    inline BackupRuleInput& WithTargetBackupVaultName(Aws::String&& value) { SetTargetBackupVaultName(std::move(value)); return *this;}
    inline BackupRuleInput& WithTargetBackupVaultName(const char* value) { SetTargetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CRON expression in UTC specifying when Backup initiates a backup job.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline BackupRuleInput& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline BackupRuleInput& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline BackupRuleInput& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
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
    inline long long GetStartWindowMinutes() const{ return m_startWindowMinutes; }
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }
    inline BackupRuleInput& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by Backup. This value is optional.</p>
     */
    inline long long GetCompletionWindowMinutes() const{ return m_completionWindowMinutes; }
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
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline BackupRuleInput& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}
    inline BackupRuleInput& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecoveryPointTags() const{ return m_recoveryPointTags; }
    inline bool RecoveryPointTagsHasBeenSet() const { return m_recoveryPointTagsHasBeenSet; }
    inline void SetRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = value; }
    inline void SetRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = std::move(value); }
    inline BackupRuleInput& WithRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { SetRecoveryPointTags(value); return *this;}
    inline BackupRuleInput& WithRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { SetRecoveryPointTags(std::move(value)); return *this;}
    inline BackupRuleInput& AddRecoveryPointTags(const Aws::String& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }
    inline BackupRuleInput& AddRecoveryPointTags(Aws::String&& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }
    inline BackupRuleInput& AddRecoveryPointTags(const Aws::String& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }
    inline BackupRuleInput& AddRecoveryPointTags(Aws::String&& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), std::move(value)); return *this; }
    inline BackupRuleInput& AddRecoveryPointTags(const char* key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }
    inline BackupRuleInput& AddRecoveryPointTags(Aws::String&& key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }
    inline BackupRuleInput& AddRecoveryPointTags(const char* key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline const Aws::Vector<CopyAction>& GetCopyActions() const{ return m_copyActions; }
    inline bool CopyActionsHasBeenSet() const { return m_copyActionsHasBeenSet; }
    inline void SetCopyActions(const Aws::Vector<CopyAction>& value) { m_copyActionsHasBeenSet = true; m_copyActions = value; }
    inline void SetCopyActions(Aws::Vector<CopyAction>&& value) { m_copyActionsHasBeenSet = true; m_copyActions = std::move(value); }
    inline BackupRuleInput& WithCopyActions(const Aws::Vector<CopyAction>& value) { SetCopyActions(value); return *this;}
    inline BackupRuleInput& WithCopyActions(Aws::Vector<CopyAction>&& value) { SetCopyActions(std::move(value)); return *this;}
    inline BackupRuleInput& AddCopyActions(const CopyAction& value) { m_copyActionsHasBeenSet = true; m_copyActions.push_back(value); return *this; }
    inline BackupRuleInput& AddCopyActions(CopyAction&& value) { m_copyActionsHasBeenSet = true; m_copyActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether Backup creates continuous backups. True causes Backup to
     * create continuous backups capable of point-in-time restore (PITR). False (or not
     * specified) causes Backup to create snapshot backups.</p>
     */
    inline bool GetEnableContinuousBackup() const{ return m_enableContinuousBackup; }
    inline bool EnableContinuousBackupHasBeenSet() const { return m_enableContinuousBackupHasBeenSet; }
    inline void SetEnableContinuousBackup(bool value) { m_enableContinuousBackupHasBeenSet = true; m_enableContinuousBackup = value; }
    inline BackupRuleInput& WithEnableContinuousBackup(bool value) { SetEnableContinuousBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone in which the schedule expression is set. By default,
     * ScheduleExpressions are in UTC. You can modify this to a specified timezone.</p>
     */
    inline const Aws::String& GetScheduleExpressionTimezone() const{ return m_scheduleExpressionTimezone; }
    inline bool ScheduleExpressionTimezoneHasBeenSet() const { return m_scheduleExpressionTimezoneHasBeenSet; }
    inline void SetScheduleExpressionTimezone(const Aws::String& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = value; }
    inline void SetScheduleExpressionTimezone(Aws::String&& value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone = std::move(value); }
    inline void SetScheduleExpressionTimezone(const char* value) { m_scheduleExpressionTimezoneHasBeenSet = true; m_scheduleExpressionTimezone.assign(value); }
    inline BackupRuleInput& WithScheduleExpressionTimezone(const Aws::String& value) { SetScheduleExpressionTimezone(value); return *this;}
    inline BackupRuleInput& WithScheduleExpressionTimezone(Aws::String&& value) { SetScheduleExpressionTimezone(std::move(value)); return *this;}
    inline BackupRuleInput& WithScheduleExpressionTimezone(const char* value) { SetScheduleExpressionTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>There can up to one IndexAction in each BackupRule, as each backup can have 0
     * or 1 backup index associated with it.</p> <p>Within the array is ResourceTypes.
     * Only 1 resource type will be accepted for each BackupRule. Valid values:</p>
     * <ul> <li> <p> <code>EBS</code> for Amazon Elastic Block Store</p> </li> <li> <p>
     * <code>S3</code> for Amazon Simple Storage Service (Amazon S3)</p> </li> </ul>
     */
    inline const Aws::Vector<IndexAction>& GetIndexActions() const{ return m_indexActions; }
    inline bool IndexActionsHasBeenSet() const { return m_indexActionsHasBeenSet; }
    inline void SetIndexActions(const Aws::Vector<IndexAction>& value) { m_indexActionsHasBeenSet = true; m_indexActions = value; }
    inline void SetIndexActions(Aws::Vector<IndexAction>&& value) { m_indexActionsHasBeenSet = true; m_indexActions = std::move(value); }
    inline BackupRuleInput& WithIndexActions(const Aws::Vector<IndexAction>& value) { SetIndexActions(value); return *this;}
    inline BackupRuleInput& WithIndexActions(Aws::Vector<IndexAction>&& value) { SetIndexActions(std::move(value)); return *this;}
    inline BackupRuleInput& AddIndexActions(const IndexAction& value) { m_indexActionsHasBeenSet = true; m_indexActions.push_back(value); return *this; }
    inline BackupRuleInput& AddIndexActions(IndexAction&& value) { m_indexActionsHasBeenSet = true; m_indexActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_targetBackupVaultName;
    bool m_targetBackupVaultNameHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    long long m_startWindowMinutes;
    bool m_startWindowMinutesHasBeenSet = false;

    long long m_completionWindowMinutes;
    bool m_completionWindowMinutesHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_recoveryPointTags;
    bool m_recoveryPointTagsHasBeenSet = false;

    Aws::Vector<CopyAction> m_copyActions;
    bool m_copyActionsHasBeenSet = false;

    bool m_enableContinuousBackup;
    bool m_enableContinuousBackupHasBeenSet = false;

    Aws::String m_scheduleExpressionTimezone;
    bool m_scheduleExpressionTimezoneHasBeenSet = false;

    Aws::Vector<IndexAction> m_indexActions;
    bool m_indexActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
