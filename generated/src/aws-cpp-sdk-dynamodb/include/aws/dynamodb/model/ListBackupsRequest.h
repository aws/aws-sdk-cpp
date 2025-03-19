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
    AWS_DYNAMODB_API ListBackupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackups"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>Lists the backups from the table specified in <code>TableName</code>. You can
     * also provide the Amazon Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ListBackupsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of backups to return at once.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListBackupsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeRangeLowerBound() const { return m_timeRangeLowerBound; }
    inline bool TimeRangeLowerBoundHasBeenSet() const { return m_timeRangeLowerBoundHasBeenSet; }
    template<typename TimeRangeLowerBoundT = Aws::Utils::DateTime>
    void SetTimeRangeLowerBound(TimeRangeLowerBoundT&& value) { m_timeRangeLowerBoundHasBeenSet = true; m_timeRangeLowerBound = std::forward<TimeRangeLowerBoundT>(value); }
    template<typename TimeRangeLowerBoundT = Aws::Utils::DateTime>
    ListBackupsRequest& WithTimeRangeLowerBound(TimeRangeLowerBoundT&& value) { SetTimeRangeLowerBound(std::forward<TimeRangeLowerBoundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline const Aws::Utils::DateTime& GetTimeRangeUpperBound() const { return m_timeRangeUpperBound; }
    inline bool TimeRangeUpperBoundHasBeenSet() const { return m_timeRangeUpperBoundHasBeenSet; }
    template<typename TimeRangeUpperBoundT = Aws::Utils::DateTime>
    void SetTimeRangeUpperBound(TimeRangeUpperBoundT&& value) { m_timeRangeUpperBoundHasBeenSet = true; m_timeRangeUpperBound = std::forward<TimeRangeUpperBoundT>(value); }
    template<typename TimeRangeUpperBoundT = Aws::Utils::DateTime>
    ListBackupsRequest& WithTimeRangeUpperBound(TimeRangeUpperBoundT&& value) { SetTimeRangeUpperBound(std::forward<TimeRangeUpperBoundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>LastEvaluatedBackupArn</code> is the Amazon Resource Name (ARN) of the
     * backup last evaluated when the current page of results was returned, inclusive
     * of the current page of results. This value may be specified as the
     * <code>ExclusiveStartBackupArn</code> of a new <code>ListBackups</code> operation
     * in order to fetch the next page of results. </p>
     */
    inline const Aws::String& GetExclusiveStartBackupArn() const { return m_exclusiveStartBackupArn; }
    inline bool ExclusiveStartBackupArnHasBeenSet() const { return m_exclusiveStartBackupArnHasBeenSet; }
    template<typename ExclusiveStartBackupArnT = Aws::String>
    void SetExclusiveStartBackupArn(ExclusiveStartBackupArnT&& value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn = std::forward<ExclusiveStartBackupArnT>(value); }
    template<typename ExclusiveStartBackupArnT = Aws::String>
    ListBackupsRequest& WithExclusiveStartBackupArn(ExclusiveStartBackupArnT&& value) { SetExclusiveStartBackupArn(std::forward<ExclusiveStartBackupArnT>(value)); return *this;}
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
    inline BackupTypeFilter GetBackupType() const { return m_backupType; }
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    inline void SetBackupType(BackupTypeFilter value) { m_backupTypeHasBeenSet = true; m_backupType = value; }
    inline ListBackupsRequest& WithBackupType(BackupTypeFilter value) { SetBackupType(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::Utils::DateTime m_timeRangeLowerBound{};
    bool m_timeRangeLowerBoundHasBeenSet = false;

    Aws::Utils::DateTime m_timeRangeUpperBound{};
    bool m_timeRangeUpperBoundHasBeenSet = false;

    Aws::String m_exclusiveStartBackupArn;
    bool m_exclusiveStartBackupArnHasBeenSet = false;

    BackupTypeFilter m_backupType{BackupTypeFilter::NOT_SET};
    bool m_backupTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
