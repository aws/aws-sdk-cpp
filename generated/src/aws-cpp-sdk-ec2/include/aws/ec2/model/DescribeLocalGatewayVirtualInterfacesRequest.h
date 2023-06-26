/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeLocalGatewayVirtualInterfacesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLocalGatewayVirtualInterfaces"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayVirtualInterfaceIds() const{ return m_localGatewayVirtualInterfaceIds; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline bool LocalGatewayVirtualInterfaceIdsHasBeenSet() const { return m_localGatewayVirtualInterfaceIdsHasBeenSet; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceIds(const Aws::Vector<Aws::String>& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds = value; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceIds(Aws::Vector<Aws::String>&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds = std::move(value); }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithLocalGatewayVirtualInterfaceIds(const Aws::Vector<Aws::String>& value) { SetLocalGatewayVirtualInterfaceIds(value); return *this;}

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithLocalGatewayVirtualInterfaceIds(Aws::Vector<Aws::String>&& value) { SetLocalGatewayVirtualInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& AddLocalGatewayVirtualInterfaceIds(const Aws::String& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& AddLocalGatewayVirtualInterfaceIds(Aws::String&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& AddLocalGatewayVirtualInterfaceIds(const char* value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>local-address</code> - The local
     * address.</p> </li> <li> <p> <code>local-bgp-asn</code> - The Border Gateway
     * Protocol (BGP) Autonomous System Number (ASN) of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-id</code> - The ID of the local gateway.</p> </li>
     * <li> <p> <code>local-gateway-virtual-interface-id</code> - The ID of the virtual
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web
     * Services account that owns the local gateway virtual interface.</p> </li> <li>
     * <p> <code>peer-address</code> - The peer address.</p> </li> <li> <p>
     * <code>peer-bgp-asn</code> - The peer BGP ASN.</p> </li> <li> <p>
     * <code>vlan</code> - The ID of the VLAN.</p> </li> </ul>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeLocalGatewayVirtualInterfacesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_localGatewayVirtualInterfaceIds;
    bool m_localGatewayVirtualInterfaceIdsHasBeenSet = false;

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
