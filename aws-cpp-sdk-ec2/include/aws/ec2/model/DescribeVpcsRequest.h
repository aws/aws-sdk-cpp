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
  class AWS_EC2_API DescribeVpcsRequest : public EC2Request
  {
  public:
    DescribeVpcsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline DescribeVpcsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline DescribeVpcsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline DescribeVpcsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>cidr</code> - The primary IPv4
     * CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's
     * CIDR block for information to be returned for the VPC. Must contain the slash
     * followed by one or two digits (for example, <code>/28</code>).</p> </li> <li>
     * <p> <code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.association-id</code> - The association ID for an
     * IPv4 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>cidr-block-association.state</code> - The state of an IPv4 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>dhcp-options-id</code> - The
     * ID of a set of DHCP options.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - The association ID for
     * an IPv6 CIDR block associated with the VPC.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the VPC.</p> </li> <li> <p> <code>isDefault</code> - Indicates
     * whether the VPC is the default VPC.</p> </li> <li> <p> <code>owner-id</code> -
     * The ID of the AWS account that owns the VPC.</p> </li> <li> <p>
     * <code>state</code> - The state of the VPC (<code>pending</code> |
     * <code>available</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC.</p> </li> </ul>
     */
    inline DescribeVpcsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcIds() const{ return m_vpcIds; }

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline bool VpcIdsHasBeenSet() const { return m_vpcIdsHasBeenSet; }

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline void SetVpcIds(const Aws::Vector<Aws::String>& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = value; }

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline void SetVpcIds(Aws::Vector<Aws::String>&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds = std::move(value); }

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline DescribeVpcsRequest& WithVpcIds(const Aws::Vector<Aws::String>& value) { SetVpcIds(value); return *this;}

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline DescribeVpcsRequest& WithVpcIds(Aws::Vector<Aws::String>&& value) { SetVpcIds(std::move(value)); return *this;}

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline DescribeVpcsRequest& AddVpcIds(const Aws::String& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline DescribeVpcsRequest& AddVpcIds(Aws::String&& value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more VPC IDs.</p> <p>Default: Describes all your VPCs.</p>
     */
    inline DescribeVpcsRequest& AddVpcIds(const char* value) { m_vpcIdsHasBeenSet = true; m_vpcIds.push_back(value); return *this; }


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
    inline DescribeVpcsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline DescribeVpcsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVpcsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeVpcsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeVpcsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_vpcIds;
    bool m_vpcIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
