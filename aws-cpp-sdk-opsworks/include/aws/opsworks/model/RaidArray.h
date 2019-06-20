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
   * <p>Describes an instance's RAID array.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RaidArray">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API RaidArray
  {
  public:
    RaidArray();
    RaidArray(Aws::Utils::Json::JsonView jsonValue);
    RaidArray& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array ID.</p>
     */
    inline const Aws::String& GetRaidArrayId() const{ return m_raidArrayId; }

    /**
     * <p>The array ID.</p>
     */
    inline bool RaidArrayIdHasBeenSet() const { return m_raidArrayIdHasBeenSet; }

    /**
     * <p>The array ID.</p>
     */
    inline void SetRaidArrayId(const Aws::String& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = value; }

    /**
     * <p>The array ID.</p>
     */
    inline void SetRaidArrayId(Aws::String&& value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId = std::move(value); }

    /**
     * <p>The array ID.</p>
     */
    inline void SetRaidArrayId(const char* value) { m_raidArrayIdHasBeenSet = true; m_raidArrayId.assign(value); }

    /**
     * <p>The array ID.</p>
     */
    inline RaidArray& WithRaidArrayId(const Aws::String& value) { SetRaidArrayId(value); return *this;}

    /**
     * <p>The array ID.</p>
     */
    inline RaidArray& WithRaidArrayId(Aws::String&& value) { SetRaidArrayId(std::move(value)); return *this;}

    /**
     * <p>The array ID.</p>
     */
    inline RaidArray& WithRaidArrayId(const char* value) { SetRaidArrayId(value); return *this;}


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
    inline RaidArray& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline RaidArray& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline RaidArray& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The array name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The array name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The array name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The array name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The array name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The array name.</p>
     */
    inline RaidArray& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The array name.</p>
     */
    inline RaidArray& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The array name.</p>
     */
    inline RaidArray& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline int GetRaidLevel() const{ return m_raidLevel; }

    /**
     * <p>The <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline bool RaidLevelHasBeenSet() const { return m_raidLevelHasBeenSet; }

    /**
     * <p>The <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline void SetRaidLevel(int value) { m_raidLevelHasBeenSet = true; m_raidLevel = value; }

    /**
     * <p>The <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline RaidArray& WithRaidLevel(int value) { SetRaidLevel(value); return *this;}


    /**
     * <p>The number of disks in the array.</p>
     */
    inline int GetNumberOfDisks() const{ return m_numberOfDisks; }

    /**
     * <p>The number of disks in the array.</p>
     */
    inline bool NumberOfDisksHasBeenSet() const { return m_numberOfDisksHasBeenSet; }

    /**
     * <p>The number of disks in the array.</p>
     */
    inline void SetNumberOfDisks(int value) { m_numberOfDisksHasBeenSet = true; m_numberOfDisks = value; }

    /**
     * <p>The number of disks in the array.</p>
     */
    inline RaidArray& WithNumberOfDisks(int value) { SetNumberOfDisks(value); return *this;}


    /**
     * <p>The array's size.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The array's size.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The array's size.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The array's size.</p>
     */
    inline RaidArray& WithSize(int value) { SetSize(value); return *this;}


    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline RaidArray& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline RaidArray& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The array's Linux device. For example /dev/mdadm0.</p>
     */
    inline RaidArray& WithDevice(const char* value) { SetDevice(value); return *this;}


    /**
     * <p>The array's mount point.</p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }

    /**
     * <p>The array's mount point.</p>
     */
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }

    /**
     * <p>The array's mount point.</p>
     */
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The array's mount point.</p>
     */
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::move(value); }

    /**
     * <p>The array's mount point.</p>
     */
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }

    /**
     * <p>The array's mount point.</p>
     */
    inline RaidArray& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The array's mount point.</p>
     */
    inline RaidArray& WithMountPoint(Aws::String&& value) { SetMountPoint(std::move(value)); return *this;}

    /**
     * <p>The array's mount point.</p>
     */
    inline RaidArray& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}


    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline RaidArray& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline RaidArray& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The array's Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline RaidArray& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>When the RAID array was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>When the RAID array was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>When the RAID array was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the RAID array was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>When the RAID array was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>When the RAID array was created.</p>
     */
    inline RaidArray& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the RAID array was created.</p>
     */
    inline RaidArray& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>When the RAID array was created.</p>
     */
    inline RaidArray& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline RaidArray& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RaidArray& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline RaidArray& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline RaidArray& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline RaidArray& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type, standard or PIOPS.</p>
     */
    inline RaidArray& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


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
    inline RaidArray& WithIops(int value) { SetIops(value); return *this;}

  private:

    Aws::String m_raidArrayId;
    bool m_raidArrayIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_raidLevel;
    bool m_raidLevelHasBeenSet;

    int m_numberOfDisks;
    bool m_numberOfDisksHasBeenSet;

    int m_size;
    bool m_sizeHasBeenSet;

    Aws::String m_device;
    bool m_deviceHasBeenSet;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
