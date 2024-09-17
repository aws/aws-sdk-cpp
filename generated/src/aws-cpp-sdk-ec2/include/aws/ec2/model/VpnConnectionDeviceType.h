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
    AWS_EC2_API VpnConnectionDeviceType();
    AWS_EC2_API VpnConnectionDeviceType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnConnectionDeviceType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Customer gateway device identifier.</p>
     */
    inline const Aws::String& GetVpnConnectionDeviceTypeId() const{ return m_vpnConnectionDeviceTypeId; }
    inline bool VpnConnectionDeviceTypeIdHasBeenSet() const { return m_vpnConnectionDeviceTypeIdHasBeenSet; }
    inline void SetVpnConnectionDeviceTypeId(const Aws::String& value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId = value; }
    inline void SetVpnConnectionDeviceTypeId(Aws::String&& value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId = std::move(value); }
    inline void SetVpnConnectionDeviceTypeId(const char* value) { m_vpnConnectionDeviceTypeIdHasBeenSet = true; m_vpnConnectionDeviceTypeId.assign(value); }
    inline VpnConnectionDeviceType& WithVpnConnectionDeviceTypeId(const Aws::String& value) { SetVpnConnectionDeviceTypeId(value); return *this;}
    inline VpnConnectionDeviceType& WithVpnConnectionDeviceTypeId(Aws::String&& value) { SetVpnConnectionDeviceTypeId(std::move(value)); return *this;}
    inline VpnConnectionDeviceType& WithVpnConnectionDeviceTypeId(const char* value) { SetVpnConnectionDeviceTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer gateway device vendor.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }
    inline VpnConnectionDeviceType& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}
    inline VpnConnectionDeviceType& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}
    inline VpnConnectionDeviceType& WithVendor(const char* value) { SetVendor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer gateway device platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline VpnConnectionDeviceType& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline VpnConnectionDeviceType& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline VpnConnectionDeviceType& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer gateway device software version.</p>
     */
    inline const Aws::String& GetSoftware() const{ return m_software; }
    inline bool SoftwareHasBeenSet() const { return m_softwareHasBeenSet; }
    inline void SetSoftware(const Aws::String& value) { m_softwareHasBeenSet = true; m_software = value; }
    inline void SetSoftware(Aws::String&& value) { m_softwareHasBeenSet = true; m_software = std::move(value); }
    inline void SetSoftware(const char* value) { m_softwareHasBeenSet = true; m_software.assign(value); }
    inline VpnConnectionDeviceType& WithSoftware(const Aws::String& value) { SetSoftware(value); return *this;}
    inline VpnConnectionDeviceType& WithSoftware(Aws::String&& value) { SetSoftware(std::move(value)); return *this;}
    inline VpnConnectionDeviceType& WithSoftware(const char* value) { SetSoftware(value); return *this;}
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
