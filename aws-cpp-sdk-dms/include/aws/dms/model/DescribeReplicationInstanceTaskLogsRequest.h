﻿/*
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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    DescribeReplicationInstanceTaskLogsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicationInstanceTaskLogs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationInstanceTaskLogsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
