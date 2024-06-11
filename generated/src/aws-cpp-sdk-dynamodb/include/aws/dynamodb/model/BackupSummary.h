/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BackupSummary
  {
  public:
    AWS_DYNAMODB_API BackupSummary();
    AWS_DYNAMODB_API BackupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BackupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BackupSummary& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BackupSummary& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BackupSummary& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the table.</p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }
    inline BackupSummary& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}
    inline BackupSummary& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}
    inline BackupSummary& WithTableId(const char* value) { SetTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN associated with the table.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }
    inline BackupSummary& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}
    inline BackupSummary& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}
    inline BackupSummary& WithTableArn(const char* value) { SetTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }
    inline BackupSummary& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}
    inline BackupSummary& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}
    inline BackupSummary& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the specified backup.</p>
     */
    inline const Aws::String& GetBackupName() const{ return m_backupName; }
    inline bool BackupNameHasBeenSet() const { return m_backupNameHasBeenSet; }
    inline void SetBackupName(const Aws::String& value) { m_backupNameHasBeenSet = true; m_backupName = value; }
    inline void SetBackupName(Aws::String&& value) { m_backupNameHasBeenSet = true; m_backupName = std::move(value); }
    inline void SetBackupName(const char* value) { m_backupNameHasBeenSet = true; m_backupName.assign(value); }
    inline BackupSummary& WithBackupName(const Aws::String& value) { SetBackupName(value); return *this;}
    inline BackupSummary& WithBackupName(Aws::String&& value) { SetBackupName(std::move(value)); return *this;}
    inline BackupSummary& WithBackupName(const char* value) { SetBackupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationDateTime() const{ return m_backupCreationDateTime; }
    inline bool BackupCreationDateTimeHasBeenSet() const { return m_backupCreationDateTimeHasBeenSet; }
    inline void SetBackupCreationDateTime(const Aws::Utils::DateTime& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = value; }
    inline void SetBackupCreationDateTime(Aws::Utils::DateTime&& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = std::move(value); }
    inline BackupSummary& WithBackupCreationDateTime(const Aws::Utils::DateTime& value) { SetBackupCreationDateTime(value); return *this;}
    inline BackupSummary& WithBackupCreationDateTime(Aws::Utils::DateTime&& value) { SetBackupCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupExpiryDateTime() const{ return m_backupExpiryDateTime; }
    inline bool BackupExpiryDateTimeHasBeenSet() const { return m_backupExpiryDateTimeHasBeenSet; }
    inline void SetBackupExpiryDateTime(const Aws::Utils::DateTime& value) { m_backupExpiryDateTimeHasBeenSet = true; m_backupExpiryDateTime = value; }
    inline void SetBackupExpiryDateTime(Aws::Utils::DateTime&& value) { m_backupExpiryDateTimeHasBeenSet = true; m_backupExpiryDateTime = std::move(value); }
    inline BackupSummary& WithBackupExpiryDateTime(const Aws::Utils::DateTime& value) { SetBackupExpiryDateTime(value); return *this;}
    inline BackupSummary& WithBackupExpiryDateTime(Aws::Utils::DateTime&& value) { SetBackupExpiryDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline const BackupStatus& GetBackupStatus() const{ return m_backupStatus; }
    inline bool BackupStatusHasBeenSet() const { return m_backupStatusHasBeenSet; }
    inline void SetBackupStatus(const BackupStatus& value) { m_backupStatusHasBeenSet = true; m_backupStatus = value; }
    inline void SetBackupStatus(BackupStatus&& value) { m_backupStatusHasBeenSet = true; m_backupStatus = std::move(value); }
    inline BackupSummary& WithBackupStatus(const BackupStatus& value) { SetBackupStatus(value); return *this;}
    inline BackupSummary& WithBackupStatus(BackupStatus&& value) { SetBackupStatus(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    inline void SetBackupType(const BackupType& value) { m_backupTypeHasBeenSet = true; m_backupType = value; }
    inline void SetBackupType(BackupType&& value) { m_backupTypeHasBeenSet = true; m_backupType = std::move(value); }
    inline BackupSummary& WithBackupType(const BackupType& value) { SetBackupType(value); return *this;}
    inline BackupSummary& WithBackupType(BackupType&& value) { SetBackupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline long long GetBackupSizeBytes() const{ return m_backupSizeBytes; }
    inline bool BackupSizeBytesHasBeenSet() const { return m_backupSizeBytesHasBeenSet; }
    inline void SetBackupSizeBytes(long long value) { m_backupSizeBytesHasBeenSet = true; m_backupSizeBytes = value; }
    inline BackupSummary& WithBackupSizeBytes(long long value) { SetBackupSizeBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;

    Aws::String m_backupName;
    bool m_backupNameHasBeenSet = false;

    Aws::Utils::DateTime m_backupCreationDateTime;
    bool m_backupCreationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_backupExpiryDateTime;
    bool m_backupExpiryDateTimeHasBeenSet = false;

    BackupStatus m_backupStatus;
    bool m_backupStatusHasBeenSet = false;

    BackupType m_backupType;
    bool m_backupTypeHasBeenSet = false;

    long long m_backupSizeBytes;
    bool m_backupSizeBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
