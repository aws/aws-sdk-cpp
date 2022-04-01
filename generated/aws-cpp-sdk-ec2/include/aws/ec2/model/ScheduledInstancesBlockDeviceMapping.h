﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ScheduledInstancesEbs.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a block device mapping for a Scheduled Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesBlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstancesBlockDeviceMapping
  {
  public:
    ScheduledInstancesBlockDeviceMapping();
    ScheduledInstancesBlockDeviceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstancesBlockDeviceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>Parameters used to set up EBS volumes automatically when the instance is
     * launched.</p>
     */
    inline const ScheduledInstancesEbs& GetEbs() const{ return m_ebs; }

    /**
     * <p>Parameters used to set up EBS volumes automatically when the instance is
     * launched.</p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>Parameters used to set up EBS volumes automatically when the instance is
     * launched.</p>
     */
    inline void SetEbs(const ScheduledInstancesEbs& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters used to set up EBS volumes automatically when the instance is
     * launched.</p>
     */
    inline void SetEbs(ScheduledInstancesEbs&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Parameters used to set up EBS volumes automatically when the instance is
     * launched.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithEbs(const ScheduledInstancesEbs& value) { SetEbs(value); return *this;}

    /**
     * <p>Parameters used to set up EBS volumes automatically when the instance is
     * launched.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithEbs(ScheduledInstancesEbs&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}

    /**
     * <p>To omit the device from the block device mapping, specify an empty
     * string.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}


    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with two available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline ScheduledInstancesBlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    ScheduledInstancesEbs m_ebs;
    bool m_ebsHasBeenSet;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
