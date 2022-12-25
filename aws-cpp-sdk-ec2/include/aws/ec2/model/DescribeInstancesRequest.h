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
  class DescribeInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline DescribeInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline DescribeInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline DescribeInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>affinity</code> - The affinity setting
     * for an instance running on a Dedicated Host (<code>default</code> |
     * <code>host</code>).</p> </li> <li> <p> <code>architecture</code> - The instance
     * architecture (<code>i386</code> | <code>x86_64</code> | <code>arm64</code>).</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>block-device-mapping.attach-time</code> - The
     * attach time for an EBS volume mapped to the instance, for example,
     * <code>2010-09-15T17:15:20.000Z</code>.</p> </li> <li> <p>
     * <code>block-device-mapping.delete-on-termination</code> - A Boolean that
     * indicates whether the EBS volume is deleted on instance termination.</p> </li>
     * <li> <p> <code>block-device-mapping.device-name</code> - The device name
     * specified in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p> <code>block-device-mapping.status</code>
     * - The status for the EBS volume (<code>attaching</code> | <code>attached</code>
     * | <code>detaching</code> | <code>detached</code>).</p> </li> <li> <p>
     * <code>block-device-mapping.volume-id</code> - The volume ID of the EBS
     * volume.</p> </li> <li> <p> <code>capacity-reservation-id</code> - The ID of the
     * Capacity Reservation into which the instance was launched.</p> </li> <li> <p>
     * <code>client-token</code> - The idempotency token you provided when you launched
     * the instance.</p> </li> <li> <p> <code>dns-name</code> - The public DNS name of
     * the instance.</p> </li> <li> <p> <code>group-id</code> - The ID of the security
     * group for the instance. EC2-Classic only.</p> </li> <li> <p>
     * <code>group-name</code> - The name of the security group for the instance.
     * EC2-Classic only.</p> </li> <li> <p> <code>hibernation-options.configured</code>
     * - A Boolean that indicates whether the instance is enabled for hibernation. A
     * value of <code>true</code> means that the instance is enabled for hibernation.
     * </p> </li> <li> <p> <code>host-id</code> - The ID of the Dedicated Host on which
     * the instance is running, if applicable.</p> </li> <li> <p>
     * <code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code>
     * | <code>xen</code>). The value <code>xen</code> is used for both Xen and Nitro
     * hypervisors.</p> </li> <li> <p> <code>iam-instance-profile.arn</code> - The
     * instance profile associated with the instance. Specified as an ARN.</p> </li>
     * <li> <p> <code>image-id</code> - The ID of the image used to launch the
     * instance.</p> </li> <li> <p> <code>instance-id</code> - The ID of the
     * instance.</p> </li> <li> <p> <code>instance-lifecycle</code> - Indicates whether
     * this is a Spot Instance or a Scheduled Instance (<code>spot</code> |
     * <code>scheduled</code>).</p> </li> <li> <p> <code>instance-state-code</code> -
     * The state of the instance, as a 16-bit unsigned integer. The high byte is used
     * for internal purposes and should be ignored. The low byte is set based on the
     * state represented. The valid values are: 0 (pending), 16 (running), 32
     * (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p> </li>
     * <li> <p> <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-type</code> - The type of instance (for example,
     * <code>t2.micro</code>).</p> </li> <li> <p> <code>instance.group-id</code> - The
     * ID of the security group for the instance. </p> </li> <li> <p>
     * <code>instance.group-name</code> - The name of the security group for the
     * instance. </p> </li> <li> <p> <code>ip-address</code> - The public IPv4 address
     * of the instance.</p> </li> <li> <p> <code>kernel-id</code> - The kernel ID.</p>
     * </li> <li> <p> <code>key-name</code> - The name of the key pair used when the
     * instance was launched.</p> </li> <li> <p> <code>launch-index</code> - When
     * launching multiple instances, this is the index for the instance in the launch
     * group (for example, 0, 1, 2, and so on). </p> </li> <li> <p>
     * <code>launch-time</code> - The time when the instance was launched, in the ISO
     * 8601 format in the UTC time zone (YYYY-MM-DDThh:mm:ss.sssZ), for example,
     * <code>2021-09-29T11:04:43.305Z</code>. You can use a wildcard (<code>*</code>),
     * for example, <code>2021-09-29T*</code>, which matches an entire day.</p> </li>
     * <li> <p> <code>metadata-options.http-tokens</code> - The metadata request
     * authorization state (<code>optional</code> | <code>required</code>)</p> </li>
     * <li> <p> <code>metadata-options.http-put-response-hop-limit</code> - The http
     * metadata request put response hop limit (integer, possible values <code>1</code>
     * to <code>64</code>)</p> </li> <li> <p>
     * <code>metadata-options.http-endpoint</code> - Enable or disable metadata access
     * on http endpoint (<code>enabled</code> | <code>disabled</code>)</p> </li> <li>
     * <p> <code>monitoring-state</code> - Indicates whether detailed monitoring is
     * enabled (<code>disabled</code> | <code>enabled</code>).</p> </li> <li> <p>
     * <code>network-interface.addresses.private-ip-address</code> - The private IPv4
     * address associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Specifies whether the IPv4
     * address of the network interface is the primary private IPv4 address.</p> </li>
     * <li> <p> <code>network-interface.addresses.association.public-ip</code> - The ID
     * of the association of an Elastic IP address (IPv4) with a network interface.</p>
     * </li> <li> <p> <code>network-interface.addresses.association.ip-owner-id</code>
     * - The owner ID of the private IPv4 address associated with the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.public-ip</code> - The address of the
     * Elastic IP address (IPv4) bound to the network interface.</p> </li> <li> <p>
     * <code>network-interface.association.ip-owner-id</code> - The owner of the
     * Elastic IP address (IPv4) associated with the network interface.</p> </li> <li>
     * <p> <code>network-interface.association.allocation-id</code> - The allocation ID
     * returned when you allocated the Elastic IP address (IPv4) for your network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.association.association-id</code> - The association ID
     * returned when the network interface was associated with an IPv4 address.</p>
     * </li> <li> <p> <code>network-interface.attachment.attachment-id</code> - The ID
     * of the interface attachment.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-id</code> - The ID of the instance
     * to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.instance-owner-id</code> - The owner ID of
     * the instance to which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.device-index</code> - The device index to
     * which the network interface is attached.</p> </li> <li> <p>
     * <code>network-interface.attachment.status</code> - The status of the attachment
     * (<code>attaching</code> | <code>attached</code> | <code>detaching</code> |
     * <code>detached</code>).</p> </li> <li> <p>
     * <code>network-interface.attachment.attach-time</code> - The time that the
     * network interface was attached to an instance.</p> </li> <li> <p>
     * <code>network-interface.attachment.delete-on-termination</code> - Specifies
     * whether the attachment is deleted when an instance is terminated.</p> </li> <li>
     * <p> <code>network-interface.availability-zone</code> - The Availability Zone for
     * the network interface.</p> </li> <li> <p>
     * <code>network-interface.description</code> - The description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.group-id</code> - The ID
     * of a security group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.group-name</code> - The name of a security group
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address
     * associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.mac-address</code> - The MAC address of the network
     * interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.owner-id</code> - The ID
     * of the owner of the network interface.</p> </li> <li> <p>
     * <code>network-interface.private-dns-name</code> - The private DNS name of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface.requester-id</code> - The requester ID for the network
     * interface.</p> </li> <li> <p> <code>network-interface.requester-managed</code> -
     * Indicates whether the network interface is being managed by Amazon Web
     * Services.</p> </li> <li> <p> <code>network-interface.status</code> - The status
     * of the network interface (<code>available</code>) | <code>in-use</code>).</p>
     * </li> <li> <p> <code>network-interface.source-dest-check</code> - Whether the
     * network interface performs source/destination checking. A value of
     * <code>true</code> means that checking is enabled, and <code>false</code> means
     * that checking is disabled. The value must be <code>false</code> for the network
     * interface to perform network address translation (NAT) in your VPC.</p> </li>
     * <li> <p> <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * network interface.</p> </li> <li> <p> <code>network-interface.vpc-id</code> -
     * The ID of the VPC for the network interface.</p> </li> <li> <p>
     * <code>outpost-arn</code> - The Amazon Resource Name (ARN) of the Outpost.</p>
     * </li> <li> <p> <code>owner-id</code> - The Amazon Web Services account ID of the
     * instance owner.</p> </li> <li> <p> <code>placement-group-name</code> - The name
     * of the placement group for the instance.</p> </li> <li> <p>
     * <code>placement-partition-number</code> - The partition in which the instance is
     * located.</p> </li> <li> <p> <code>platform</code> - The platform. To list only
     * Windows instances, use <code>windows</code>.</p> </li> <li> <p>
     * <code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p>
     * </li> <li> <p> <code>private-ip-address</code> - The private IPv4 address of the
     * instance.</p> </li> <li> <p> <code>product-code</code> - The product code
     * associated with the AMI used to launch the instance.</p> </li> <li> <p>
     * <code>product-code.type</code> - The type of product code (<code>devpay</code> |
     * <code>marketplace</code>).</p> </li> <li> <p> <code>ramdisk-id</code> - The RAM
     * disk ID.</p> </li> <li> <p> <code>reason</code> - The reason for the current
     * state of the instance (for example, shows "User Initiated [date]" when you stop
     * or terminate the instance). Similar to the state-reason-code filter.</p> </li>
     * <li> <p> <code>requester-id</code> - The ID of the entity that launched the
     * instance on your behalf (for example, Amazon Web Services Management Console,
     * Auto Scaling, and so on).</p> </li> <li> <p> <code>reservation-id</code> - The
     * ID of the instance's reservation. A reservation ID is created any time you
     * launch an instance. A reservation ID has a one-to-one relationship with an
     * instance launch request, but can be associated with more than one instance if
     * you launch multiple instances using the same launch request. For example, if you
     * launch one instance, you get one reservation ID. If you launch ten instances
     * using the same launch request, you also get one reservation ID.</p> </li> <li>
     * <p> <code>root-device-name</code> - The device name of the root device volume
     * (for example, <code>/dev/sda1</code>).</p> </li> <li> <p>
     * <code>root-device-type</code> - The type of the root device volume
     * (<code>ebs</code> | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>source-dest-check</code> - Indicates whether the instance performs
     * source/destination checking. A value of <code>true</code> means that checking is
     * enabled, and <code>false</code> means that checking is disabled. The value must
     * be <code>false</code> for the instance to perform network address translation
     * (NAT) in your VPC. </p> </li> <li> <p> <code>spot-instance-request-id</code> -
     * The ID of the Spot Instance request.</p> </li> <li> <p>
     * <code>state-reason-code</code> - The reason code for the state change.</p> </li>
     * <li> <p> <code>state-reason-message</code> - A message that describes the state
     * change.</p> </li> <li> <p> <code>subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>tag:&lt;key&gt;</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources that have a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tenancy</code> - The tenancy of an instance
     * (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p> </li>
     * <li> <p> <code>virtualization-type</code> - The virtualization type of the
     * instance (<code>paravirtual</code> | <code>hvm</code>).</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC that the instance is running in.</p>
     * </li> </ul>
     */
    inline DescribeInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline DescribeInstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline DescribeInstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline DescribeInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline DescribeInstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     */
    inline DescribeInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


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
    inline DescribeInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000. You cannot specify this parameter
     * and the instance IDs parameter in the same call.</p>
     */
    inline DescribeInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
