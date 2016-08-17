/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeSecurityGroups.</p>
   */
  class AWS_EC2_API DescribeSecurityGroupsRequest : public EC2Request
  {
  public:
    DescribeSecurityGroupsRequest();
    Aws::String SerializePayload() const override;

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
    inline DescribeSecurityGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(value); return *this;}

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>[EC2-Classic and default VPC only] One or more security group names. You can
     * specify either the security group name or the security group ID. For security
     * groups in a nondefault VPC, use the <code>group-name</code> filter to describe
     * security groups by name.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(value); return *this;}

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>One or more security group IDs. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all your security groups.</p>
     */
    inline DescribeSecurityGroupsRequest& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p><code>description</code> - The
     * description of the security group.</p> </li> <li>
     * <p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS
     * service to which the security group allows access.</p> </li> <li>
     * <p><code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p><code>group-name</code> - The name of the security group.</p> </li> <li>
     * <p><code>ip-permission.cidr</code> - A CIDR range that has been granted
     * permission.</p> </li> <li> <p><code>ip-permission.from-port</code> - The start
     * of port range for the TCP and UDP protocols, or an ICMP type number.</p> </li>
     * <li> <p><code>ip-permission.group-id</code> - The ID of a security group that
     * has been granted permission.</p> </li> <li>
     * <p><code>ip-permission.group-name</code> - The name of a security group that has
     * been granted permission.</p> </li> <li> <p><code>ip-permission.protocol</code> -
     * The IP protocol for the permission (<code>tcp</code> | <code>udp</code> |
     * <code>icmp</code> or a protocol number).</p> </li> <li>
     * <p><code>ip-permission.to-port</code> - The end of port range for the TCP and
     * UDP protocols, or an ICMP code.</p> </li> <li>
     * <p><code>ip-permission.user-id</code> - The ID of an AWS account that has been
     * granted permission.</p> </li> <li> <p><code>owner-id</code> - The AWS account ID
     * of the owner of the security group.</p> </li> <li> <p><code>tag-key</code> - The
     * key of a tag assigned to the security group.</p> </li> <li>
     * <p><code>tag-value</code> - The value of a tag assigned to the security
     * group.</p> </li> <li> <p><code>vpc-id</code> - The ID of the VPC specified when
     * the security group was created.</p> </li> </ul>
     */
    inline DescribeSecurityGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet;
    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
