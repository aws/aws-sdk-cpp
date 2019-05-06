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
  class AWS_EC2_API DescribeVolumesRequest : public EC2Request
  {
  public:
    DescribeVolumesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline DescribeVolumesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline DescribeVolumesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline DescribeVolumesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>attachment.attach-time</code> - The time
     * stamp when the attachment initiated.</p> </li> <li> <p>
     * <code>attachment.delete-on-termination</code> - Whether the volume is deleted on
     * instance termination.</p> </li> <li> <p> <code>attachment.device</code> - The
     * device name specified in the block device mapping (for example,
     * <code>/dev/sda1</code>).</p> </li> <li> <p> <code>attachment.instance-id</code>
     * - The ID of the instance the volume is attached to.</p> </li> <li> <p>
     * <code>attachment.status</code> - The attachment state (<code>attaching</code> |
     * <code>attached</code> | <code>detaching</code>).</p> </li> <li> <p>
     * <code>availability-zone</code> - The Availability Zone in which the volume was
     * created.</p> </li> <li> <p> <code>create-time</code> - The time stamp when the
     * volume was created.</p> </li> <li> <p> <code>encrypted</code> - Indicates
     * whether the volume is encrypted (<code>true</code> | <code>false</code>)</p>
     * </li> <li> <p> <code>size</code> - The size of the volume, in GiB.</p> </li>
     * <li> <p> <code>snapshot-id</code> - The snapshot from which the volume was
     * created.</p> </li> <li> <p> <code>status</code> - The status of the volume
     * (<code>creating</code> | <code>available</code> | <code>in-use</code> |
     * <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The volume ID.</p> </li> <li> <p>
     * <code>volume-type</code> - The Amazon EBS volume type. This can be
     * <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS
     * SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold
     * HDD, or <code>standard</code> for Magnetic volumes.</p> </li> </ul>
     */
    inline DescribeVolumesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The volume IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const{ return m_volumeIds; }

    /**
     * <p>The volume IDs.</p>
     */
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }

    /**
     * <p>The volume IDs.</p>
     */
    inline void SetVolumeIds(const Aws::Vector<Aws::String>& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = value; }

    /**
     * <p>The volume IDs.</p>
     */
    inline void SetVolumeIds(Aws::Vector<Aws::String>&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::move(value); }

    /**
     * <p>The volume IDs.</p>
     */
    inline DescribeVolumesRequest& WithVolumeIds(const Aws::Vector<Aws::String>& value) { SetVolumeIds(value); return *this;}

    /**
     * <p>The volume IDs.</p>
     */
    inline DescribeVolumesRequest& WithVolumeIds(Aws::Vector<Aws::String>&& value) { SetVolumeIds(std::move(value)); return *this;}

    /**
     * <p>The volume IDs.</p>
     */
    inline DescribeVolumesRequest& AddVolumeIds(const Aws::String& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }

    /**
     * <p>The volume IDs.</p>
     */
    inline DescribeVolumesRequest& AddVolumeIds(Aws::String&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The volume IDs.</p>
     */
    inline DescribeVolumesRequest& AddVolumeIds(const char* value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }


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
    inline DescribeVolumesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of volume results returned by <code>DescribeVolumes</code>
     * in paginated output. When this parameter is used, <code>DescribeVolumes</code>
     * only returns <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeVolumes</code> request with
     * the returned <code>NextToken</code> value. This value can be between 5 and 500;
     * if <code>MaxResults</code> is given a value larger than 500, only 500 results
     * are returned. If this parameter is not used, then <code>DescribeVolumes</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of volume results returned by <code>DescribeVolumes</code>
     * in paginated output. When this parameter is used, <code>DescribeVolumes</code>
     * only returns <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeVolumes</code> request with
     * the returned <code>NextToken</code> value. This value can be between 5 and 500;
     * if <code>MaxResults</code> is given a value larger than 500, only 500 results
     * are returned. If this parameter is not used, then <code>DescribeVolumes</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of volume results returned by <code>DescribeVolumes</code>
     * in paginated output. When this parameter is used, <code>DescribeVolumes</code>
     * only returns <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeVolumes</code> request with
     * the returned <code>NextToken</code> value. This value can be between 5 and 500;
     * if <code>MaxResults</code> is given a value larger than 500, only 500 results
     * are returned. If this parameter is not used, then <code>DescribeVolumes</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of volume results returned by <code>DescribeVolumes</code>
     * in paginated output. When this parameter is used, <code>DescribeVolumes</code>
     * only returns <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeVolumes</code> request with
     * the returned <code>NextToken</code> value. This value can be between 5 and 500;
     * if <code>MaxResults</code> is given a value larger than 500, only 500 results
     * are returned. If this parameter is not used, then <code>DescribeVolumes</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline DescribeVolumesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVolumesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVolumesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVolumesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
