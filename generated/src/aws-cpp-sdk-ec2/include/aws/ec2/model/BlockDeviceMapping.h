/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/EbsBlockDevice.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_EC2_API BlockDeviceMapping() = default;
    AWS_EC2_API BlockDeviceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BlockDeviceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const EbsBlockDevice& GetEbs() const { return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    template<typename EbsT = EbsBlockDevice>
    void SetEbs(EbsT&& value) { m_ebsHasBeenSet = true; m_ebs = std::forward<EbsT>(value); }
    template<typename EbsT = EbsBlockDevice>
    BlockDeviceMapping& WithEbs(EbsT&& value) { SetEbs(std::forward<EbsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline const Aws::String& GetNoDevice() const { return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    template<typename NoDeviceT = Aws::String>
    void SetNoDevice(NoDeviceT&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::forward<NoDeviceT>(value); }
    template<typename NoDeviceT = Aws::String>
    BlockDeviceMapping& WithNoDevice(NoDeviceT&& value) { SetNoDevice(std::forward<NoDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name. For available device names, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * names for volumes</a>.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    BlockDeviceMapping& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetVirtualName() const { return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    template<typename VirtualNameT = Aws::String>
    void SetVirtualName(VirtualNameT&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::forward<VirtualNameT>(value); }
    template<typename VirtualNameT = Aws::String>
    BlockDeviceMapping& WithVirtualName(VirtualNameT&& value) { SetVirtualName(std::forward<VirtualNameT>(value)); return *this;}
    ///@}
  private:

    EbsBlockDevice m_ebs;
    bool m_ebsHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
