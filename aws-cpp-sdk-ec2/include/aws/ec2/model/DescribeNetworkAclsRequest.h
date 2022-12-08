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
  class DescribeNetworkAclsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkAclsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkAcls"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline DescribeNetworkAclsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline DescribeNetworkAclsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline DescribeNetworkAclsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.icmp.code</code> - The ICMP code specified in the entry, if
     * any.</p> </li> <li> <p> <code>entry.icmp.type</code> - The ICMP type specified
     * in the entry, if any.</p> </li> <li> <p> <code>entry.ipv6-cidr</code> - The IPv6
     * CIDR range specified in the entry.</p> </li> <li> <p>
     * <code>entry.port-range.from</code> - The start of the port range specified in
     * the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> - The end of the
     * port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.egress</code> - A Boolean that indicates the type of rule.
     * Specify <code>true</code> for egress rules, or <code>false</code> for ingress
     * rules.</p> </li> <li> <p> <code>entry.rule-number</code> - The number of an
     * entry (in other words, rule) in the set of ACL entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>owner-id</code> - The ID of the Amazon Web Services account that owns the
     * network ACL.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC for the network ACL.</p>
     * </li> </ul>
     */
    inline DescribeNetworkAclsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeNetworkAclsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkAclIds() const{ return m_networkAclIds; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline bool NetworkAclIdsHasBeenSet() const { return m_networkAclIdsHasBeenSet; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline void SetNetworkAclIds(const Aws::Vector<Aws::String>& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds = value; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline void SetNetworkAclIds(Aws::Vector<Aws::String>&& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds = std::move(value); }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& WithNetworkAclIds(const Aws::Vector<Aws::String>& value) { SetNetworkAclIds(value); return *this;}

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& WithNetworkAclIds(Aws::Vector<Aws::String>&& value) { SetNetworkAclIds(std::move(value)); return *this;}

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& AddNetworkAclIds(const Aws::String& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds.push_back(value); return *this; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& AddNetworkAclIds(Aws::String&& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& AddNetworkAclIds(const char* value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds.push_back(value); return *this; }


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
    inline DescribeNetworkAclsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkAclsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeNetworkAclsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeNetworkAclsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkAclIds;
    bool m_networkAclIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
