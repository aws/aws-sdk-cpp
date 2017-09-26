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
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeSubnets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSubnetsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSubnetsRequest : public EC2Request
  {
  public:
    DescribeSubnetsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSubnets"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availabilityZone</code> - The
     * Availability Zone for the subnet. You can also use
     * <code>availability-zone</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidrBlock</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p> </li>
     * <li> <p> <code>defaultForAz</code> - Indicates whether this is the default
     * subnet for the Availability Zone. You can also use <code>default-for-az</code>
     * as the filter name.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>state</code> - The state of
     * the subnet (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the
     * subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline DescribeSubnetsRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline DescribeSubnetsRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline DescribeSubnetsRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline DescribeSubnetsRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline DescribeSubnetsRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeSubnetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
