﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes the data that identifies an Amazon FPGA image (AFI) on the PCI
   * bus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PciId">AWS API
   * Reference</a></p>
   */
  class PciId
  {
  public:
    AWS_EC2_API PciId() = default;
    AWS_EC2_API PciId(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PciId& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    PciId& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the vendor.</p>
     */
    inline const Aws::String& GetVendorId() const { return m_vendorId; }
    inline bool VendorIdHasBeenSet() const { return m_vendorIdHasBeenSet; }
    template<typename VendorIdT = Aws::String>
    void SetVendorId(VendorIdT&& value) { m_vendorIdHasBeenSet = true; m_vendorId = std::forward<VendorIdT>(value); }
    template<typename VendorIdT = Aws::String>
    PciId& WithVendorId(VendorIdT&& value) { SetVendorId(std::forward<VendorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subsystem.</p>
     */
    inline const Aws::String& GetSubsystemId() const { return m_subsystemId; }
    inline bool SubsystemIdHasBeenSet() const { return m_subsystemIdHasBeenSet; }
    template<typename SubsystemIdT = Aws::String>
    void SetSubsystemId(SubsystemIdT&& value) { m_subsystemIdHasBeenSet = true; m_subsystemId = std::forward<SubsystemIdT>(value); }
    template<typename SubsystemIdT = Aws::String>
    PciId& WithSubsystemId(SubsystemIdT&& value) { SetSubsystemId(std::forward<SubsystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline const Aws::String& GetSubsystemVendorId() const { return m_subsystemVendorId; }
    inline bool SubsystemVendorIdHasBeenSet() const { return m_subsystemVendorIdHasBeenSet; }
    template<typename SubsystemVendorIdT = Aws::String>
    void SetSubsystemVendorId(SubsystemVendorIdT&& value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId = std::forward<SubsystemVendorIdT>(value); }
    template<typename SubsystemVendorIdT = Aws::String>
    PciId& WithSubsystemVendorId(SubsystemVendorIdT&& value) { SetSubsystemVendorId(std::forward<SubsystemVendorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_vendorId;
    bool m_vendorIdHasBeenSet = false;

    Aws::String m_subsystemId;
    bool m_subsystemIdHasBeenSet = false;

    Aws::String m_subsystemVendorId;
    bool m_subsystemVendorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
