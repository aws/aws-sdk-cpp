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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_EC2_API DescribeTransitGatewayRouteTablesRequest : public EC2Request
  {
  public:
    DescribeTransitGatewayRouteTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransitGatewayRouteTables"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayRouteTableIds() const{ return m_transitGatewayRouteTableIds; }

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline bool TransitGatewayRouteTableIdsHasBeenSet() const { return m_transitGatewayRouteTableIdsHasBeenSet; }

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline void SetTransitGatewayRouteTableIds(const Aws::Vector<Aws::String>& value) { m_transitGatewayRouteTableIdsHasBeenSet = true; m_transitGatewayRouteTableIds = value; }

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline void SetTransitGatewayRouteTableIds(Aws::Vector<Aws::String>&& value) { m_transitGatewayRouteTableIdsHasBeenSet = true; m_transitGatewayRouteTableIds = std::move(value); }

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& WithTransitGatewayRouteTableIds(const Aws::Vector<Aws::String>& value) { SetTransitGatewayRouteTableIds(value); return *this;}

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& WithTransitGatewayRouteTableIds(Aws::Vector<Aws::String>&& value) { SetTransitGatewayRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& AddTransitGatewayRouteTableIds(const Aws::String& value) { m_transitGatewayRouteTableIdsHasBeenSet = true; m_transitGatewayRouteTableIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& AddTransitGatewayRouteTableIds(Aws::String&& value) { m_transitGatewayRouteTableIdsHasBeenSet = true; m_transitGatewayRouteTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the transit gateway route tables.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& AddTransitGatewayRouteTableIds(const char* value) { m_transitGatewayRouteTableIdsHasBeenSet = true; m_transitGatewayRouteTableIds.push_back(value); return *this; }


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline DescribeTransitGatewayRouteTablesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline DescribeTransitGatewayRouteTablesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline DescribeTransitGatewayRouteTablesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>default-association-route-table</code> - Indicates whether this is the
     * default association route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>default-propagation-route-table</code> - Indicates whether this is the
     * default propagation route table for the transit gateway (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> <li>
     * <p> <code>transit-gateway-route-table-id</code> - The ID of the transit gateway
     * route table.</p> </li> </ul>
     */
    inline DescribeTransitGatewayRouteTablesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayRouteTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeTransitGatewayRouteTablesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewayRouteTablesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeTransitGatewayRouteTablesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_transitGatewayRouteTableIds;
    bool m_transitGatewayRouteTableIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
