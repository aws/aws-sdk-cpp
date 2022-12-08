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
   * <p>Contains the parameters for DescribeNetworkInterfaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacesRequest">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfacesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInterfacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInterfaces"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
     * <code>attachment.attach-time</code> - The time that the network interface was
     * attached to an instance.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Indicates whether the attachment
     * is deleted when an instance is terminated.</p> </li> <li> <p>
     * <code>attachment.device-index</code> - The device index to which the network
     * interface is attached.</p> </li> <li> <p> <code>attachment.instance-id</code> -
     * The ID of the instance to which the network interface is attached.</p> </li>
     * <li> <p> <code>attachment.instance-owner-id</code> - The owner ID of the
     * instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the network interface.</p> </li> <li> <p>
     * <code>description</code> - The description of the network interface.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of a security group associated with the
     * network interface.</p> </li> <li> <p> <code>group-name</code> - The name of a
     * security group associated with the network interface.</p> </li> <li> <p>
     * <code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the
     * network interface.</p> </li> <li> <p> <code>interface-type</code> - The type of
     * network interface (<code>api_gateway_managed</code> |
     * <code>aws_codestar_connections_managed</code> | <code>branch</code> |
     * <code>efa</code> | <code>gateway_load_balancer</code> |
     * <code>gateway_load_balancer_endpoint</code> |
     * <code>global_accelerator_managed</code> | <code>interface</code> |
     * <code>iot_rules_managed</code> | <code>lambda</code> |
     * <code>load_balancer</code> | <code>nat_gateway</code> |
     * <code>network_load_balancer</code> | <code>quicksight</code> |
     * <code>transit_gateway</code> | <code>trunk</code> |
     * <code>vpc_endpoint</code>).</p> </li> <li> <p> <code>mac-address</code> - The
     * MAC address of the network interface.</p> </li> <li> <p>
     * <code>network-interface-id</code> - The ID of the network interface.</p> </li>
     * <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * network interface owner.</p> </li> <li> <p> <code>private-ip-address</code> -
     * The private IPv4 address or addresses of the network interface.</p> </li> <li>
     * <p> <code>private-dns-name</code> - The private DNS name of the network
     * interface (IPv4).</p> </li> <li> <p> <code>requester-id</code> - The alias or
     * Amazon Web Services account ID of the principal or service that created the
     * network interface.</p> </li> <li> <p> <code>requester-managed</code> - Indicates
     * whether the network interface is being managed by an Amazon Web Service (for
     * example, Amazon Web Services Management Console, Auto Scaling, and so on).</p>
     * </li> <li> <p> <code>source-dest-check</code> - Indicates whether the network
     * interface performs source/destination checking. A value of <code>true</code>
     * means checking is enabled, and <code>false</code> means checking is disabled.
     * The value must be <code>false</code> for the network interface to perform
     * network address translation (NAT) in your VPC. </p> </li> <li> <p>
     * <code>status</code> - The status of the network interface. If the network
     * interface is not attached to an instance, the status is <code>available</code>;
     * if a network interface is attached to an instance the status is
     * <code>in-use</code>.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the
     * subnet for the network interface.</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network interface.</p> </li>
     * </ul>
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
    inline DescribeNetworkInterfacesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The network interface IDs.</p> <p>Default: Describes all your network
     * interfaces.</p>
     */
    inline DescribeNetworkInterfacesRequest& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * You cannot specify this parameter and the network interface IDs parameter in the
     * same request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * You cannot specify this parameter and the network interface IDs parameter in the
     * same request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * You cannot specify this parameter and the network interface IDs parameter in the
     * same request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * You cannot specify this parameter and the network interface IDs parameter in the
     * same request.</p>
     */
    inline DescribeNetworkInterfacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
