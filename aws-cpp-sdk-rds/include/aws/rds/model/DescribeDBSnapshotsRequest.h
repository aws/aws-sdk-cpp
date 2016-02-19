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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p> </p>
   */
  class AWS_RDS_API DescribeDBSnapshotsRequest : public RDSRequest
  {
  public:
    DescribeDBSnapshotsRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> A DB Instance Identifier to retrieve the list of DB Snapshots for. Cannot be
     * used in conjunction with DBSnapshotIdentifier. This parameter isn't case
     * sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> A specific DB Snapshot Identifier to describe. Cannot be used in conjunction
     * with DBInstanceIdentifier. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> <li>If this is the identifier of an
     * automated snapshot, the <code>SnapshotType</code> parameter must also be
     * specified.</li> </ul>
     */
    inline DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline DescribeDBSnapshotsRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline DescribeDBSnapshotsRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(value); return *this;}

    /**
     * <p> An optional snapshot type for which snapshots will be returned. If not
     * specified, the returned results will include snapshots of all types. </p>
     */
    inline DescribeDBSnapshotsRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results may be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
     */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results may be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
     */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results may be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
     */
    inline DescribeDBSnapshotsRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBSnapshotsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBSnapshotsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous DescribeDBSnapshots
     * request. If this parameter is specified, the response includes only records
     * beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBSnapshotsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
