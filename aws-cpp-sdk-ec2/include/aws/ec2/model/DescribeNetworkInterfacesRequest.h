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
   * <p>Contains the parameters for DescribeNetworkInterfaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeNetworkInterfacesRequest : public EC2Request
  {
  public:
    DescribeNetworkInterfacesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInterfaces"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline DescribeNetworkInterfacesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline DescribeNetworkInterfacesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline DescribeNetworkInterfacesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>addresses.private-ip-address</code> - The private IPv4 addresses
     * associated with the network interface.</p> </li> <li> <p>
     * <code>addresses.primary</code> - Whether the private IPv4 address is the primary
     * IP address associated with the network interface. </p> </li> <li> <p>
     * <code>addresses.association.public-ip</code> - The association ID returned when
     * the network interface was associated with the Elastic IP address (IPv4).</p>
     * </li> <li> <p> <code>addresses.association.owner-id</code> - The owner ID of the
     * addresses associated with the network interface.</p> </li> <li> <p>
     * <code>association.association-id</code> - The association ID returned when the
     * network interface was associated with an IPv4 address.</p> </li> <li> <p>
     * <code>association.allocation-id</code> - The allocation ID returned when you
     * allocated the Elastic IP address (IPv4) for your network interface.</p> </li>
     * <li> <p> <code>association.ip-owner-id</code> - The owner of the Elastic IP
     * address (IPv4) associated with the network interface.</p> </li> <li> <p>
     * <code>association.public-ip</code> - The address of the Elastic IP address
     * (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>association.public-dns-name</code> - The public DNS name for the network
     * interface (IPv4).</p> </li> <li> <p> <code>attachment.attachment-id</code> - The
     * ID of the interface attachment.</p> </li> <li> <p>
     * <code>attachment.attach.time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the
     * network interface is attached.</p> </li> <li> <p> <code>attachment.status</code>
     * - The status of the attachment (<code>attaching</code> | <code>attached</code> |
     * <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone of the network
     * interface.</p> </li> <li> <p> <code>description</code> - The description of the
     * network interface.</p> </li> <li> <p> <code>group-id</code> - The ID of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>group-name</code> - The name of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>ipv6-addresses.ipv6-address</code> -
     * An IPv6 address associated with the network interface.</p> </li> <li> <p>
     * <code>mac-address</code> - The MAC address of the network interface.</p> </li>
     * <li> <p> <code>network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>owner-id</code> - The AWS account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The ID of the
     * entity that launched the instance on your behalf (for example, AWS Management
     * Console, Auto Scaling, and so on).</p> </li> <li> <p>
     * <code>requester-managed</code> - Indicates whether the network interface is
     * being managed by an AWS service (for example, AWS Management Console, Auto
     * Scaling, and so on).</p> </li> <li> <p> <code>source-desk-check</code> -
     * Indicates whether the network interface performs source/destination checking. A
     * value of <code>true</code> means checking is enabled, and <code>false</code>
     * means checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC. </p> </li>
     * <li> <p> <code>status</code> - The status of the network interface. If the
     * network interface is not attached to an instance, the status is
     * <code>available</code>; if a network interface is attached to an instance the
     * status is <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The
     * ID of the subnet for the network interface.</p> </li> <li> <p>
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
     * network interface.</p> </li> </ul>
     */
    inline DescribeNetworkInterfacesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeNetworkInterfacesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
