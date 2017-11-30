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
   * <p>Contains the parameters for DescribeVpcPeeringConnections.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcPeeringConnectionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpcPeeringConnectionsRequest : public EC2Request
  {
  public:
    DescribeVpcPeeringConnectionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcPeeringConnections"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter
     * VPC.</p> </li> <li> <p> <code>accepter-vpc-info.owner-id</code> - The AWS
     * account ID of the owner of the accepter VPC.</p> </li> <li> <p>
     * <code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p> </li>
     * <li> <p> <code>expiration-time</code> - The expiration date and time for the VPC
     * peering connection.</p> </li> <li> <p>
     * <code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the
     * requester's VPC.</p> </li> <li> <p> <code>requester-vpc-info.owner-id</code> -
     * The AWS account ID of the owner of the requester VPC.</p> </li> <li> <p>
     * <code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p> </li>
     * <li> <p> <code>status-code</code> - The status of the VPC peering connection
     * (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> |
     * <code>provisioning</code> | <code>active</code> | <code>deleting</code> |
     * <code>deleted</code> | <code>rejected</code>).</p> </li> <li> <p>
     * <code>status-message</code> - A message that provides more information about the
     * status of the VPC peering connection, if applicable.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-peering-connection-id</code> - The ID of
     * the VPC peering connection.</p> </li> </ul>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeVpcPeeringConnectionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcPeeringConnectionIds() const{ return m_vpcPeeringConnectionIds; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline void SetVpcPeeringConnectionIds(const Aws::Vector<Aws::String>& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds = value; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline void SetVpcPeeringConnectionIds(Aws::Vector<Aws::String>&& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds = std::move(value); }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithVpcPeeringConnectionIds(const Aws::Vector<Aws::String>& value) { SetVpcPeeringConnectionIds(value); return *this;}

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& WithVpcPeeringConnectionIds(Aws::Vector<Aws::String>&& value) { SetVpcPeeringConnectionIds(std::move(value)); return *this;}

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(const Aws::String& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(Aws::String&& value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more VPC peering connection IDs.</p> <p>Default: Describes all your
     * VPC peering connections.</p>
     */
    inline DescribeVpcPeeringConnectionsRequest& AddVpcPeeringConnectionIds(const char* value) { m_vpcPeeringConnectionIdsHasBeenSet = true; m_vpcPeeringConnectionIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_vpcPeeringConnectionIds;
    bool m_vpcPeeringConnectionIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
