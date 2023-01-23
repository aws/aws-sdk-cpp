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
  class GetTransitGatewayPrefixListReferencesRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetTransitGatewayPrefixListReferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransitGatewayPrefixListReferences"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway route table.</p>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.resource-id</code> - The ID of the resource for the
     * attachment.</p> </li> <li> <p> <code>attachment.resource-type</code> - The type
     * of resource for the attachment. Valid values are <code>vpc</code> |
     * <code>vpn</code> | <code>direct-connect-gateway</code> |
     * <code>peering</code>.</p> </li> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The ID of the
     * attachment.</p> </li> <li> <p> <code>is-blackhole</code> - Whether traffic
     * matching the route is blocked (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>prefix-list-id</code> - The ID of the prefix list.</p>
     * </li> <li> <p> <code>prefix-list-owner-id</code> - The ID of the owner of the
     * prefix list.</p> </li> <li> <p> <code>state</code> - The state of the prefix
     * list reference (<code>pending</code> | <code>available</code> |
     * <code>modifying</code> | <code>deleting</code>).</p> </li> </ul>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline GetTransitGatewayPrefixListReferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline GetTransitGatewayPrefixListReferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayPrefixListReferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetTransitGatewayPrefixListReferencesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

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
