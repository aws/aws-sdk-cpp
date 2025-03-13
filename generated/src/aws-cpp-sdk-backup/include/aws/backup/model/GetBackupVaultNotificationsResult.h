/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/BackupVaultEvent.h>
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
  class GetBackupVaultNotificationsResult
  {
  public:
    AWS_BACKUP_API GetBackupVaultNotificationsResult() = default;
    AWS_BACKUP_API GetBackupVaultNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupVaultNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    GetBackupVaultNotificationsResult& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:backup-vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const { return m_backupVaultArn; }
    template<typename BackupVaultArnT = Aws::String>
    void SetBackupVaultArn(BackupVaultArnT&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::forward<BackupVaultArnT>(value); }
    template<typename BackupVaultArnT = Aws::String>
    GetBackupVaultNotificationsResult& WithBackupVaultArn(BackupVaultArnT&& value) { SetBackupVaultArn(std::forward<BackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const { return m_sNSTopicArn; }
    template<typename SNSTopicArnT = Aws::String>
    void SetSNSTopicArn(SNSTopicArnT&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::forward<SNSTopicArnT>(value); }
    template<typename SNSTopicArnT = Aws::String>
    GetBackupVaultNotificationsResult& WithSNSTopicArn(SNSTopicArnT&& value) { SetSNSTopicArn(std::forward<SNSTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline const Aws::Vector<BackupVaultEvent>& GetBackupVaultEvents() const { return m_backupVaultEvents; }
    template<typename BackupVaultEventsT = Aws::Vector<BackupVaultEvent>>
    void SetBackupVaultEvents(BackupVaultEventsT&& value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents = std::forward<BackupVaultEventsT>(value); }
    template<typename BackupVaultEventsT = Aws::Vector<BackupVaultEvent>>
    GetBackupVaultNotificationsResult& WithBackupVaultEvents(BackupVaultEventsT&& value) { SetBackupVaultEvents(std::forward<BackupVaultEventsT>(value)); return *this;}
    inline GetBackupVaultNotificationsResult& AddBackupVaultEvents(BackupVaultEvent value) { m_backupVaultEventsHasBeenSet = true; m_backupVaultEvents.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBackupVaultNotificationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_sNSTopicArn;
    bool m_sNSTopicArnHasBeenSet = false;

    Aws::Vector<BackupVaultEvent> m_backupVaultEvents;
    bool m_backupVaultEventsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
