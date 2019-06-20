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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an instance's Amazon EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Volume">AWS API
   * Reference</a></p>
   */
  class AWS_OPSWORKS_API Volume
  {
  public:
    Volume();
    Volume(Aws::Utils::Json::JsonView jsonValue);
    Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The volume ID.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The volume ID.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The volume ID.</p>
     */
    inline Volume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The volume ID.</p>
     */
    inline Volume& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The volume ID.</p>
     */
    inline Volume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline const Aws::String& GetEc2VolumeId() const{ return m_ec2VolumeId; }

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline bool Ec2VolumeIdHasBeenSet() const { return m_ec2VolumeIdHasBeenSet; }

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline void SetEc2VolumeId(const Aws::String& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = value; }

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline void SetEc2VolumeId(Aws::String&& value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId = std::move(value); }

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline void SetEc2VolumeId(const char* value) { m_ec2VolumeIdHasBeenSet = true; m_ec2VolumeId.assign(value); }

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline Volume& WithEc2VolumeId(const Aws::String& value) { SetEc2VolumeId(value); return *this;}

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline Volume& WithEc2VolumeId(Aws::String&& value) { SetEc2VolumeId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 volume ID.</p>
     */
    inline Volume& WithEc2VolumeId(const char* value) { SetEc2VolumeId(value); return *this;}


    /**
     * <p>The volume name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The volume name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The volume name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The volume name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The volume name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The volume name.</p>
     */
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The volume name.</p>
     */
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The volume name.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The RAID array ID.</p>
     */
    inline const Aws::String& GetRaidArrayId() const{ return m_raidArrayId; }

    /**
     * <p>The RAID array ID.</p>
     */
    inline bool RaidArrayIdHasBeenSet() const { return m_raidArrayIdHasBeenSet; }

    /**
     * <p>The RAID array ID.</p>
     */
    inline void SetRaidArrayId(const Aws::String& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = value; }

    /**
     * <p>The RAID array ID.</p>
     */
    inline void SetRaidArrayId(Aws::String&& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = std::move(value); }

    /**
     * <p>The RAID array ID.</p>
     */
    inline void SetRaidArrayId(const char* value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId.assign(value); }

    /**
     * <p>The RAID array ID.</p>
     */
    inline Volume& WithRaidArrayId(const Aws::String& value) { SetRaidArrayId(value); return *this;}

    /**
     * <p>The RAID array ID.</p>
     */
    inline Volume& WithRaidArrayId(Aws::String&& value) { SetRaidArrayId(std::move(value)); return *this;}

    /**
     * <p>The RAID array ID.</p>
     */
    inline Volume& WithRaidArrayId(const char* value) { SetRaidArrayId(value); return *this;}


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline Volume& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline Volume& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline Volume& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline Volume& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline Volume& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The value returned by <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeVolumes.html">DescribeVolumes</a>.</p>
     */
    inline Volume& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The volume size.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The volume size.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The volume size.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The volume size.</p>
     */
    inline Volume& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The device name.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The device name.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The device name.</p>
     */
    inline Volume& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline Volume& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline Volume& WithDevice(const char* value) { SetDevice(value); return *this;}


    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::move(value); }

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline Volume& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline Volume& WithMountPoint(Aws::String&& value) { SetMountPoint(std::move(value)); return *this;}

    /**
     * <p>The volume mount point. For example, "/mnt/disk1".</p>
     */
    inline Volume& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}


    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Volume& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Volume& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region. For more information about AWS regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Volume& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Volume& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Volume& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The volume Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline Volume& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline Volume& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline Volume& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">
     * Amazon EBS Volume Types</a>.</p> <ul> <li> <p> <code>standard</code> - Magnetic.
     * Magnetic volumes must have a minimum size of 1 GiB and a maximum size of 1024
     * GiB.</p> </li> <li> <p> <code>io1</code> - Provisioned IOPS (SSD). PIOPS volumes
     * must have a minimum size of 4 GiB and a maximum size of 16384 GiB.</p> </li>
     * <li> <p> <code>gp2</code> - General Purpose (SSD). General purpose volumes must
     * have a minimum size of 1 GiB and a maximum size of 16384 GiB.</p> </li> <li> <p>
     * <code>st1</code> - Throughput Optimized hard disk drive (HDD). Throughput
     * optimized HDD volumes must have a minimum size of 500 GiB and a maximum size of
     * 16384 GiB.</p> </li> <li> <p> <code>sc1</code> - Cold HDD. Cold HDD volumes must
     * have a minimum size of 500 GiB and a maximum size of 16384 GiB.</p> </li> </ul>
     */
    inline Volume& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline Volume& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether an Amazon EBS volume is encrypted. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
     * EBS Encryption</a>.</p>
     */
    inline Volume& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    Aws::String m_ec2VolumeId;
    bool m_ec2VolumeIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_raidArrayId;
    bool m_raidArrayIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;

    Aws::String m_device;
    bool m_deviceHasBeenSet;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
