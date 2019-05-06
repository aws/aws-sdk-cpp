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
  class AWS_EC2_API DescribeSecurityGroupsRequest : public EC2Request
  {
  public:
    DescribeSecurityGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSecurityGroups"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which a security group rule allows outbound access.</p> </li> <li>
     * <p> <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or
     * a protocol number).</p> </li> <li> <p> <code>egress.ip-permission.to-port</code>
     * - For an outbound rule, the end of port range for the TCP and UDP protocols, or
     * an ICMP code.</p> </li> <li> <p> <code>egress.ip-permission.user-id</code> - The
     * ID of an AWS account that has been referenced in an outbound security group
     * rule.</p> </li> <li> <p> <code>group-id</code> - The ID of the security group.
     * </p> </li> <li> <p> <code>group-name</code> - The name of the security
     * group.</p> </li> <li> <p> <code>ip-permission.cidr</code> - An IPv4 CIDR block
     * for an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.from-port</code> - For an inbound rule, the start of port
     * range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li> <p>
     * <code>ip-permission.group-id</code> - The ID of a security group that has been
     * referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.group-name</code> - The name of a security group that has
     * been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service
     * from which a security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a
     * protocol number).</p> </li> <li> <p> <code>ip-permission.to-port</code> - For an
     * inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP
     * code.</p> </li> <li> <p> <code>ip-permission.user-id</code> - The ID of an AWS
     * account that has been referenced in an inbound security group rule.</p> </li>
     * <li> <p> <code>owner-id</code> - The AWS account ID of the owner of the security
     * group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }


    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::move(value); }

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>[EC2-Classic and default VPC only] The names of the security groups. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }


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
    inline DescribeSecurityGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeSecurityGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeSecurityGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeSecurityGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. If this parameter is not specified,
     * then all results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. If this parameter is not specified,
     * then all results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. If this parameter is not specified,
     * then all results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. If this parameter is not specified,
     * then all results are returned.</p>
     */
    inline DescribeSecurityGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet;

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
