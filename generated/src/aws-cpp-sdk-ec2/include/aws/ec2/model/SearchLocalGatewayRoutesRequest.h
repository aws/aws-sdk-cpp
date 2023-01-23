/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class SearchLocalGatewayRoutesRequest : public EC2Request
  {
  public:
    AWS_EC2_API SearchLocalGatewayRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchLocalGatewayRoutes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline SearchLocalGatewayRoutesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline SearchLocalGatewayRoutesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline SearchLocalGatewayRoutesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>route-search.exact-match</code>
     * - The exact match of the specified filter.</p> </li> <li> <p>
     * <code>route-search.longest-prefix-match</code> - The longest prefix that matches
     * the route.</p> </li> <li> <p> <code>route-search.subnet-of-match</code> - The
     * routes with a subnet that match the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify <code>supernet-of-match</code> as
     * 10.0.1.0/30, then the result returns 10.0.1.0/29.</p> </li> <li> <p>
     * <code>state</code> - The state of the route.</p> </li> <li> <p>
     * <code>type</code> - The route type.</p> </li> </ul>
     */
    inline SearchLocalGatewayRoutesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline SearchLocalGatewayRoutesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
