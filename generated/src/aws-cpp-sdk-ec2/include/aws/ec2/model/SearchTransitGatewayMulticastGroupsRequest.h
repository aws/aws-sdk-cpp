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
  class SearchTransitGatewayMulticastGroupsRequest : public EC2Request
  {
  public:
    AWS_EC2_API SearchTransitGatewayMulticastGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTransitGatewayMulticastGroups"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>group-ip-address</code> - The IP address of the transit gateway multicast
     * group.</p> </li> <li> <p> <code>is-group-member</code> - The resource is a group
     * member. Valid values are <code>true</code> | <code>false</code>.</p> </li> <li>
     * <p> <code>is-group-source</code> - The resource is a group source. Valid values
     * are <code>true</code> | <code>false</code>.</p> </li> <li> <p>
     * <code>member-type</code> - The member type. Valid values are <code>igmp</code> |
     * <code>static</code>.</p> </li> <li> <p> <code>resource-id</code> - The ID of the
     * resource.</p> </li> <li> <p> <code>resource-type</code> - The type of resource.
     * Valid values are <code>vpc</code> | <code>vpn</code> |
     * <code>direct-connect-gateway</code> | <code>tgw-peering</code>.</p> </li> <li>
     * <p> <code>source-type</code> - The source type. Valid values are
     * <code>igmp</code> | <code>static</code>.</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>transit-gateway-attachment-id</code> - The id of the transit gateway
     * attachment.</p> </li> </ul>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline SearchTransitGatewayMulticastGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline SearchTransitGatewayMulticastGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline SearchTransitGatewayMulticastGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline SearchTransitGatewayMulticastGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

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
