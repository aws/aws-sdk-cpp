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
  class AWS_AUTOSCALING_API BlockDeviceMapping
  {
  public:
    BlockDeviceMapping();
    BlockDeviceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    BlockDeviceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline BlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}


    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline BlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline BlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name exposed to the EC2 instance (for example,
     * <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device
     * Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline BlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The information about the Amazon EBS volume.</p>
     */
    inline const Ebs& GetEbs() const{ return m_ebs; }

    /**
     * <p>The information about the Amazon EBS volume.</p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>The information about the Amazon EBS volume.</p>
     */
    inline void SetEbs(const Ebs& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>The information about the Amazon EBS volume.</p>
     */
    inline void SetEbs(Ebs&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>The information about the Amazon EBS volume.</p>
     */
    inline BlockDeviceMapping& WithEbs(const Ebs& value) { SetEbs(value); return *this;}

    /**
     * <p>The information about the Amazon EBS volume.</p>
     */
    inline BlockDeviceMapping& WithEbs(Ebs&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>Suppresses a device mapping.</p> <p>If this parameter is true for the root
     * device, the instance might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches a replacement instance.</p>
     */
    inline bool GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>Suppresses a device mapping.</p> <p>If this parameter is true for the root
     * device, the instance might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches a replacement instance.</p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p>Suppresses a device mapping.</p> <p>If this parameter is true for the root
     * device, the instance might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches a replacement instance.</p>
     */
    inline void SetNoDevice(bool value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>Suppresses a device mapping.</p> <p>If this parameter is true for the root
     * device, the instance might fail the EC2 health check. In that case, Amazon EC2
     * Auto Scaling launches a replacement instance.</p>
     */
    inline BlockDeviceMapping& WithNoDevice(bool value) { SetNoDevice(value); return *this;}

  private:

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Ebs m_ebs;
    bool m_ebsHasBeenSet;

    bool m_noDevice;
    bool m_noDeviceHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
