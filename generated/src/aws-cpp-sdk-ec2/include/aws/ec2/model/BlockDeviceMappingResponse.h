﻿/**
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
    AWS_EC2_API BlockDeviceMappingResponse() = default;
    AWS_EC2_API BlockDeviceMappingResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BlockDeviceMappingResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The device name (for example, <code>/dev/sdh</code> or
     * <code>xvdh</code>).</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    BlockDeviceMappingResponse& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual device name.</p>
     */
    inline const Aws::String& GetVirtualName() const { return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    template<typename VirtualNameT = Aws::String>
    void SetVirtualName(VirtualNameT&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::forward<VirtualNameT>(value); }
    template<typename VirtualNameT = Aws::String>
    BlockDeviceMappingResponse& WithVirtualName(VirtualNameT&& value) { SetVirtualName(std::forward<VirtualNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used to automatically set up EBS volumes when the instance is
     * launched.</p>
     */
    inline const EbsBlockDeviceResponse& GetEbs() const { return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    template<typename EbsT = EbsBlockDeviceResponse>
    void SetEbs(EbsT&& value) { m_ebsHasBeenSet = true; m_ebs = std::forward<EbsT>(value); }
    template<typename EbsT = EbsBlockDeviceResponse>
    BlockDeviceMappingResponse& WithEbs(EbsT&& value) { SetEbs(std::forward<EbsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suppresses the specified device included in the block device mapping.</p>
     */
    inline const Aws::String& GetNoDevice() const { return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    template<typename NoDeviceT = Aws::String>
    void SetNoDevice(NoDeviceT&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::forward<NoDeviceT>(value); }
    template<typename NoDeviceT = Aws::String>
    BlockDeviceMappingResponse& WithNoDevice(NoDeviceT&& value) { SetNoDevice(std::forward<NoDeviceT>(value)); return *this;}
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
