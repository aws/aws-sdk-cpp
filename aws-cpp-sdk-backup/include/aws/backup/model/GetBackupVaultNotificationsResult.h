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
  class AWS_BACKUP_API GetBackupVaultNotificationsResult
  {
  public:
    GetBackupVaultNotificationsResult();
    GetBackupVaultNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBackupVaultNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const{ return m_sNSTopicArn; }

    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline void SetSNSTopicArn(const Aws::String& value) { m_sNSTopicArn = value; }

    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline void SetSNSTopicArn(Aws::String&& value) { m_sNSTopicArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline void SetSNSTopicArn(const char* value) { m_sNSTopicArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline GetBackupVaultNotificationsResult& WithSNSTopicArn(const Aws::String& value) { SetSNSTopicArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline GetBackupVaultNotificationsResult& WithSNSTopicArn(Aws::String&& value) { SetSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies an Amazon Simple Notification Service (Amazon
     * SNS) topic; for example,
     * <code>arn:aws:sns:us-west-2:111122223333:MyTopic</code>.</p>
     */
    inline GetBackupVaultNotificationsResult& WithSNSTopicArn(const char* value) { SetSNSTopicArn(value); return *this;}


    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline const Aws::Vector<BackupVaultEvent>& GetBackupVaultEvents() const{ return m_backupVaultEvents; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline void SetBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { m_backupVaultEvents = value; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline void SetBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { m_backupVaultEvents = std::move(value); }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultEvents(const Aws::Vector<BackupVaultEvent>& value) { SetBackupVaultEvents(value); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline GetBackupVaultNotificationsResult& WithBackupVaultEvents(Aws::Vector<BackupVaultEvent>&& value) { SetBackupVaultEvents(std::move(value)); return *this;}

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline GetBackupVaultNotificationsResult& AddBackupVaultEvents(const BackupVaultEvent& value) { m_backupVaultEvents.push_back(value); return *this; }

    /**
     * <p>An array of events that indicate the status of jobs to back up resources to
     * the backup vault.</p>
     */
    inline GetBackupVaultNotificationsResult& AddBackupVaultEvents(BackupVaultEvent&& value) { m_backupVaultEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_sNSTopicArn;

    Aws::Vector<BackupVaultEvent> m_backupVaultEvents;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
