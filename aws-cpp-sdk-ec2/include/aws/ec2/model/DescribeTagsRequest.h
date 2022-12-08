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
  class DescribeTagsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTags"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeTagsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline DescribeTagsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline DescribeTagsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline DescribeTagsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>key</code> - The tag key.</p> </li> <li>
     * <p> <code>resource-id</code> - The ID of the resource.</p> </li> <li> <p>
     * <code>resource-type</code> - The resource type (<code>customer-gateway</code> |
     * <code>dedicated-host</code> | <code>dhcp-options</code> |
     * <code>elastic-ip</code> | <code>fleet</code> | <code>fpga-image</code> |
     * <code>host-reservation</code> | <code>image</code> | <code>instance</code> |
     * <code>internet-gateway</code> | <code>key-pair</code> |
     * <code>launch-template</code> | <code>natgateway</code> |
     * <code>network-acl</code> | <code>network-interface</code> |
     * <code>placement-group</code> | <code>reserved-instances</code> |
     * <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> |
     * <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code>
     * | <code>vpc</code> | <code>vpc-endpoint</code> |
     * <code>vpc-endpoint-service</code> | <code>vpc-peering-connection</code> |
     * <code>vpn-connection</code> | <code>vpn-gateway</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of the tag. For
     * example, specify "tag:Owner" for the filter name and "TeamA" for the filter
     * value to find resources with the tag "Owner=TeamA".</p> </li> <li> <p>
     * <code>value</code> - The tag value.</p> </li> </ul>
     */
    inline DescribeTagsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 1000. To retrieve the remaining results, make another call with
     * the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 1000. To retrieve the remaining results, make another call with
     * the returned <code>NextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 1000. To retrieve the remaining results, make another call with
     * the returned <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 1000. To retrieve the remaining results, make another call with
     * the returned <code>NextToken</code> value.</p>
     */
    inline DescribeTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
