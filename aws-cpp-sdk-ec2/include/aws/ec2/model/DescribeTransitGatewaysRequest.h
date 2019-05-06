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
  class AWS_EC2_API DescribeTransitGatewaysRequest : public EC2Request
  {
  public:
    DescribeTransitGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransitGateways"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayIds() const{ return m_transitGatewayIds; }

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline bool TransitGatewayIdsHasBeenSet() const { return m_transitGatewayIdsHasBeenSet; }

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline void SetTransitGatewayIds(const Aws::Vector<Aws::String>& value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds = value; }

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline void SetTransitGatewayIds(Aws::Vector<Aws::String>&& value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds = std::move(value); }

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline DescribeTransitGatewaysRequest& WithTransitGatewayIds(const Aws::Vector<Aws::String>& value) { SetTransitGatewayIds(value); return *this;}

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline DescribeTransitGatewaysRequest& WithTransitGatewayIds(Aws::Vector<Aws::String>&& value) { SetTransitGatewayIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline DescribeTransitGatewaysRequest& AddTransitGatewayIds(const Aws::String& value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline DescribeTransitGatewaysRequest& AddTransitGatewayIds(Aws::String&& value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the transit gateways.</p>
     */
    inline DescribeTransitGatewaysRequest& AddTransitGatewayIds(const char* value) { m_transitGatewayIdsHasBeenSet = true; m_transitGatewayIds.push_back(value); return *this; }


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline DescribeTransitGatewaysRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline DescribeTransitGatewaysRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline DescribeTransitGatewaysRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>options.propagation-default-route-table-id</code> - The ID of the default
     * propagation route table.</p> </li> <li> <p> <code>options.amazon-side-asn</code>
     * - The private ASN for the Amazon side of a BGP session.</p> </li> <li> <p>
     * <code>options.association-default-route-table-id</code> - The ID of the default
     * association route table.</p> </li> <li> <p>
     * <code>options.auto-accept-shared-attachments</code> - Indicates whether there is
     * automatic acceptance of attachment requests (<code>enable</code> |
     * <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-association</code> - Indicates whether
     * resource attachments are automatically associated with the default association
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.default-route-table-propagation</code> - Indicates whether
     * resource attachments automatically propagate routes to the default propagation
     * route table (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.dns-support</code> - Indicates whether DNS support is enabled
     * (<code>enable</code> | <code>disable</code>).</p> </li> <li> <p>
     * <code>options.vpn-ecmp-support</code> - Indicates whether Equal Cost Multipath
     * Protocol support is enabled (<code>enable</code> | <code>disable</code>).</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the AWS account that owns the
     * transit gateway.</p> </li> <li> <p> <code>state</code> - The state of the
     * attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-id</code> - The ID of the transit gateway.</p> </li> </ul>
     */
    inline DescribeTransitGatewaysRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeTransitGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeTransitGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeTransitGatewaysRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_transitGatewayIds;
    bool m_transitGatewayIdsHasBeenSet;

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
