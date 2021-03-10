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
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupRule">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API BackupRule
  {
  public:
    BackupRule();
    BackupRule(Aws::Utils::Json::JsonView jsonValue);
    BackupRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline BackupRule& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline BackupRule& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>An optional display name for a backup rule.</p>
     */
    inline BackupRule& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline const Aws::String& GetTargetBackupVaultName() const{ return m_targetBackupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline bool TargetBackupVaultNameHasBeenSet() const { return m_targetBackupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetTargetBackupVaultName(const Aws::String& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetTargetBackupVaultName(Aws::String&& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetTargetBackupVaultName(const char* value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupRule& WithTargetBackupVaultName(const Aws::String& value) { SetTargetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupRule& WithTargetBackupVaultName(Aws::String&& value) { SetTargetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupRule& WithTargetBackupVaultName(const char* value) { SetTargetBackupVaultName(value); return *this;}


    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline BackupRule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline BackupRule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job. For more
     * information about cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Prior to specifying a value for this parameter, we recommend testing your cron
     * expression using one of the many available cron generator and testing tools.</p>
     */
    inline BackupRule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional.</p>
     */
    inline long long GetStartWindowMinutes() const{ return m_startWindowMinutes; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional.</p>
     */
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional.</p>
     */
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional.</p>
     */
    inline BackupRule& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}


    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by AWS Backup. This value is optional.</p>
     */
    inline long long GetCompletionWindowMinutes() const{ return m_completionWindowMinutes; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by AWS Backup. This value is optional.</p>
     */
    inline bool CompletionWindowMinutesHasBeenSet() const { return m_completionWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by AWS Backup. This value is optional.</p>
     */
    inline void SetCompletionWindowMinutes(long long value) { m_completionWindowMinutesHasBeenSet = true; m_completionWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by AWS Backup. This value is optional.</p>
     */
    inline BackupRule& WithCompletionWindowMinutes(long long value) { SetCompletionWindowMinutes(value); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Only Amazon EFS file system backups can be transitioned to cold storage.</p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Only Amazon EFS file system backups can be transitioned to cold storage.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Only Amazon EFS file system backups can be transitioned to cold storage.</p>
     */
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Only Amazon EFS file system backups can be transitioned to cold storage.</p>
     */
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Only Amazon EFS file system backups can be transitioned to cold storage.</p>
     */
    inline BackupRule& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Only Amazon EFS file system backups can be transitioned to cold storage.</p>
     */
    inline BackupRule& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecoveryPointTags() const{ return m_recoveryPointTags; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline bool RecoveryPointTagsHasBeenSet() const { return m_recoveryPointTagsHasBeenSet; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline void SetRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = value; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline void SetRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = std::move(value); }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& WithRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { SetRecoveryPointTags(value); return *this;}

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& WithRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { SetRecoveryPointTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(const Aws::String& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(Aws::String&& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(const Aws::String& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(Aws::String&& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(const char* key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(Aws::String&& key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pair strings that are assigned to resources that are
     * associated with this rule when restored from backup.</p>
     */
    inline BackupRule& AddRecoveryPointTags(const char* key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }


    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline BackupRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline BackupRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a rule that is used to schedule the backup of a selection
     * of resources.</p>
     */
    inline BackupRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline const Aws::Vector<CopyAction>& GetCopyActions() const{ return m_copyActions; }

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline bool CopyActionsHasBeenSet() const { return m_copyActionsHasBeenSet; }

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline void SetCopyActions(const Aws::Vector<CopyAction>& value) { m_copyActionsHasBeenSet = true; m_copyActions = value; }

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline void SetCopyActions(Aws::Vector<CopyAction>&& value) { m_copyActionsHasBeenSet = true; m_copyActions = std::move(value); }

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline BackupRule& WithCopyActions(const Aws::Vector<CopyAction>& value) { SetCopyActions(value); return *this;}

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline BackupRule& WithCopyActions(Aws::Vector<CopyAction>&& value) { SetCopyActions(std::move(value)); return *this;}

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline BackupRule& AddCopyActions(const CopyAction& value) { m_copyActionsHasBeenSet = true; m_copyActions.push_back(value); return *this; }

    /**
     * <p>An array of <code>CopyAction</code> objects, which contains the details of
     * the copy operation.</p>
     */
    inline BackupRule& AddCopyActions(CopyAction&& value) { m_copyActionsHasBeenSet = true; m_copyActions.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether AWS Backup creates continuous backups. True causes AWS
     * Backup to create continuous backups capable of point-in-time restore (PITR).
     * False (or not specified) causes AWS Backup to create snapshot backups.</p>
     */
    inline bool GetEnableContinuousBackup() const{ return m_enableContinuousBackup; }

    /**
     * <p>Specifies whether AWS Backup creates continuous backups. True causes AWS
     * Backup to create continuous backups capable of point-in-time restore (PITR).
     * False (or not specified) causes AWS Backup to create snapshot backups.</p>
     */
    inline bool EnableContinuousBackupHasBeenSet() const { return m_enableContinuousBackupHasBeenSet; }

    /**
     * <p>Specifies whether AWS Backup creates continuous backups. True causes AWS
     * Backup to create continuous backups capable of point-in-time restore (PITR).
     * False (or not specified) causes AWS Backup to create snapshot backups.</p>
     */
    inline void SetEnableContinuousBackup(bool value) { m_enableContinuousBackupHasBeenSet = true; m_enableContinuousBackup = value; }

    /**
     * <p>Specifies whether AWS Backup creates continuous backups. True causes AWS
     * Backup to create continuous backups capable of point-in-time restore (PITR).
     * False (or not specified) causes AWS Backup to create snapshot backups.</p>
     */
    inline BackupRule& WithEnableContinuousBackup(bool value) { SetEnableContinuousBackup(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    Aws::String m_targetBackupVaultName;
    bool m_targetBackupVaultNameHasBeenSet;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet;

    long long m_startWindowMinutes;
    bool m_startWindowMinutesHasBeenSet;

    long long m_completionWindowMinutes;
    bool m_completionWindowMinutesHasBeenSet;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_recoveryPointTags;
    bool m_recoveryPointTagsHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::Vector<CopyAction> m_copyActions;
    bool m_copyActionsHasBeenSet;

    bool m_enableContinuousBackup;
    bool m_enableContinuousBackupHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
