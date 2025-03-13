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
    AWS_DYNAMODB_API BackupSummary() = default;
    AWS_DYNAMODB_API BackupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BackupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    BackupSummary& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the table.</p>
     */
    inline const Aws::String& GetTableId() const { return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    template<typename TableIdT = Aws::String>
    void SetTableId(TableIdT&& value) { m_tableIdHasBeenSet = true; m_tableId = std::forward<TableIdT>(value); }
    template<typename TableIdT = Aws::String>
    BackupSummary& WithTableId(TableIdT&& value) { SetTableId(std::forward<TableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN associated with the table.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    BackupSummary& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const { return m_backupArn; }
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }
    template<typename BackupArnT = Aws::String>
    void SetBackupArn(BackupArnT&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::forward<BackupArnT>(value); }
    template<typename BackupArnT = Aws::String>
    BackupSummary& WithBackupArn(BackupArnT&& value) { SetBackupArn(std::forward<BackupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the specified backup.</p>
     */
    inline const Aws::String& GetBackupName() const { return m_backupName; }
    inline bool BackupNameHasBeenSet() const { return m_backupNameHasBeenSet; }
    template<typename BackupNameT = Aws::String>
    void SetBackupName(BackupNameT&& value) { m_backupNameHasBeenSet = true; m_backupName = std::forward<BackupNameT>(value); }
    template<typename BackupNameT = Aws::String>
    BackupSummary& WithBackupName(BackupNameT&& value) { SetBackupName(std::forward<BackupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationDateTime() const { return m_backupCreationDateTime; }
    inline bool BackupCreationDateTimeHasBeenSet() const { return m_backupCreationDateTimeHasBeenSet; }
    template<typename BackupCreationDateTimeT = Aws::Utils::DateTime>
    void SetBackupCreationDateTime(BackupCreationDateTimeT&& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = std::forward<BackupCreationDateTimeT>(value); }
    template<typename BackupCreationDateTimeT = Aws::Utils::DateTime>
    BackupSummary& WithBackupCreationDateTime(BackupCreationDateTimeT&& value) { SetBackupCreationDateTime(std::forward<BackupCreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the automatic on-demand backup created by DynamoDB will expire.
     * This <code>SYSTEM</code> on-demand backup expires automatically 35 days after
     * its creation.</p>
     */
    inline const Aws::Utils::DateTime& GetBackupExpiryDateTime() const { return m_backupExpiryDateTime; }
    inline bool BackupExpiryDateTimeHasBeenSet() const { return m_backupExpiryDateTimeHasBeenSet; }
    template<typename BackupExpiryDateTimeT = Aws::Utils::DateTime>
    void SetBackupExpiryDateTime(BackupExpiryDateTimeT&& value) { m_backupExpiryDateTimeHasBeenSet = true; m_backupExpiryDateTime = std::forward<BackupExpiryDateTimeT>(value); }
    template<typename BackupExpiryDateTimeT = Aws::Utils::DateTime>
    BackupSummary& WithBackupExpiryDateTime(BackupExpiryDateTimeT&& value) { SetBackupExpiryDateTime(std::forward<BackupExpiryDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED.</p>
     */
    inline BackupStatus GetBackupStatus() const { return m_backupStatus; }
    inline bool BackupStatusHasBeenSet() const { return m_backupStatusHasBeenSet; }
    inline void SetBackupStatus(BackupStatus value) { m_backupStatusHasBeenSet = true; m_backupStatus = value; }
    inline BackupSummary& WithBackupStatus(BackupStatus value) { SetBackupStatus(value); return *this;}
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
    inline BackupType GetBackupType() const { return m_backupType; }
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    inline void SetBackupType(BackupType value) { m_backupTypeHasBeenSet = true; m_backupType = value; }
    inline BackupSummary& WithBackupType(BackupType value) { SetBackupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline long long GetBackupSizeBytes() const { return m_backupSizeBytes; }
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

    Aws::Utils::DateTime m_backupCreationDateTime{};
    bool m_backupCreationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_backupExpiryDateTime{};
    bool m_backupExpiryDateTimeHasBeenSet = false;

    BackupStatus m_backupStatus{BackupStatus::NOT_SET};
    bool m_backupStatusHasBeenSet = false;

    BackupType m_backupType{BackupType::NOT_SET};
    bool m_backupTypeHasBeenSet = false;

    long long m_backupSizeBytes{0};
    bool m_backupSizeBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
