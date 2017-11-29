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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class AWS_DYNAMODB_API ListBackupsRequest : public DynamoDBRequest
  {
  public:
    ListBackupsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBackups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline ListBackupsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline ListBackupsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The backups from the table specified by TableName are listed. </p>
     */
    inline ListBackupsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Maximum number of backups to return at once.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of backups to return at once.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of backups to return at once.</p>
     */
    inline ListBackupsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeRangeLowerBound() const{ return m_timeRangeLowerBound; }

    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline void SetTimeRangeLowerBound(const Aws::Utils::DateTime& value) { m_timeRangeLowerBoundHasBeenSet = true; m_timeRangeLowerBound = value; }

    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline void SetTimeRangeLowerBound(Aws::Utils::DateTime&& value) { m_timeRangeLowerBoundHasBeenSet = true; m_timeRangeLowerBound = std::move(value); }

    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline ListBackupsRequest& WithTimeRangeLowerBound(const Aws::Utils::DateTime& value) { SetTimeRangeLowerBound(value); return *this;}

    /**
     * <p>Only backups created after this time are listed.
     * <code>TimeRangeLowerBound</code> is inclusive.</p>
     */
    inline ListBackupsRequest& WithTimeRangeLowerBound(Aws::Utils::DateTime&& value) { SetTimeRangeLowerBound(std::move(value)); return *this;}


    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline const Aws::Utils::DateTime& GetTimeRangeUpperBound() const{ return m_timeRangeUpperBound; }

    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline void SetTimeRangeUpperBound(const Aws::Utils::DateTime& value) { m_timeRangeUpperBoundHasBeenSet = true; m_timeRangeUpperBound = value; }

    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline void SetTimeRangeUpperBound(Aws::Utils::DateTime&& value) { m_timeRangeUpperBoundHasBeenSet = true; m_timeRangeUpperBound = std::move(value); }

    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline ListBackupsRequest& WithTimeRangeUpperBound(const Aws::Utils::DateTime& value) { SetTimeRangeUpperBound(value); return *this;}

    /**
     * <p>Only backups created before this time are listed.
     * <code>TimeRangeUpperBound</code> is exclusive. </p>
     */
    inline ListBackupsRequest& WithTimeRangeUpperBound(Aws::Utils::DateTime&& value) { SetTimeRangeUpperBound(std::move(value)); return *this;}


    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline const Aws::String& GetExclusiveStartBackupArn() const{ return m_exclusiveStartBackupArn; }

    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline void SetExclusiveStartBackupArn(const Aws::String& value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn = value; }

    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline void SetExclusiveStartBackupArn(Aws::String&& value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn = std::move(value); }

    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline void SetExclusiveStartBackupArn(const char* value) { m_exclusiveStartBackupArnHasBeenSet = true; m_exclusiveStartBackupArn.assign(value); }

    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline ListBackupsRequest& WithExclusiveStartBackupArn(const Aws::String& value) { SetExclusiveStartBackupArn(value); return *this;}

    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline ListBackupsRequest& WithExclusiveStartBackupArn(Aws::String&& value) { SetExclusiveStartBackupArn(std::move(value)); return *this;}

    /**
     * <p> <code>LastEvaluatedBackupARN</code> returned by the previous ListBackups
     * call. </p>
     */
    inline ListBackupsRequest& WithExclusiveStartBackupArn(const char* value) { SetExclusiveStartBackupArn(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::Utils::DateTime m_timeRangeLowerBound;
    bool m_timeRangeLowerBoundHasBeenSet;

    Aws::Utils::DateTime m_timeRangeUpperBound;
    bool m_timeRangeUpperBoundHasBeenSet;

    Aws::String m_exclusiveStartBackupArn;
    bool m_exclusiveStartBackupArnHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
