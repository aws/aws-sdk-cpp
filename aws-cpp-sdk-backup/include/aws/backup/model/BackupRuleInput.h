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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Lifecycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_BACKUP_API BackupRuleInput
  {
  public:
    BackupRuleInput();
    BackupRuleInput(Aws::Utils::Json::JsonView jsonValue);
    BackupRuleInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline BackupRuleInput& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline BackupRuleInput& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>&gt;An optional display name for a backup rule.</p>
     */
    inline BackupRuleInput& WithRuleName(const char* value) { SetRuleName(value); return *this;}


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
    inline BackupRuleInput& WithTargetBackupVaultName(const Aws::String& value) { SetTargetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupRuleInput& WithTargetBackupVaultName(Aws::String&& value) { SetTargetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline BackupRuleInput& WithTargetBackupVaultName(const char* value) { SetTargetBackupVaultName(value); return *this;}


    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline BackupRuleInput& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline BackupRuleInput& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A CRON expression specifying when AWS Backup initiates a backup job.</p>
     */
    inline BackupRuleInput& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}


    /**
     * <p>The amount of time in minutes before beginning a backup.</p>
     */
    inline long long GetStartWindowMinutes() const{ return m_startWindowMinutes; }

    /**
     * <p>The amount of time in minutes before beginning a backup.</p>
     */
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }

    /**
     * <p>The amount of time in minutes before beginning a backup.</p>
     */
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }

    /**
     * <p>The amount of time in minutes before beginning a backup.</p>
     */
    inline BackupRuleInput& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}


    /**
     * <p>The amount of time AWS Backup attempts a backup before canceling the job and
     * returning an error.</p>
     */
    inline long long GetCompletionWindowMinutes() const{ return m_completionWindowMinutes; }

    /**
     * <p>The amount of time AWS Backup attempts a backup before canceling the job and
     * returning an error.</p>
     */
    inline bool CompletionWindowMinutesHasBeenSet() const { return m_completionWindowMinutesHasBeenSet; }

    /**
     * <p>The amount of time AWS Backup attempts a backup before canceling the job and
     * returning an error.</p>
     */
    inline void SetCompletionWindowMinutes(long long value) { m_completionWindowMinutesHasBeenSet = true; m_completionWindowMinutes = value; }

    /**
     * <p>The amount of time AWS Backup attempts a backup before canceling the job and
     * returning an error.</p>
     */
    inline BackupRuleInput& WithCompletionWindowMinutes(long long value) { SetCompletionWindowMinutes(value); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days”. The “transition to cold after days” setting
     * cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days”. The “transition to cold after days” setting
     * cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days”. The “transition to cold after days” setting
     * cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days”. The “transition to cold after days” setting
     * cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days”. The “transition to cold after days” setting
     * cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline BackupRuleInput& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. AWS Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “expire after days” setting must be 90 days greater than
     * the “transition to cold after days”. The “transition to cold after days” setting
     * cannot be changed after a backup has been transitioned to cold. </p>
     */
    inline BackupRuleInput& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecoveryPointTags() const{ return m_recoveryPointTags; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline bool RecoveryPointTagsHasBeenSet() const { return m_recoveryPointTagsHasBeenSet; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline void SetRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = value; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline void SetRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = std::move(value); }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& WithRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { SetRecoveryPointTags(value); return *this;}

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& WithRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { SetRecoveryPointTags(std::move(value)); return *this;}

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(const Aws::String& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(Aws::String&& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(const Aws::String& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(Aws::String&& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(const char* key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(Aws::String&& key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline BackupRuleInput& AddRecoveryPointTags(const char* key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
