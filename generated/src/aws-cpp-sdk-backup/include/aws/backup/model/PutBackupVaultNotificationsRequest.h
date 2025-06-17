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
    AWS_BACKUP_API PutBackupVaultNotificationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBackupVaultNotifications"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    PutBackupVaultNotificationsRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that specifies the topic for a backup vault’s
     * events; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyVaultTopic</code>.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const { return m_sNSTopicArn; }
    inline bool SNSTopicArnHasBeenSet() const { return m_sNSTopicArnHasBeenSet; }
    template<typename SNSTopicArnT = Aws::String>
    void SetSNSTopicArn(SNSTopicArnT&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::forward<SNSTopicArnT>(value); }
    template<typename SNSTopicArnT = Aws::String>
    PutBackupVaultNotificationsRequest& WithSNSTopicArn(SNSTopicArnT&& value) { SetSNSTopicArn(std::forward<SNSTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault. For the list of supported events, common use cases, and code
     * samples, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-notifications.html">Notification
     * options with Backup</a>.</p>
     */
    inline const Aws::Vector<BackupVaultEvent>& GetBackupVaultEvents() const { return m_backupVaultEvents; }
    inline bool BackupVaultEventsHasBeenSet() const { return m_backupVaultEventsHasBeenSet; }
    template<typename BackupVaultEventsT = Aws::Vector<BackupVaultEvent>>
    void SetBackupVaultEvents(BackupVaultEventsT&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = std::forward<BackupVaultEventsT>(value); }
    template<typename BackupVaultEventsT = Aws::Vector<BackupVaultEvent>>
    PutBackupVaultNotificationsRequest& WithBackupVaultEvents(BackupVaultEventsT&& value) { SetBackupVaultEvents(std::forward<BackupVaultEventsT>(value)); return *this;}
    inline PutBackupVaultNotificationsRequest& AddBackupVaultEvents(BackupVaultEvent value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(value); return *this; }
    ///@}
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
