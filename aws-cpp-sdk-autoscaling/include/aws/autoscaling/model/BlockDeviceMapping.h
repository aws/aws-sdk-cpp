/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/Ebs.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a block device mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/BlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class BlockDeviceMapping
  {
  public:
    AWS_AUTOSCALING_API BlockDeviceMapping();
    AWS_AUTOSCALING_API BlockDeviceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API BlockDeviceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance store volume (virtual device) to attach to an
     * instance at launch. The name must be in the form ephemeral<i>X</i> where
     * <i>X</i> is a number starting from zero (0), for example,
     * <code>ephemeral0</code>.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}


    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline BlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline BlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name assigned to the volume (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * naming on Linux instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>  <p>To define a block device mapping, set the device
     * name and exactly one of the following properties: <code>Ebs</code>,
     * <code>NoDevice</code>, or <code>VirtualName</code>.</p> 
     */
    inline BlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>Information to attach an EBS volume to an instance at launch.</p>
     */
    inline const Ebs& GetEbs() const{ return m_ebs; }

    /**
     * <p>Information to attach an EBS volume to an instance at launch.</p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>Information to attach an EBS volume to an instance at launch.</p>
     */
    inline void SetEbs(const Ebs& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Information to attach an EBS volume to an instance at launch.</p>
     */
    inline void SetEbs(Ebs&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Information to attach an EBS volume to an instance at launch.</p>
     */
    inline BlockDeviceMapping& WithEbs(const Ebs& value) { SetEbs(value); return *this;}

    /**
     * <p>Information to attach an EBS volume to an instance at launch.</p>
     */
    inline BlockDeviceMapping& WithEbs(Ebs&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>Setting this value to <code>true</code> prevents a volume that is included in
     * the block device mapping of the AMI from being mapped to the specified device
     * name at launch.</p> <p>If <code>NoDevice</code> is <code>true</code> for the
     * root device, instances might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches replacement instances.</p>
     */
    inline bool GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>Setting this value to <code>true</code> prevents a volume that is included in
     * the block device mapping of the AMI from being mapped to the specified device
     * name at launch.</p> <p>If <code>NoDevice</code> is <code>true</code> for the
     * root device, instances might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches replacement instances.</p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p>Setting this value to <code>true</code> prevents a volume that is included in
     * the block device mapping of the AMI from being mapped to the specified device
     * name at launch.</p> <p>If <code>NoDevice</code> is <code>true</code> for the
     * root device, instances might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches replacement instances.</p>
     */
    inline void SetNoDevice(bool value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>Setting this value to <code>true</code> prevents a volume that is included in
     * the block device mapping of the AMI from being mapped to the specified device
     * name at launch.</p> <p>If <code>NoDevice</code> is <code>true</code> for the
     * root device, instances might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches replacement instances.</p>
     */
    inline BlockDeviceMapping& WithNoDevice(bool value) { SetNoDevice(value); return *this;}

  private:

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Ebs m_ebs;
    bool m_ebsHasBeenSet = false;

    bool m_noDevice;
    bool m_noDeviceHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
