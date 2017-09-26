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
   * <p>Contains the parameters for DescribeRouteTables.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRouteTablesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeRouteTablesRequest : public EC2Request
  {
  public:
    DescribeRouteTablesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRouteTables"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline DescribeRouteTablesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline DescribeRouteTablesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline DescribeRouteTablesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.route-table-association-id</code> - The ID of an association
     * ID for the route table.</p> </li> <li> <p>
     * <code>association.route-table-id</code> - The ID of the route table involved in
     * the association.</p> </li> <li> <p> <code>association.subnet-id</code> - The ID
     * of the subnet involved in the association.</p> </li> <li> <p>
     * <code>association.main</code> - Indicates whether the route table is the main
     * route table for the VPC (<code>true</code> | <code>false</code>). Route tables
     * that do not have an association ID are not returned in the response.</p> </li>
     * <li> <p> <code>route-table-id</code> - The ID of the route table.</p> </li> <li>
     * <p> <code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in
     * a route in the table.</p> </li> <li> <p>
     * <code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified
     * in a route in the route table.</p> </li> <li> <p>
     * <code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS
     * service specified in a route in the table.</p> </li> <li> <p>
     * <code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only
     * Internet gateway specified in a route in the route table.</p> </li> <li> <p>
     * <code>route.gateway-id</code> - The ID of a gateway specified in a route in the
     * table.</p> </li> <li> <p> <code>route.instance-id</code> - The ID of an instance
     * specified in a route in the table.</p> </li> <li> <p>
     * <code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p> </li> <li> <p>
     * <code>route.origin</code> - Describes how the route was created.
     * <code>CreateRouteTable</code> indicates that the route was automatically created
     * when the route table was created; <code>CreateRoute</code> indicates that the
     * route was manually added to the route table;
     * <code>EnableVgwRoutePropagation</code> indicates that the route was propagated
     * by route propagation.</p> </li> <li> <p> <code>route.state</code> - The state of
     * a route in the route table (<code>active</code> | <code>blackhole</code>). The
     * blackhole state indicates that the route's target isn't available (for example,
     * the specified gateway isn't attached to the VPC, the specified NAT instance has
     * been terminated, and so on).</p> </li> <li> <p>
     * <code>route.vpc-peering-connection-id</code> - The ID of a VPC peering
     * connection specified in a route in the table.</p> </li> <li> <p>
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
     * filter.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the route
     * table.</p> </li> </ul>
     */
    inline DescribeRouteTablesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeRouteTablesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline DescribeRouteTablesRequest& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline DescribeRouteTablesRequest& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline DescribeRouteTablesRequest& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline DescribeRouteTablesRequest& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more route table IDs.</p> <p>Default: Describes all your route
     * tables.</p>
     */
    inline DescribeRouteTablesRequest& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
