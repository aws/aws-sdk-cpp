/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeEndpointAuthorizationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeEndpointAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEndpointAuthorization"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the cluster to access.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The AAmazon Web Services account ID of either the cluster owner (grantor) or
     * grantee. If <code>Grantee</code> parameter is true, then the
     * <code>Account</code> value is of the grantor.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>Indicates whether to check authorization from a grantor or grantee point of
     * view. If true, Amazon Redshift returns endpoint authorizations that you've been
     * granted. If false (default), checks authorization from a grantor point of
     * view.</p>
     */
    inline bool GetGrantee() const{ return m_grantee; }

    /**
     * <p>Indicates whether to check authorization from a grantor or grantee point of
     * view. If true, Amazon Redshift returns endpoint authorizations that you've been
     * granted. If false (default), checks authorization from a grantor point of
     * view.</p>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p>Indicates whether to check authorization from a grantor or grantee point of
     * view. If true, Amazon Redshift returns endpoint authorizations that you've been
     * granted. If false (default), checks authorization from a grantor point of
     * view.</p>
     */
    inline void SetGrantee(bool value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>Indicates whether to check authorization from a grantor or grantee point of
     * view. If true, Amazon Redshift returns endpoint authorizations that you've been
     * granted. If false (default), checks authorization from a grantor point of
     * view.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithGrantee(bool value) { SetGrantee(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a <code>Marker</code> is included in the response so that the remaining
     * results can be retrieved.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a <code>Marker</code> is included in the response so that the remaining
     * results can be retrieved.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a <code>Marker</code> is included in the response so that the remaining
     * results can be retrieved.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a <code>Marker</code> is included in the response so that the remaining
     * results can be retrieved.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAuthorizationRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    bool m_grantee;
    bool m_granteeHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
