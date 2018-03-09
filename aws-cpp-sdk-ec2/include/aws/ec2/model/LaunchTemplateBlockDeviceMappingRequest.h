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
#include <aws/ec2/model/LaunchTemplateEbsBlockDeviceRequest.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateBlockDeviceMappingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateBlockDeviceMappingRequest
  {
  public:
    LaunchTemplateBlockDeviceMappingRequest();
    LaunchTemplateBlockDeviceMappingRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateBlockDeviceMappingRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name (for example, /dev/sdh or xvdh).</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }

    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }

    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }

    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }

    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}

    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}

    /**
     * <p>The virtual device name (ephemeralN). Instance store volumes are numbered
     * starting from 0. An instance type with 2 available instance store volumes can
     * specify mappings for ephemeral0 and ephemeral1. The number of available instance
     * store volumes depends on the instance type. After you connect to the instance,
     * you must mount the volume.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}


    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const LaunchTemplateEbsBlockDeviceRequest& GetEbs() const{ return m_ebs; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline void SetEbs(const LaunchTemplateEbsBlockDeviceRequest& value) { m_ebsHasBeenSet = true; m_ebs = value; }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline void SetEbs(LaunchTemplateEbsBlockDeviceRequest&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithEbs(const LaunchTemplateEbsBlockDeviceRequest& value) { SetEbs(value); return *this;}

    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithEbs(LaunchTemplateEbsBlockDeviceRequest&& value) { SetEbs(std::move(value)); return *this;}


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
    inline LaunchTemplateBlockDeviceMappingRequest& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}

    /**
     * <p>Suppresses the specified device included in the block device mapping of the
     * AMI.</p>
     */
    inline LaunchTemplateBlockDeviceMappingRequest& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet;

    LaunchTemplateEbsBlockDeviceRequest m_ebs;
    bool m_ebsHasBeenSet;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
