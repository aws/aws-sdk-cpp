﻿/*
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
   * <p>Contains the parameters for DescribeSpotInstanceRequests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequestsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSpotInstanceRequestsRequest : public EC2Request
  {
  public:
    DescribeSpotInstanceRequestsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpotInstanceRequests"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline DescribeSpotInstanceRequestsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline DescribeSpotInstanceRequestsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline DescribeSpotInstanceRequestsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>availability-zone-group</code> -
     * The Availability Zone group.</p> </li> <li> <p> <code>create-time</code> - The
     * time stamp when the Spot Instance request was created.</p> </li> <li> <p>
     * <code>fault-code</code> - The fault code related to the request.</p> </li> <li>
     * <p> <code>fault-message</code> - The fault message related to the request.</p>
     * </li> <li> <p> <code>instance-id</code> - The ID of the instance that fulfilled
     * the request.</p> </li> <li> <p> <code>launch-group</code> - The Spot Instance
     * launch group.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.delete-on-termination</code> - Indicates
     * whether the EBS volume is deleted on instance termination.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.device-name</code> - The device name for the
     * volume in the block device mapping (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p> </li> <li> <p>
     * <code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot
     * for the EBS volume.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-size</code> - The size of the EBS
     * volume, in GiB.</p> </li> <li> <p>
     * <code>launch.block-device-mapping.volume-type</code> - The type of EBS volume:
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold
     * HDD, or <code>standard</code> for Magnetic.</p> </li> <li> <p>
     * <code>launch.group-id</code> - The security group for the instance.</p> </li>
     * <li> <p> <code>launch.image-id</code> - The ID of the AMI.</p> </li> <li> <p>
     * <code>launch.instance-type</code> - The type of instance (for example,
     * <code>m3.medium</code>).</p> </li> <li> <p> <code>launch.kernel-id</code> - The
     * kernel ID.</p> </li> <li> <p> <code>launch.key-name</code> - The name of the key
     * pair the instance launched with.</p> </li> <li> <p>
     * <code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled
     * for the Spot Instance.</p> </li> <li> <p> <code>launch.ramdisk-id</code> - The
     * RAM disk ID.</p> </li> <li> <p> <code>launched-availability-zone</code> - The
     * Availability Zone in which the request is launched.</p> </li> <li> <p>
     * <code>network-interface.addresses.primary</code> - Indicates whether the IP
     * address is the primary private IP address.</p> </li> <li> <p>
     * <code>network-interface.delete-on-termination</code> - Indicates whether the
     * network interface is deleted when the instance is terminated.</p> </li> <li> <p>
     * <code>network-interface.description</code> - A description of the network
     * interface.</p> </li> <li> <p> <code>network-interface.device-index</code> - The
     * index of the device for the network interface attachment on the instance.</p>
     * </li> <li> <p> <code>network-interface.group-id</code> - The ID of the security
     * group associated with the network interface.</p> </li> <li> <p>
     * <code>network-interface.network-interface-id</code> - The ID of the network
     * interface.</p> </li> <li> <p> <code>network-interface.private-ip-address</code>
     * - The primary private IP address of the network interface.</p> </li> <li> <p>
     * <code>network-interface.subnet-id</code> - The ID of the subnet for the
     * instance.</p> </li> <li> <p> <code>product-description</code> - The product
     * description associated with the instance (<code>Linux/UNIX</code> |
     * <code>Windows</code>).</p> </li> <li> <p> <code>spot-instance-request-id</code>
     * - The Spot Instance request ID.</p> </li> <li> <p> <code>spot-price</code> - The
     * maximum hourly price for any Spot Instance launched to fulfill the request.</p>
     * </li> <li> <p> <code>state</code> - The state of the Spot Instance request
     * (<code>open</code> | <code>active</code> | <code>closed</code> |
     * <code>cancelled</code> | <code>failed</code>). Spot request status information
     * can help you track your Amazon EC2 Spot Instance requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Request Status</a> in the Amazon Elastic Compute Cloud User Guide.</p> </li>
     * <li> <p> <code>status-code</code> - The short code describing the most recent
     * evaluation of your Spot Instance request.</p> </li> <li> <p>
     * <code>status-message</code> - The message explaining the status of the Spot
     * Instance request.</p> </li> <li> <p> <code>tag</code>:<i>key</i>=<i>value</i> -
     * The key/value combination of a tag assigned to the resource. Specify the key of
     * the tag in the filter name and the value of the tag in the filter value. For
     * example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter
     * name and <code>X</code> for the filter value.</p> </li> <li> <p>
     * <code>tag-key</code> - The key of a tag assigned to the resource. This filter is
     * independent of the <code>tag-value</code> filter. For example, if you use both
     * the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources
     * assigned both the tag key Purpose (regardless of what the tag's value is), and
     * the tag value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> <li> <p> <code>type</code> - The type of Spot Instance request
     * (<code>one-time</code> | <code>persistent</code>).</p> </li> <li> <p>
     * <code>valid-from</code> - The start date of the request.</p> </li> <li> <p>
     * <code>valid-until</code> - The end date of the request.</p> </li> </ul>
     */
    inline DescribeSpotInstanceRequestsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeSpotInstanceRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpotInstanceRequestIds() const{ return m_spotInstanceRequestIds; }

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline void SetSpotInstanceRequestIds(const Aws::Vector<Aws::String>& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds = value; }

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline void SetSpotInstanceRequestIds(Aws::Vector<Aws::String>&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds = std::move(value); }

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline DescribeSpotInstanceRequestsRequest& WithSpotInstanceRequestIds(const Aws::Vector<Aws::String>& value) { SetSpotInstanceRequestIds(value); return *this;}

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline DescribeSpotInstanceRequestsRequest& WithSpotInstanceRequestIds(Aws::Vector<Aws::String>&& value) { SetSpotInstanceRequestIds(std::move(value)); return *this;}

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline DescribeSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(const Aws::String& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.push_back(value); return *this; }

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline DescribeSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(Aws::String&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Spot Instance request IDs.</p>
     */
    inline DescribeSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(const char* value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_spotInstanceRequestIds;
    bool m_spotInstanceRequestIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
