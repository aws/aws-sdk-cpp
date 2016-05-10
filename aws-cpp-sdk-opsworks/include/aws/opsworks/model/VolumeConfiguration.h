/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon EBS volume configuration.</p>
   */
  class AWS_OPSWORKS_API VolumeConfiguration
  {
  public:
    VolumeConfiguration();
    VolumeConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    VolumeConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline const Aws::String& GetMountPoint() const{ return m_mountPoint; }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline void SetMountPoint(const Aws::String& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline void SetMountPoint(Aws::String&& value) { m_mountPointHasBeenSet = true; m_mountPoint = value; }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline void SetMountPoint(const char* value) { m_mountPointHasBeenSet = true; m_mountPoint.assign(value); }

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline VolumeConfiguration& WithMountPoint(const Aws::String& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline VolumeConfiguration& WithMountPoint(Aws::String&& value) { SetMountPoint(value); return *this;}

    /**
     * <p>The volume mount point. For example "/dev/sdh".</p>
     */
    inline VolumeConfiguration& WithMountPoint(const char* value) { SetMountPoint(value); return *this;}

    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline long GetRaidLevel() const{ return m_raidLevel; }

    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline void SetRaidLevel(long value) { m_raidLevelHasBeenSet = true; m_raidLevel = value; }

    /**
     * <p>The volume <a href="http://en.wikipedia.org/wiki/Standard_RAID_levels">RAID
     * level</a>.</p>
     */
    inline VolumeConfiguration& WithRaidLevel(long value) { SetRaidLevel(value); return *this;}

    /**
     * <p>The number of disks in the volume.</p>
     */
    inline long GetNumberOfDisks() const{ return m_numberOfDisks; }

    /**
     * <p>The number of disks in the volume.</p>
     */
    inline void SetNumberOfDisks(long value) { m_numberOfDisksHasBeenSet = true; m_numberOfDisks = value; }

    /**
     * <p>The number of disks in the volume.</p>
     */
    inline VolumeConfiguration& WithNumberOfDisks(long value) { SetNumberOfDisks(value); return *this;}

    /**
     * <p>The volume size.</p>
     */
    inline long GetSize() const{ return m_size; }

    /**
     * <p>The volume size.</p>
     */
    inline void SetSize(long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The volume size.</p>
     */
    inline VolumeConfiguration& WithSize(long value) { SetSize(value); return *this;}

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline VolumeConfiguration& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline VolumeConfiguration& WithVolumeType(Aws::String&& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type:</p> <ul> <li><code>standard</code> - Magnetic</li>
     * <li><code>io1</code> - Provisioned IOPS (SSD)</li> <li><code>gp2</code> -
     * General Purpose (SSD)</li> </ul>
     */
    inline VolumeConfiguration& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>For PIOPS volumes, the IOPS per disk.</p>
     */
    inline VolumeConfiguration& WithIops(long value) { SetIops(value); return *this;}

  private:
    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet;
    long m_raidLevel;
    bool m_raidLevelHasBeenSet;
    long m_numberOfDisks;
    bool m_numberOfDisksHasBeenSet;
    long m_size;
    bool m_sizeHasBeenSet;
    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
