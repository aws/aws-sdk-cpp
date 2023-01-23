/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupVaultEvent.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class PutBackupVaultNotificationsRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API PutBackupVaultNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBackupVaultNotifications"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const{ return m_sNSTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline bool SNSTopicArnHasBeenSet() const { return m_sNSTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline void SetSNSTopicArn(const Aws::String& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline void SetSNSTopicArn(Aws::String&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline void SetSNSTopicArn(const char* value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithSNSTopicArn(const Aws::String& value) { SetSNSTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithSNSTopicArn(Aws::String&& value) { SetSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithSNSTopicArn(const char* value) { SetSNSTopicArn(value); return *this;}


    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline const Aws::Vector<BackupVaultEvent>& GetBackupVaultEvents() const{ return m_backupVaultEvents; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline bool BackupVaultEventsHasBeenSet() const { return m_backupVaultEventsHasBeenSet; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline void SetBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = value; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline void SetBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = std::move(value); }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { SetBackupVaultEvents(value); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { SetBackupVaultEvents(std::move(value)); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline PutBackupVaultNotificationsRequest& AddBackupVaultEvents(const BackupVaultEvent& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(value); return *this; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p> <p>For common use cases and code samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/sns-notifications.html">Using
     * Amazon SNS to track Backup events</a>.</p> <p>The following events are
     * supported:</p> <ul> <li> <p> <code>BACKUP_JOB_STARTED</code> |
     * <code>BACKUP_JOB_COMPLETED</code> </p> </li> <li> <p>
     * <code>COPY_JOB_STARTED</code> | <code>COPY_JOB_SUCCESSFUL</code> |
     * <code>COPY_JOB_FAILED</code> </p> </li> <li> <p>
     * <code>RESTORE_JOB_STARTED</code> | <code>RESTORE_JOB_COMPLETED</code> |
     * <code>RECOVERY_POINT_MODIFIED</code> </p> </li> <li> <p>
     * <code>S3_BACKUP_OBJECT_FAILED</code> | <code>S3_RESTORE_OBJECT_FAILED</code>
     * </p> </li> </ul>  <p>The list below shows items that are deprecated events
     * (for reference) and are no longer in use. They are no longer supported and will
     * not return statuses or notifications. Refer to the list above for current
     * supported events.</p> 
     */
    inline PutBackupVaultNotificationsRequest& AddBackupVaultEvents(BackupVaultEvent&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_sNSTopicArn;
    bool m_sNSTopicArnHasBeenSet = false;

    Aws::Vector<BackupVaultEvent> m_backupVaultEvents;
    bool m_backupVaultEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
