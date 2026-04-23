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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/BackupStatus.h>
#include <aws/dynamodb/model/BackupType.h>
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
   * <p>Contains details for the backup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BackupSummary">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BackupSummary
  {
  public:
    BackupSummary();
    BackupSummary(Aws::Utils::Json::JsonView jsonValue);
    BackupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of the table.</p>
     */
    inline BackupSummary& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the table.</p>
     */
    inline BackupSummary& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the table.</p>
     */
    inline BackupSummary& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Unique identifier for the table.</p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline BackupSummary& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline BackupSummary& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the table.</p>
     */
    inline BackupSummary& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>ARN associated with the table.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>ARN associated with the table.</p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>ARN associated with the table.</p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>ARN associated with the table.</p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>ARN associated with the table.</p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>ARN associated with the table.</p>
     */
    inline BackupSummary& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>ARN associated with the table.</p>
     */
    inline BackupSummary& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>ARN associated with the table.</p>
     */
    inline BackupSummary& WithTableArn(const char* value) { SetTableArn(value); return *this;}


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
    inline BackupSummary& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupSummary& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupSummary& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}


    /**
     * <p>Name of the specified backup.</p>
     */
    inline const Aws::String& GetBackupName() const{ return m_backupName; }

    /**
     * <p>Name of the specified backup.</p>
     */
    inline bool BackupNameHasBeenSet() const { return m_backupNameHasBeenSet; }

    /**
     * <p>Name of the specified backup.</p>
     */
    inline void SetBackupName(const Aws::String& value) { m_backupNameHasBeenSet = true; m_backupName = value; }

    /**
     * <p>Name of the specified backup.</p>
     */
    inline void SetBackupName(Aws::String&& value) { m_backupNameHasBeenSet = true; m_backupName = std::move(value); }

    /**
     * <p>Name of the specified backup.</p>
     */
    inline void SetBackupName(const char* value) { m_backupNameHasBeenSet = true; m_backupName.assign(value); }

    /**
     * <p>Name of the specified backup.</p>
     */
    inline BackupSummary& WithBackupName(const Aws::String& value) { SetBackupName(value); return *this;}

    /**
     * <p>Name of the specified backup.</p>
     */
    inline BackupSummary& WithBackupName(Aws::String&& value) { SetBackupName(std::move(value)); return *this;}

    /**
     * <p>Name of the specified backup.</p>
     */
    inline BackupSummary& WithBackupName(const char* value) { SetBackupName(value); return *this;}


    /**
     * <p>Time at which the backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationDateTime() const{ return m_backupCreationDateTime; }

    /**
     * <p>Time at which the backup was created.</p>
     */
    inline bool BackupCreationDateTimeHasBeenSet() const { return m_backupCreationDateTimeHasBeenSet; }

    /**
     * <p>Time at which the backup was created.</p>
     */
    inline void SetBackupCreationDateTime(const Aws::Utils::DateTime& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = value; }

    /**
     * <p>Time at which the backup was created.</p>
     */
    inline void SetBackupCreationDateTime(Aws::Utils::DateTime&& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = std::move(value); }

    /**
     * <p>Time at which the backup was created.</p>
     */
    inline BackupSummary& WithBackupCreationDateTime(const Aws::Utils::DateTime& value) { SetBackupCreationDateTime(value); return *this;}

    /**
     * <p>Time at which the backup was created.</p>
     */
    inline BackupSummary& WithBackupCreationDateTime(Aws::Utils::DateTime&& value) { SetBackupCreationDateTime(std::move(value)); return *this;}


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
    inline BackupSummary& WithBackupExpiryDateTime(const Aws::Utils::DateTime& value) { SetBackupExpiryDateTime(value); return *this;}

    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline BackupSummary& WithBackupExpiryDateTime(Aws::Utils::DateTime&& value) { SetBackupExpiryDateTime(std::move(value)); return *this;}


    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline const BackupStatus& GetBackupStatus() const{ return m_backupStatus; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline bool BackupStatusHasBeenSet() const { return m_backupStatusHasBeenSet; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline void SetBackupStatus(const BackupStatus& value) { m_backupStatusHasBeenSet = true; m_backupStatus = value; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline void SetBackupStatus(BackupStatus&& value) { m_backupStatusHasBeenSet = true; m_backupStatus = std::move(value); }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline BackupSummary& WithBackupStatus(const BackupStatus& value) { SetBackupStatus(value); return *this;}

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline BackupSummary& WithBackupStatus(BackupStatus&& value) { SetBackupStatus(std::move(value)); return *this;}


    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from AWS Backup
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
     * <code>AWS_BACKUP</code> - On-demand backup created by you from AWS Backup
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
     * <code>AWS_BACKUP</code> - On-demand backup created by you from AWS Backup
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
     * <code>AWS_BACKUP</code> - On-demand backup created by you from AWS Backup
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
     * <code>AWS_BACKUP</code> - On-demand backup created by you from AWS Backup
     * service.</p> </li> </ul>
     */
    inline BackupSummary& WithBackupType(const BackupType& value) { SetBackupType(value); return *this;}

    /**
     * <p>BackupType:</p> <ul> <li> <p> <code>USER</code> - You create and manage these
     * using the on-demand backup feature.</p> </li> <li> <p> <code>SYSTEM</code> - If
     * you delete a table with point-in-time recovery enabled, a <code>SYSTEM</code>
     * backup is automatically created and is retained for 35 days (at no additional
     * cost). System backups allow you to restore the deleted table to the state it was
     * in just before the point of deletion. </p> </li> <li> <p>
     * <code>AWS_BACKUP</code> - On-demand backup created by you from AWS Backup
     * service.</p> </li> </ul>
     */
    inline BackupSummary& WithBackupType(BackupType&& value) { SetBackupType(std::move(value)); return *this;}


    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline long long GetBackupSizeBytes() const{ return m_backupSizeBytes; }

    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline bool BackupSizeBytesHasBeenSet() const { return m_backupSizeBytesHasBeenSet; }

    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline void SetBackupSizeBytes(long long value) { m_backupSizeBytesHasBeenSet = true; m_backupSizeBytes = value; }

    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline BackupSummary& WithBackupSizeBytes(long long value) { SetBackupSizeBytes(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet;

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet;

    Aws::String m_backupName;
    bool m_backupNameHasBeenSet;

    Aws::Utils::DateTime m_backupCreationDateTime;
    bool m_backupCreationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_backupExpiryDateTime;
    bool m_backupExpiryDateTimeHasBeenSet;

    BackupStatus m_backupStatus;
    bool m_backupStatusHasBeenSet;

    BackupType m_backupType;
    bool m_backupTypeHasBeenSet;

    long long m_backupSizeBytes;
    bool m_backupSizeBytesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
