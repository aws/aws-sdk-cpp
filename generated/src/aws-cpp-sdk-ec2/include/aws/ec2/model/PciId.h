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
   * <p>Describes the data that identifies an Amazon FPGA image (AFI) on the PCI
   * bus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PciId">AWS API
   * Reference</a></p>
   */
  class PciId
  {
  public:
    AWS_EC2_API PciId();
    AWS_EC2_API PciId(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PciId& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline PciId& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline PciId& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline PciId& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the vendor.</p>
     */
    inline const Aws::String& GetVendorId() const{ return m_vendorId; }
    inline bool VendorIdHasBeenSet() const { return m_vendorIdHasBeenSet; }
    inline void SetVendorId(const Aws::String& value) { m_vendorIdHasBeenSet = true; m_vendorId = value; }
    inline void SetVendorId(Aws::String&& value) { m_vendorIdHasBeenSet = true; m_vendorId = std::move(value); }
    inline void SetVendorId(const char* value) { m_vendorIdHasBeenSet = true; m_vendorId.assign(value); }
    inline PciId& WithVendorId(const Aws::String& value) { SetVendorId(value); return *this;}
    inline PciId& WithVendorId(Aws::String&& value) { SetVendorId(std::move(value)); return *this;}
    inline PciId& WithVendorId(const char* value) { SetVendorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subsystem.</p>
     */
    inline const Aws::String& GetSubsystemId() const{ return m_subsystemId; }
    inline bool SubsystemIdHasBeenSet() const { return m_subsystemIdHasBeenSet; }
    inline void SetSubsystemId(const Aws::String& value) { m_subsystemIdHasBeenSet = true; m_subsystemId = value; }
    inline void SetSubsystemId(Aws::String&& value) { m_subsystemIdHasBeenSet = true; m_subsystemId = std::move(value); }
    inline void SetSubsystemId(const char* value) { m_subsystemIdHasBeenSet = true; m_subsystemId.assign(value); }
    inline PciId& WithSubsystemId(const Aws::String& value) { SetSubsystemId(value); return *this;}
    inline PciId& WithSubsystemId(Aws::String&& value) { SetSubsystemId(std::move(value)); return *this;}
    inline PciId& WithSubsystemId(const char* value) { SetSubsystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline const Aws::String& GetSubsystemVendorId() const{ return m_subsystemVendorId; }
    inline bool SubsystemVendorIdHasBeenSet() const { return m_subsystemVendorIdHasBeenSet; }
    inline void SetSubsystemVendorId(const Aws::String& value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId = value; }
    inline void SetSubsystemVendorId(Aws::String&& value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId = std::move(value); }
    inline void SetSubsystemVendorId(const char* value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId.assign(value); }
    inline PciId& WithSubsystemVendorId(const Aws::String& value) { SetSubsystemVendorId(value); return *this;}
    inline PciId& WithSubsystemVendorId(Aws::String&& value) { SetSubsystemVendorId(std::move(value)); return *this;}
    inline PciId& WithSubsystemVendorId(const char* value) { SetSubsystemVendorId(value); return *this;}
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
