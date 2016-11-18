/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/StartReplicationTaskTypeValue.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    StartReplicationTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline StartReplicationTaskRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline StartReplicationTaskRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the replication task to be started.</p>
     */
    inline StartReplicationTaskRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The type of replication task.</p>
     */
    inline const StartReplicationTaskTypeValue& GetStartReplicationTaskType() const{ return m_startReplicationTaskType; }

    /**
     * <p>The type of replication task.</p>
     */
    inline void SetStartReplicationTaskType(const StartReplicationTaskTypeValue& value) { m_startReplicationTaskTypeHasBeenSet = true; m_startReplicationTaskType = value; }

    /**
     * <p>The type of replication task.</p>
     */
    inline void SetStartReplicationTaskType(StartReplicationTaskTypeValue&& value) { m_startReplicationTaskTypeHasBeenSet = true; m_startReplicationTaskType = value; }

    /**
     * <p>The type of replication task.</p>
     */
    inline StartReplicationTaskRequest& WithStartReplicationTaskType(const StartReplicationTaskTypeValue& value) { SetStartReplicationTaskType(value); return *this;}

    /**
     * <p>The type of replication task.</p>
     */
    inline StartReplicationTaskRequest& WithStartReplicationTaskType(StartReplicationTaskTypeValue&& value) { SetStartReplicationTaskType(value); return *this;}

    /**
     * <p>The start time for the Change Data Capture (CDC) operation.</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }

    /**
     * <p>The start time for the Change Data Capture (CDC) operation.</p>
     */
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p>The start time for the Change Data Capture (CDC) operation.</p>
     */
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p>The start time for the Change Data Capture (CDC) operation.</p>
     */
    inline StartReplicationTaskRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p>The start time for the Change Data Capture (CDC) operation.</p>
     */
    inline StartReplicationTaskRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(value); return *this;}

  private:
    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet;
    StartReplicationTaskTypeValue m_startReplicationTaskType;
    bool m_startReplicationTaskTypeHasBeenSet;
    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
