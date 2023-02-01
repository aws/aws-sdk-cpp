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
  class DescribeSubnetsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeSubnetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSubnets"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone for the subnet. You can also use <code>availabilityZone</code>
     * as the filter name.</p> </li> <li> <p> <code>availability-zone-id</code> - The
     * ID of the Availability Zone for the subnet. You can also use
     * <code>availabilityZoneId</code> as the filter name.</p> </li> <li> <p>
     * <code>available-ip-address-count</code> - The number of IPv4 addresses in the
     * subnet that are available.</p> </li> <li> <p> <code>cidr-block</code> - The IPv4
     * CIDR block of the subnet. The CIDR block you specify must exactly match the
     * subnet's CIDR block for information to be returned for the subnet. You can also
     * use <code>cidr</code> or <code>cidrBlock</code> as the filter names.</p> </li>
     * <li> <p> <code>customer-owned-ipv4-pool</code> - The customer-owned IPv4 address
     * pool associated with the subnet.</p> </li> <li> <p> <code>default-for-az</code>
     * - Indicates whether this is the default subnet for the Availability Zone
     * (<code>true</code> | <code>false</code>). You can also use
     * <code>defaultForAz</code> as the filter name.</p> </li> <li> <p>
     * <code>enable-dns64</code> - Indicates whether DNS queries made to the
     * Amazon-provided DNS Resolver in this subnet should return synthetic IPv6
     * addresses for IPv4-only destinations.</p> </li> <li> <p>
     * <code>enable-lni-at-device-index</code> - Indicates the device position for
     * local network interfaces in this subnet. For example, <code>1</code> indicates
     * local network interfaces in this subnet are the secondary network interface
     * (eth1). </p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.association-id</code> - An association ID for
     * an IPv6 CIDR block associated with the subnet.</p> </li> <li> <p>
     * <code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block
     * associated with the subnet.</p> </li> <li> <p> <code>ipv6-native</code> -
     * Indicates whether this is an IPv6 only subnet (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p>
     * <code>map-customer-owned-ip-on-launch</code> - Indicates whether a network
     * interface created in this subnet (including a network interface created by
     * <a>RunInstances</a>) receives a customer-owned IPv4 address.</p> </li> <li> <p>
     * <code>map-public-ip-on-launch</code> - Indicates whether instances launched in
     * this subnet receive a public IPv4 address.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The ID of the Amazon Web Services account
     * that owns the subnet.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.hostname-type</code> - The type of
     * hostname to assign to instances in the subnet at launch. For IPv4-only and
     * dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be based on the
     * instance IPv4 address (ip-name) or the instance ID (resource-name). For IPv6
     * only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-a-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p> </li> <li> <p>
     * <code>private-dns-name-options-on-launch.enable-resource-name-dns-aaaa-record</code>
     * - Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p> </li> <li> <p> <code>state</code> - The state of the subnet
     * (<code>pending</code> | <code>available</code>).</p> </li> <li> <p>
     * <code>subnet-arn</code> - The Amazon Resource Name (ARN) of the subnet.</p>
     * </li> <li> <p> <code>subnet-id</code> - The ID of the subnet.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the subnet.</p> </li> </ul>
     */
    inline DescribeSubnetsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>One or more subnet IDs.</p> <p>Default: Describes all your subnets.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

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
    inline DescribeSubnetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline DescribeSubnetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSubnetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSubnetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline DescribeSubnetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
