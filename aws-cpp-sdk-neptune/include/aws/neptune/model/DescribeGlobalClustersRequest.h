/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class DescribeGlobalClustersRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API DescribeGlobalClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalClusters"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified, only
     * information about the specified DB cluster is returned. This parameter is not
     * case-sensitive.</p> <p>Constraints: If supplied, must match an existing DB
     * cluster identifier.</p>
     */
    inline DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination marker
     * token is included in the response that you can use to retrieve the remaining
     * results.</p> <p>Default: <code>100</code> </p> <p>Constraints: Minimum 20,
     * maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination marker
     * token is included in the response that you can use to retrieve the remaining
     * results.</p> <p>Default: <code>100</code> </p> <p>Constraints: Minimum 20,
     * maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination marker
     * token is included in the response that you can use to retrieve the remaining
     * results.</p> <p>Default: <code>100</code> </p> <p>Constraints: Minimum 20,
     * maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination marker
     * token is included in the response that you can use to retrieve the remaining
     * results.</p> <p>Default: <code>100</code> </p> <p>Constraints: Minimum 20,
     * maximum 100.</p>
     */
    inline DescribeGlobalClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeGlobalClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeGlobalClustersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>(<i>Optional</i>) A pagination token returned by a previous call to
     * <code>DescribeGlobalClusters</code>. If this parameter is specified, the
     * response will only include records beyond the marker, up to the number specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeGlobalClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
