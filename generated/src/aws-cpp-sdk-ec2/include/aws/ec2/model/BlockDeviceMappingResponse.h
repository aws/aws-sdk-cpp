/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EbsBlockDeviceResponse.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BlockDeviceMappingResponse">AWS
   * API Reference</a></p>
   */
  class BlockDeviceMappingResponse
  {
  public:
    AWS_EC2_API BlockDeviceMappingResponse();
    AWS_EC2_API BlockDeviceMappingResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BlockDeviceMappingResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline BlockDeviceMappingResponse& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline BlockDeviceMappingResponse& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline BlockDeviceMappingResponse& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual device name.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }
    inline BlockDeviceMappingResponse& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}
    inline BlockDeviceMappingResponse& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}
    inline BlockDeviceMappingResponse& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const EbsBlockDeviceResponse& GetEbs() const{ return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    inline void SetEbs(const EbsBlockDeviceResponse& value) { m_ebsHasBeenSet = true; m_ebs = value; }
    inline void SetEbs(EbsBlockDeviceResponse&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }
    inline BlockDeviceMappingResponse& WithEbs(const EbsBlockDeviceResponse& value) { SetEbs(value); return *this;}
    inline BlockDeviceMappingResponse& WithEbs(EbsBlockDeviceResponse&& value) { SetEbs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suppresses the specified device included in the block device mapping.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }
    inline BlockDeviceMappingResponse& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}
    inline BlockDeviceMappingResponse& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}
    inline BlockDeviceMappingResponse& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;

    EbsBlockDeviceResponse m_ebs;
    bool m_ebsHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
