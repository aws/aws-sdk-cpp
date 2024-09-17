/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/BackupTypeFilter.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ListBackupsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ListBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackups"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Lists the backups from the table specified in <code>TableName</code>. You can
     * also provide the Amazon Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ListBackupsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ListBackupsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ListBackupsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of backups to return at once.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListBackupsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeRangeLowerBound() const{ return m_timeRangeLowerBound; }
    inline bool TimeRangeLowerBoundHasBeenSet() const { return m_timeRangeLowerBoundHasBeenSet; }
    inline void SetTimeRangeLowerBound(const Aws::Utils::DateTime& value) { m_timeRangeLowerBoundHasBeenSet = true; m_timeRangeLowerBound = value; }
    inline void SetTimeRangeLowerBound(Aws::Utils::DateTime&& value) { m_timeRangeLowerBoundHasBeenSet = true; m_timeRangeLowerBound = std::move(value); }
    inline ListBackupsRequest& WithTimeRangeLowerBound(const Aws::Utils::DateTime& value) { SetTimeRangeLowerBound(value); return *this;}
    inline ListBackupsRequest& WithTimeRangeLowerBound(Aws::Utils::DateTime&& value) { SetTimeRangeLowerBound(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline const Aws::Utils::DateTime& GetTimeRangeUpperBound() const{ return m_timeRangeUpperBound; }
    inline bool TimeRangeUpperBoundHasBeenSet() const { return m_timeRangeUpperBoundHasBeenSet; }
    inline void SetTimeRangeUpperBound(const Aws::Utils::DateTime& value) { m_timeRangeUpperBoundHasBeenSet = true; m_timeRangeUpperBound = value; }
    inline void SetTimeRangeUpperBound(Aws::Utils::DateTime&& value) { m_timeRangeUpperBoundHasBeenSet = true; m_timeRangeUpperBound = std::move(value); }
    inline ListBackupsRequest& WithTimeRangeUpperBound(const Aws::Utils::DateTime& value) { SetTimeRangeUpperBound(value); return *this;}
    inline ListBackupsRequest& WithTimeRangeUpperBound(Aws::Utils::DateTime&& value) { SetTimeRangeUpperBound(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>LastEvaluatedBackupArn</code> is the Amazon Resource Name (ARN) of the
     * backup last evaluated when the current page of results was returned, inclusive
     * of the current page of results. This value may be specified as the
     * <code>ExclusiveStartBackupArn</code> of a new <code>ListBackups</code> operation
     * in order to fetch the next page of results. </p>
     */
    inline const Aws::String& GetExclusiveStartBackupArn() const{ return m_exclusiveStartBackupArn; }
    inline bool ExclusiveStartBackupArnHasBeenSet() const { return m_exclusiveStartBackupArnHasBeenSet; }
    inline void SetExclusiveStartBackupArn(const Aws::String& value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn = value; }
    inline void SetExclusiveStartBackupArn(Aws::String&& value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn = std::move(value); }
    inline void SetExclusiveStartBackupArn(const char* value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn.assign(value); }
    inline ListBackupsRequest& WithExclusiveStartBackupArn(const Aws::String& value) { SetExclusiveStartBackupArn(value); return *this;}
    inline ListBackupsRequest& WithExclusiveStartBackupArn(Aws::String&& value) { SetExclusiveStartBackupArn(std::move(value)); return *this;}
    inline ListBackupsRequest& WithExclusiveStartBackupArn(const char* value) { SetExclusiveStartBackupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backups from the table specified by <code>BackupType</code> are
     * listed.</p> <p>Where <code>BackupType</code> can be:</p> <ul> <li> <p>
     * <code>USER</code> - On-demand backup created by you. (The default setting if no
     * other backup types are specified.)</p> </li> <li> <p> <code>SYSTEM</code> -
     * On-demand backup automatically created by DynamoDB.</p> </li> <li> <p>
     * <code>ALL</code> - All types of on-demand backups (USER and SYSTEM).</p> </li>
     * </ul>
     */
    inline const BackupTypeFilter& GetBackupType() const{ return m_backupType; }
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    inline void SetBackupType(const BackupTypeFilter& value) { m_backupTypeHasBeenSet = true; m_backupType = value; }
    inline void SetBackupType(BackupTypeFilter&& value) { m_backupTypeHasBeenSet = true; m_backupType = std::move(value); }
    inline ListBackupsRequest& WithBackupType(const BackupTypeFilter& value) { SetBackupType(value); return *this;}
    inline ListBackupsRequest& WithBackupType(BackupTypeFilter&& value) { SetBackupType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::Utils::DateTime m_timeRangeLowerBound;
    bool m_timeRangeLowerBoundHasBeenSet = false;

    Aws::Utils::DateTime m_timeRangeUpperBound;
    bool m_timeRangeUpperBoundHasBeenSet = false;

    Aws::String m_exclusiveStartBackupArn;
    bool m_exclusiveStartBackupArnHasBeenSet = false;

    BackupTypeFilter m_backupType;
    bool m_backupTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
