/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BackupStatus.h>
#include <aws/dynamodb/model/BackupType.h>
#include <aws/core/utils/DateTime.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains the details of the backup created for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BackupDetails">AWS
   * API Reference</a></p>
   */
  class BackupDetails
  {
  public:
    AWS_DYNAMODB_API BackupDetails();
    AWS_DYNAMODB_API BackupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BackupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupDetails& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupDetails& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupDetails& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}


    /**
     * <p>Name of the requested backup.</p>
     */
    inline const Aws::String& GetBackupName() const{ return m_backupName; }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline bool BackupNameHasBeenSet() const { return m_backupNameHasBeenSet; }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline void SetBackupName(const Aws::String& value) { m_backupNameHasBeenSet = true; m_backupName = value; }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline void SetBackupName(Aws::String&& value) { m_backupNameHasBeenSet = true; m_backupName = std::move(value); }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline void SetBackupName(const char* value) { m_backupNameHasBeenSet = true; m_backupName.assign(value); }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline BackupDetails& WithBackupName(const Aws::String& value) { SetBackupName(value); return *this;}

    /**
     * <p>Name of the requested backup.</p>
     */
    inline BackupDetails& WithBackupName(Aws::String&& value) { SetBackupName(std::move(value)); return *this;}

    /**
     * <p>Name of the requested backup.</p>
     */
    inline BackupDetails& WithBackupName(const char* value) { SetBackupName(value); return *this;}


    /**
     * <p>Size of the backup in bytes. DynamoDB updates this value approximately every
     * six hours. Recent changes might not be reflected in this value.</p>
     */
    inline long long GetBackupSizeBytes() const{ return m_backupSizeBytes; }

    /**
     * <p>Size of the backup in bytes. DynamoDB updates this value approximately every
     * six hours. Recent changes might not be reflected in this value.</p>
     */
    inline bool BackupSizeBytesHasBeenSet() const { return m_backupSizeBytesHasBeenSet; }

    /**
     * <p>Size of the backup in bytes. DynamoDB updates this value approximately every
     * six hours. Recent changes might not be reflected in this value.</p>
     */
    inline void SetBackupSizeBytes(long long value) { m_backupSizeBytesHasBeenSet = true; m_backupSizeBytes = value; }

    /**
     * <p>Size of the backup in bytes. DynamoDB updates this value approximately every
     * six hours. Recent changes might not be reflected in this value.</p>
     */
    inline BackupDetails& WithBackupSizeBytes(long long value) { SetBackupSizeBytes(value); return *this;}


    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline const BackupStatus& GetBackupStatus() const{ return m_backupStatus; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline bool BackupStatusHasBeenSet() const { return m_backupStatusHasBeenSet; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline void SetBackupStatus(const BackupStatus& value) { m_backupStatusHasBeenSet = true; m_backupStatus = value; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline void SetBackupStatus(BackupStatus&& value) { m_backupStatusHasBeenSet = true; m_backupStatus = std::move(value); }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline BackupDetails& WithBackupStatus(const BackupStatus& value) { SetBackupStatus(value); return *this;}

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline BackupDetails& WithBackupStatus(BackupStatus&& value) { SetBackupStatus(std::move(value)); return *this;}


    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from Backup
     * service.</p> </li> </ul>
     */
    inline const BackupType& GetBackupType() const{ return m_backupType; }

    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from Backup
     * service.</p> </li> </ul>
     */
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }

    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from Backup
     * service.</p> </li> </ul>
     */
    inline void SetBackupType(const BackupType& value) { m_backupTypeHasBeenSet = true; m_backupType = value; }

    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from Backup
     * service.</p> </li> </ul>
     */
    inline void SetBackupType(BackupType&& value) { m_backupTypeHasBeenSet = true; m_backupType = std::move(value); }

    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from Backup
     * service.</p> </li> </ul>
     */
    inline BackupDetails& WithBackupType(const BackupType& value) { SetBackupType(value); return *this;}

    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from Backup
     * service.</p> </li> </ul>
     */
    inline BackupDetails& WithBackupType(BackupType&& value) { SetBackupType(std::move(value)); return *this;}


    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationDateTime() const{ return m_backupCreationDateTime; }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline bool BackupCreationDateTimeHasBeenSet() const { return m_backupCreationDateTimeHasBeenSet; }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline void SetBackupCreationDateTime(const Aws::Utils::DateTime& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = value; }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline void SetBackupCreationDateTime(Aws::Utils::DateTime&& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = std::move(value); }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline BackupDetails& WithBackupCreationDateTime(const Aws::Utils::DateTime& value) { SetBackupCreationDateTime(value); return *this;}

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline BackupDetails& WithBackupCreationDateTime(Aws::Utils::DateTime&& value) { SetBackupCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupExpiryDateTime() const{ return m_backupExpiryDateTime; }

    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline bool BackupExpiryDateTimeHasBeenSet() const { return m_backupExpiryDateTimeHasBeenSet; }

    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline void SetBackupExpiryDateTime(const Aws::Utils::DateTime& value) { m_backupExpiryDateTimeHasBeenSet = true; m_backupExpiryDateTime = value; }

    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline void SetBackupExpiryDateTime(Aws::Utils::DateTime&& value) { m_backupExpiryDateTimeHasBeenSet = true; m_backupExpiryDateTime = std::move(value); }

    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline BackupDetails& WithBackupExpiryDateTime(const Aws::Utils::DateTime& value) { SetBackupExpiryDateTime(value); return *this;}

    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline BackupDetails& WithBackupExpiryDateTime(Aws::Utils::DateTime&& value) { SetBackupExpiryDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;

    Aws::String m_backupName;
    bool m_backupNameHasBeenSet = false;

    long long m_backupSizeBytes;
    bool m_backupSizeBytesHasBeenSet = false;

    BackupStatus m_backupStatus;
    bool m_backupStatusHasBeenSet = false;

    BackupType m_backupType;
    bool m_backupTypeHasBeenSet = false;

    Aws::Utils::DateTime m_backupCreationDateTime;
    bool m_backupCreationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_backupExpiryDateTime;
    bool m_backupExpiryDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
