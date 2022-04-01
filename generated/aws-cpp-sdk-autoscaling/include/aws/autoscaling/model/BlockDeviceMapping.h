﻿/**
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
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
     */
    inline BlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
     * <p>You can specify either <code>VirtualName</code> or <code>Ebs</code>, but not
     * both.</p>
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
     * <p>Parameters used to automatically set up EBS volumes when an instance is
     * launched.</p> <p>You can specify either <code>VirtualName</code> or
     * <code>Ebs</code>, but not both.</p>
     */
    inline const Ebs& GetEbs() const{ return m_ebs; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when an instance is
     * launched.</p> <p>You can specify either <code>VirtualName</code> or
     * <code>Ebs</code>, but not both.</p>
     */
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when an instance is
     * launched.</p> <p>You can specify either <code>VirtualName</code> or
     * <code>Ebs</code>, but not both.</p>
     */
    inline void SetEbs(const Ebs& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when an instance is
     * launched.</p> <p>You can specify either <code>VirtualName</code> or
     * <code>Ebs</code>, but not both.</p>
     */
    inline void SetEbs(Ebs&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Parameters used to automatically set up EBS volumes when an instance is
     * launched.</p> <p>You can specify either <code>VirtualName</code> or
     * <code>Ebs</code>, but not both.</p>
     */
    inline BlockDeviceMapping& WithEbs(const Ebs& value) { SetEbs(value); return *this;}

    /**
     * <p>Parameters used to automatically set up EBS volumes when an instance is
     * launched.</p> <p>You can specify either <code>VirtualName</code> or
     * <code>Ebs</code>, but not both.</p>
     */
    inline BlockDeviceMapping& WithEbs(Ebs&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>Setting this value to <code>true</code> suppresses the specified device
     * included in the block device mapping of the AMI.</p> <p>If <code>NoDevice</code>
     * is <code>true</code> for the root device, instances might fail the EC2 health
     * check. In that case, Amazon EC2 Auto Scaling launches replacement instances.</p>
     * <p>If you specify <code>NoDevice</code>, you cannot specify
     * <code>Ebs</code>.</p>
     */
    inline bool GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>Setting this value to <code>true</code> suppresses the specified device
     * included in the block device mapping of the AMI.</p> <p>If <code>NoDevice</code>
     * is <code>true</code> for the root device, instances might fail the EC2 health
     * check. In that case, Amazon EC2 Auto Scaling launches replacement instances.</p>
     * <p>If you specify <code>NoDevice</code>, you cannot specify
     * <code>Ebs</code>.</p>
     */
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }

    /**
     * <p>Setting this value to <code>true</code> suppresses the specified device
     * included in the block device mapping of the AMI.</p> <p>If <code>NoDevice</code>
     * is <code>true</code> for the root device, instances might fail the EC2 health
     * check. In that case, Amazon EC2 Auto Scaling launches replacement instances.</p>
     * <p>If you specify <code>NoDevice</code>, you cannot specify
     * <code>Ebs</code>.</p>
     */
    inline void SetNoDevice(bool value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>Setting this value to <code>true</code> suppresses the specified device
     * included in the block device mapping of the AMI.</p> <p>If <code>NoDevice</code>
     * is <code>true</code> for the root device, instances might fail the EC2 health
     * check. In that case, Amazon EC2 Auto Scaling launches replacement instances.</p>
     * <p>If you specify <code>NoDevice</code>, you cannot specify
     * <code>Ebs</code>.</p>
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
