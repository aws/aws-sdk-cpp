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
   * <p>Contains the parameters for DescribeVpcEndpointServices.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServicesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeVpcEndpointServicesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcEndpointServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpointServices"; }

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
    inline DescribeVpcEndpointServicesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more service names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceNames() const{ return m_serviceNames; }

    /**
     * <p>One or more service names.</p>
     */
    inline bool ServiceNamesHasBeenSet() const { return m_serviceNamesHasBeenSet; }

    /**
     * <p>One or more service names.</p>
     */
    inline void SetServiceNames(const Aws::Vector<Aws::String>& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = value; }

    /**
     * <p>One or more service names.</p>
     */
    inline void SetServiceNames(Aws::Vector<Aws::String>&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = std::move(value); }

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithServiceNames(const Aws::Vector<Aws::String>& value) { SetServiceNames(value); return *this;}

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithServiceNames(Aws::Vector<Aws::String>&& value) { SetServiceNames(std::move(value)); return *this;}

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& AddServiceNames(const Aws::String& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& AddServiceNames(Aws::String&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& AddServiceNames(const char* value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias
     * of the Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceNames;
    bool m_serviceNamesHasBeenSet = false;

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
