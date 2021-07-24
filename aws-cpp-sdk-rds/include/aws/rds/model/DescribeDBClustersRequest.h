﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClustersMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeDBClustersRequest : public RDSRequest
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
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe.</p> <p>Supported
     * filters:</p> <ul> <li> <p> <code>clone-group-id</code> - Accepts clone group
     * identifiers. The results list will only include information about the DB
     * clusters associated with these clone groups.</p> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and DB cluster
     * Amazon Resource Names (ARNs). The results list will only include information
     * about the DB clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>domain</code> - Accepts Active Directory directory IDs. The results list
     * will only include information about the DB clusters associated with these
     * domains.</p> </li> <li> <p> <code>engine</code> - Accepts engine names. The
     * results list will only include information about the DB clusters for these
     * engines.</p> </li> </ul>
     */
    inline DescribeDBClustersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClustersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Optional Boolean parameter that specifies whether the output includes
     * information about clusters shared from other Amazon Web Services accounts.</p>
     */
    inline bool GetIncludeShared() const{ return m_includeShared; }

    /**
     * <p>Optional Boolean parameter that specifies whether the output includes
     * information about clusters shared from other Amazon Web Services accounts.</p>
     */
    inline bool IncludeSharedHasBeenSet() const { return m_includeSharedHasBeenSet; }

    /**
     * <p>Optional Boolean parameter that specifies whether the output includes
     * information about clusters shared from other Amazon Web Services accounts.</p>
     */
    inline void SetIncludeShared(bool value) { m_includeSharedHasBeenSet = true; m_includeShared = value; }

    /**
     * <p>Optional Boolean parameter that specifies whether the output includes
     * information about clusters shared from other Amazon Web Services accounts.</p>
     */
    inline DescribeDBClustersRequest& WithIncludeShared(bool value) { SetIncludeShared(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    bool m_includeShared;
    bool m_includeSharedHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
