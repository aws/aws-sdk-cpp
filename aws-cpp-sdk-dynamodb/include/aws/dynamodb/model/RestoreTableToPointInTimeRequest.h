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
  class AWS_DYNAMODB_API RestoreTableToPointInTimeRequest : public DynamoDBRequest
  {
  public:
    RestoreTableToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableToPointInTime"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}


    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}


    /**
     * <p>Restore the table to the latest possible time.
     * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
     * time. </p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }

    /**
     * <p>Restore the table to the latest possible time.
     * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
     * time. </p>
     */
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }

    /**
     * <p>Restore the table to the latest possible time.
     * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
     * time. </p>
     */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /**
     * <p>Restore the table to the latest possible time.
     * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
     * time. </p>
     */
    inline RestoreTableToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}


    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreDateTime() const{ return m_restoreDateTime; }

    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }

    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline void SetRestoreDateTime(const Aws::Utils::DateTime& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = value; }

    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline void SetRestoreDateTime(Aws::Utils::DateTime&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::move(value); }

    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithRestoreDateTime(const Aws::Utils::DateTime& value) { SetRestoreDateTime(value); return *this;}

    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline RestoreTableToPointInTimeRequest& WithRestoreDateTime(Aws::Utils::DateTime&& value) { SetRestoreDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet;

    Aws::Utils::DateTime m_restoreDateTime;
    bool m_restoreDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
