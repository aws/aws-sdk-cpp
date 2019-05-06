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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DescribeDBClusters</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeDBClustersMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeDBClustersRequest : public DocDBRequest
  {
  public:
    DescribeDBClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBClusters"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-provided DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If provided, must match an
     * existing <code>DBClusterIdentifier</code>.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribeDBClustersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribeDBClustersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribeDBClustersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB cluster
     * identifiers and DB cluster Amazon Resource Names (ARNs). The results list only
     * includes information about the DB clusters identified by these ARNs.</p> </li>
     * </ul>
     */
    inline DescribeDBClustersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClustersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
