/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EbsBlockDevice.h>
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
   * <p>Describes a block device mapping, which defines the EBS volumes and instance
   * store volumes to attach to an instance at launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class BlockDeviceMapping
  {
  public:
    AWS_EC2_API BlockDeviceMapping();
    AWS_EC2_API BlockDeviceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BlockDeviceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline BlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline BlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline BlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are
     * numbered starting from 0. An instance type with 2 available instance store
     * volumes can specify mappings for <code>ephemeral0</code> and
     * <code>ephemeral1</code>. The number of available instance store volumes depends
     * on the instance type. After you connect to the instance, you must mount the
     * volume.</p> <p>NVMe instance store volumes are automatically enumerated and
     * assigned a device name. Including them in your block device mapping has no
     * effect.</p> <p>Constraints: For M3 instances, you must specify instance store
     * volumes in the block device mapping for the instance. When you launch an M3
     * instance, we ignore any instance store volumes specified in the block device
     * mapping for the AMI.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}


    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const EbsBlockDevice& GetEbs() const{ return m_ebs; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline void SetEbs(const EbsBlockDevice& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline void SetEbs(EbsBlockDevice&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline BlockDeviceMapping& WithEbs(const EbsBlockDevice& value) { SetEbs(value); return *this;}

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline BlockDeviceMapping& WithEbs(EbsBlockDevice&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline BlockDeviceMapping& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline BlockDeviceMapping& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}

    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline BlockDeviceMapping& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;

    EbsBlockDevice m_ebs;
    bool m_ebsHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
