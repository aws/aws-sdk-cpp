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
  class BackupRule
  {
  public:
    AWS_BACKUP_API BackupRule();
    AWS_BACKUP_API BackupRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline BackupRule& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline BackupRule& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>A display name for a backup rule. Must contain 1 to 50 alphanumeric or '-_.'
     * characters.</p>
     */
    inline BackupRule& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetTargetBackupVaultName() const{ return m_targetBackupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline bool TargetBackupVaultNameHasBeenSet() const { return m_targetBackupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetTargetBackupVaultName(const Aws::String& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetTargetBackupVaultName(Aws::String&& value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetTargetBackupVaultName(const char* value) { m_targetBackupVaultNameHasBeenSet = true; m_targetBackupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline BackupRule& WithTargetBackupVaultName(const Aws::String& value) { SetTargetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline BackupRule& WithTargetBackupVaultName(Aws::String&& value) { SetTargetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline BackupRule& WithTargetBackupVaultName(const char* value) { SetTargetBackupVaultName(value); return *this;}


    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline BackupRule& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline BackupRule& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A cron expression in UTC specifying when Backup initiates a backup job. For
     * more information about Amazon Web Services cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html">Schedule
     * Expressions for Rules</a> in the <i>Amazon CloudWatch Events User Guide.</i>.
     * Two examples of Amazon Web Services cron expressions are <code> 15 * ? * *
     * *</code> (take a backup every hour at 15 minutes past the hour) and <code>0 12 *
     * * ? *</code> (take a backup every day at 12 noon UTC). For a table of examples,
     * click the preceding link and scroll down the page.</p>
     */
    inline BackupRule& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional. If this value is
     * included, it must be at least 60 minutes to avoid errors.</p>
     */
    inline long long GetStartWindowMinutes() const{ return m_startWindowMinutes; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional. If this value is
     * included, it must be at least 60 minutes to avoid errors.</p>
     */
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional. If this value is
     * included, it must be at least 60 minutes to avoid errors.</p>
     */
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional. If this value is
     * included, it must be at least 60 minutes to avoid errors.</p>
     */
    inline BackupRule& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}


    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by Backup. This value is optional.</p>
     */
    inline long long GetCompletionWindowMinutes() const{ return m_completionWindowMinutes; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by Backup. This value is optional.</p>
     */
    inline bool CompletionWindowMinutesHasBeenSet() const { return m_completionWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by Backup. This value is optional.</p>
     */
    inline void SetCompletionWindowMinutes(long long value) { m_completionWindowMinutesHasBeenSet = true; m_completionWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup job is successfully started before it must
     * be completed or it will be canceled by Backup. This value is optional.</p>
     */
    inline BackupRule& WithCompletionWindowMinutes(long long value) { SetCompletionWindowMinutes(value); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline BackupRule& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
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
     * <p>Specifies whether Backup creates continuous backups. True causes Backup to
     * create continuous backups capable of point-in-time restore (PITR). False (or not
     * specified) causes Backup to create snapshot backups.</p>
     */
    inline bool GetEnableContinuousBackup() const{ return m_enableContinuousBackup; }

    /**
     * <p>Specifies whether Backup creates continuous backups. True causes Backup to
     * create continuous backups capable of point-in-time restore (PITR). False (or not
     * specified) causes Backup to create snapshot backups.</p>
     */
    inline bool EnableContinuousBackupHasBeenSet() const { return m_enableContinuousBackupHasBeenSet; }

    /**
     * <p>Specifies whether Backup creates continuous backups. True causes Backup to
     * create continuous backups capable of point-in-time restore (PITR). False (or not
     * specified) causes Backup to create snapshot backups.</p>
     */
    inline void SetEnableContinuousBackup(bool value) { m_enableContinuousBackupHasBeenSet = true; m_enableContinuousBackup = value; }

    /**
     * <p>Specifies whether Backup creates continuous backups. True causes Backup to
     * create continuous backups capable of point-in-time restore (PITR). False (or not
     * specified) causes Backup to create snapshot backups.</p>
     */
    inline BackupRule& WithEnableContinuousBackup(bool value) { SetEnableContinuousBackup(value); return *this;}

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

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::Vector<CopyAction> m_copyActions;
    bool m_copyActionsHasBeenSet = false;

    bool m_enableContinuousBackup;
    bool m_enableContinuousBackupHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
