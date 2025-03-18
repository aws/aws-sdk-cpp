/**
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
   * <p>List of customer gateway devices that have a sample configuration file
   * available for use. You can also see the list of device types with sample
   * configuration files available under <a
   * href="https://docs.aws.amazon.com/vpn/latest/s2svpn/your-cgw.html">Your customer
   * gateway device</a> in the <i>Amazon Web Services Site-to-Site VPN User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnConnectionDeviceType">AWS
   * API Reference</a></p>
   */
  class VpnConnectionDeviceType
  {
  public:
    AWS_EC2_API VpnConnectionDeviceType() = default;
    AWS_EC2_API VpnConnectionDeviceType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnConnectionDeviceType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Customer gateway device identifier.</p>
     */
    inline const Aws::String& GetVpnConnectionDeviceTypeId() const { return m_vpnConnectionDeviceTypeId; }
    inline bool VpnConnectionDeviceTypeIdHasBeenSet() const { return m_vpnConnectionDeviceTypeIdHasBeenSet; }
    template<typename VpnConnectionDeviceTypeIdT = Aws::String>
    void SetVpnConnectionDeviceTypeId(VpnConnectionDeviceTypeIdT&& value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId = std::forward<VpnConnectionDeviceTypeIdT>(value); }
    template<typename VpnConnectionDeviceTypeIdT = Aws::String>
    VpnConnectionDeviceType& WithVpnConnectionDeviceTypeId(VpnConnectionDeviceTypeIdT&& value) { SetVpnConnectionDeviceTypeId(std::forward<VpnConnectionDeviceTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer gateway device vendor.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    VpnConnectionDeviceType& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer gateway device platform.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    VpnConnectionDeviceType& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer gateway device software version.</p>
     */
    inline const Aws::String& GetSoftware() const { return m_software; }
    inline bool SoftwareHasBeenSet() const { return m_softwareHasBeenSet; }
    template<typename SoftwareT = Aws::String>
    void SetSoftware(SoftwareT&& value) { m_softwareHasBeenSet = true; m_software = std::forward<SoftwareT>(value); }
    template<typename SoftwareT = Aws::String>
    VpnConnectionDeviceType& WithSoftware(SoftwareT&& value) { SetSoftware(std::forward<SoftwareT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionDeviceTypeId;
    bool m_vpnConnectionDeviceTypeIdHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_software;
    bool m_softwareHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
