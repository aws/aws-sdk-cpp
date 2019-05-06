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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API DescribeDBInstancesRequest : public NeptuneRequest
  {
  public:
    DescribeDBInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied instance identifier. If this parameter is specified,
     * information from only the specific DB instance is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the
     * identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list will only include information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB instances identified by these ARNs.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBInstancesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
