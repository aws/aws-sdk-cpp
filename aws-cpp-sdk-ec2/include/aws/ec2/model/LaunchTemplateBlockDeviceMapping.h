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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LaunchTemplateEbsBlockDevice.h>
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
   * <p>Describes a block device mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateBlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateBlockDeviceMapping
  {
  public:
    LaunchTemplateBlockDeviceMapping();
    LaunchTemplateBlockDeviceMapping(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateBlockDeviceMapping& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The virtual device name (ephemeralN).</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}


    /**
     * <p>Information about the block device for an EBS volume.</p>
     */
    inline const LaunchTemplateEbsBlockDevice& GetEbs() const{ return m_ebs; }

    /**
     * <p>Information about the block device for an EBS volume.</p>
     */
    inline void SetEbs(const LaunchTemplateEbsBlockDevice& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Information about the block device for an EBS volume.</p>
     */
    inline void SetEbs(LaunchTemplateEbsBlockDevice&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Information about the block device for an EBS volume.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithEbs(const LaunchTemplateEbsBlockDevice& value) { SetEbs(value); return *this;}

    /**
     * <p>Information about the block device for an EBS volume.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithEbs(LaunchTemplateEbsBlockDevice&& value) { SetEbs(std::move(value)); return *this;}


    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline LaunchTemplateBlockDeviceMapping& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet;

    LaunchTemplateEbsBlockDevice m_ebs;
    bool m_ebsHasBeenSet;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
