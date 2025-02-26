/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FleetEbsBlockDeviceRequest.h>
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
   * store volumes to attach to an instance at launch.</p> <p>To override a block
   * device mapping specified in the launch template:</p> <ul> <li> <p>Specify the
   * exact same <code>DeviceName</code> here as specified in the launch template.</p>
   * </li> <li> <p>Only specify the parameters you want to change.</p> </li> <li>
   * <p>Any parameters you don't specify here will keep their original launch
   * template values.</p> </li> </ul> <p>To add a new block device mapping:</p> <ul>
   * <li> <p>Specify a <code>DeviceName</code> that doesn't exist in the launch
   * template.</p> </li> <li> <p>Specify all desired parameters here.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetBlockDeviceMappingRequest">AWS
   * API Reference</a></p>
   */
  class FleetBlockDeviceMappingRequest
  {
  public:
    AWS_EC2_API FleetBlockDeviceMappingRequest();
    AWS_EC2_API FleetBlockDeviceMappingRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetBlockDeviceMappingRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline FleetBlockDeviceMappingRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline FleetBlockDeviceMappingRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline FleetBlockDeviceMappingRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual device name (<code>ephemeralN</code>). Instance store volumes are
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
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }
    inline FleetBlockDeviceMappingRequest& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}
    inline FleetBlockDeviceMappingRequest& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}
    inline FleetBlockDeviceMappingRequest& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const FleetEbsBlockDeviceRequest& GetEbs() const{ return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    inline void SetEbs(const FleetEbsBlockDeviceRequest& value) { m_ebsHasBeenSet = true; m_ebs = value; }
    inline void SetEbs(FleetEbsBlockDeviceRequest&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }
    inline FleetBlockDeviceMappingRequest& WithEbs(const FleetEbsBlockDeviceRequest& value) { SetEbs(value); return *this;}
    inline FleetBlockDeviceMappingRequest& WithEbs(FleetEbsBlockDeviceRequest&& value) { SetEbs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To omit the device from the block device mapping, specify an empty string.
     * When this property is specified, the device is removed from the block device
     * mapping regardless of the assigned value.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }
    inline FleetBlockDeviceMappingRequest& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}
    inline FleetBlockDeviceMappingRequest& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}
    inline FleetBlockDeviceMappingRequest& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;

    FleetEbsBlockDeviceRequest m_ebs;
    bool m_ebsHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
