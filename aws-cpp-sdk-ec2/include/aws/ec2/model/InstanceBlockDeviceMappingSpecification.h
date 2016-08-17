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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EbsInstanceBlockDeviceSpecification.h>

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
   * <p>Describes a block device mapping entry.</p>
   */
  class AWS_EC2_API InstanceBlockDeviceMappingSpecification
  {
  public:
    InstanceBlockDeviceMappingSpecification();
    InstanceBlockDeviceMappingSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceBlockDeviceMappingSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithDeviceName(Aws::String&& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name exposed to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const EbsInstanceBlockDeviceSpecification& GetEbs() const{ return m_ebs; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline void SetEbs(const EbsInstanceBlockDeviceSpecification& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline void SetEbs(EbsInstanceBlockDeviceSpecification&& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithEbs(const EbsInstanceBlockDeviceSpecification& value) { SetEbs(value); return *this;}

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithEbs(EbsInstanceBlockDeviceSpecification&& value) { SetEbs(value); return *this;}

    /**
     * <p>The virtual device name.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The virtual device name.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The virtual device name.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The virtual device name.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The virtual device name.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The virtual device name.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithVirtualName(Aws::String&& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The virtual device name.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithNoDevice(Aws::String&& value) { SetNoDevice(value); return *this;}

    /**
     * <p>suppress the specified device included in the block device mapping.</p>
     */
    inline InstanceBlockDeviceMappingSpecification& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}

  private:
    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;
    EbsInstanceBlockDeviceSpecification m_ebs;
    bool m_ebsHasBeenSet;
    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet;
    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
