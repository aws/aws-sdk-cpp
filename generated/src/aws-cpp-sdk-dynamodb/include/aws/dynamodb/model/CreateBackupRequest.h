/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class CreateBackupRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API CreateBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackup"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline CreateBackupRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline CreateBackupRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline CreateBackupRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Specified name for the backup.</p>
     */
    inline const Aws::String& GetBackupName() const{ return m_backupName; }

    /**
     * <p>Specified name for the backup.</p>
     */
    inline bool BackupNameHasBeenSet() const { return m_backupNameHasBeenSet; }

    /**
     * <p>Specified name for the backup.</p>
     */
    inline void SetBackupName(const Aws::String& value) { m_backupNameHasBeenSet = true; m_backupName = value; }

    /**
     * <p>Specified name for the backup.</p>
     */
    inline void SetBackupName(Aws::String&& value) { m_backupNameHasBeenSet = true; m_backupName = std::move(value); }

    /**
     * <p>Specified name for the backup.</p>
     */
    inline void SetBackupName(const char* value) { m_backupNameHasBeenSet = true; m_backupName.assign(value); }

    /**
     * <p>Specified name for the backup.</p>
     */
    inline CreateBackupRequest& WithBackupName(const Aws::String& value) { SetBackupName(value); return *this;}

    /**
     * <p>Specified name for the backup.</p>
     */
    inline CreateBackupRequest& WithBackupName(Aws::String&& value) { SetBackupName(std::move(value)); return *this;}

    /**
     * <p>Specified name for the backup.</p>
     */
    inline CreateBackupRequest& WithBackupName(const char* value) { SetBackupName(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_backupName;
    bool m_backupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
