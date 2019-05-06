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
  class AWS_BACKUP_API PutBackupVaultNotificationsRequest : public BackupRequest
  {
  public:
    PutBackupVaultNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBackupVaultNotifications"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
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
     * the backup vault.</p>
     */
    inline const Aws::Vector<BackupVaultEvent>& GetBackupVaultEvents() const{ return m_backupVaultEvents; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline bool BackupVaultEventsHasBeenSet() const { return m_backupVaultEventsHasBeenSet; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline void SetBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = value; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline void SetBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = std::move(value); }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { SetBackupVaultEvents(value); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline PutBackupVaultNotificationsRequest& WithBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { SetBackupVaultEvents(std::move(value)); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline PutBackupVaultNotificationsRequest& AddBackupVaultEvents(const BackupVaultEvent& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(value); return *this; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline PutBackupVaultNotificationsRequest& AddBackupVaultEvents(BackupVaultEvent&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet;

    Aws::String m_sNSTopicArn;
    bool m_sNSTopicArnHasBeenSet;

    Aws::Vector<BackupVaultEvent> m_backupVaultEvents;
    bool m_backupVaultEventsHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
