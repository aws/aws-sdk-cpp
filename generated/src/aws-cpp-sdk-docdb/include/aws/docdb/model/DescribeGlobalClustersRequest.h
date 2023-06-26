/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class DescribeGlobalClustersRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API DescribeGlobalClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalClusters"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied cluster identifier. If this parameter is specified,
     * information from only the specific cluster is returned. This parameter isn't
     * case-sensitive.</p>
     */
    inline DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline DescribeGlobalClustersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline DescribeGlobalClustersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline DescribeGlobalClustersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more global DB clusters to describe.</p>
     * <p>Supported filters: <code>db-cluster-id</code> accepts cluster identifiers and
     * cluster Amazon Resource Names (ARNs). The results list will only include
     * information about the clusters identified by these ARNs.</p>
     */
    inline DescribeGlobalClustersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results. </p>
     */
    inline DescribeGlobalClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeGlobalClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeGlobalClustersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeGlobalClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
