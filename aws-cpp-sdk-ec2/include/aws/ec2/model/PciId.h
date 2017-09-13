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
  class AWS_EC2_API PciId
  {
  public:
    PciId();
    PciId(const Aws::Utils::Xml::XmlNode& xmlNode);
    PciId& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline PciId& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline PciId& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline PciId& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The ID of the vendor.</p>
     */
    inline const Aws::String& GetVendorId() const{ return m_vendorId; }

    /**
     * <p>The ID of the vendor.</p>
     */
    inline void SetVendorId(const Aws::String& value) { m_vendorIdHasBeenSet = true; m_vendorId = value; }

    /**
     * <p>The ID of the vendor.</p>
     */
    inline void SetVendorId(Aws::String&& value) { m_vendorIdHasBeenSet = true; m_vendorId = std::move(value); }

    /**
     * <p>The ID of the vendor.</p>
     */
    inline void SetVendorId(const char* value) { m_vendorIdHasBeenSet = true; m_vendorId.assign(value); }

    /**
     * <p>The ID of the vendor.</p>
     */
    inline PciId& WithVendorId(const Aws::String& value) { SetVendorId(value); return *this;}

    /**
     * <p>The ID of the vendor.</p>
     */
    inline PciId& WithVendorId(Aws::String&& value) { SetVendorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the vendor.</p>
     */
    inline PciId& WithVendorId(const char* value) { SetVendorId(value); return *this;}


    /**
     * <p>The ID of the subsystem.</p>
     */
    inline const Aws::String& GetSubsystemId() const{ return m_subsystemId; }

    /**
     * <p>The ID of the subsystem.</p>
     */
    inline void SetSubsystemId(const Aws::String& value) { m_subsystemIdHasBeenSet = true; m_subsystemId = value; }

    /**
     * <p>The ID of the subsystem.</p>
     */
    inline void SetSubsystemId(Aws::String&& value) { m_subsystemIdHasBeenSet = true; m_subsystemId = std::move(value); }

    /**
     * <p>The ID of the subsystem.</p>
     */
    inline void SetSubsystemId(const char* value) { m_subsystemIdHasBeenSet = true; m_subsystemId.assign(value); }

    /**
     * <p>The ID of the subsystem.</p>
     */
    inline PciId& WithSubsystemId(const Aws::String& value) { SetSubsystemId(value); return *this;}

    /**
     * <p>The ID of the subsystem.</p>
     */
    inline PciId& WithSubsystemId(Aws::String&& value) { SetSubsystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subsystem.</p>
     */
    inline PciId& WithSubsystemId(const char* value) { SetSubsystemId(value); return *this;}


    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline const Aws::String& GetSubsystemVendorId() const{ return m_subsystemVendorId; }

    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline void SetSubsystemVendorId(const Aws::String& value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId = value; }

    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline void SetSubsystemVendorId(Aws::String&& value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId = std::move(value); }

    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline void SetSubsystemVendorId(const char* value) { m_subsystemVendorIdHasBeenSet = true; m_subsystemVendorId.assign(value); }

    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline PciId& WithSubsystemVendorId(const Aws::String& value) { SetSubsystemVendorId(value); return *this;}

    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline PciId& WithSubsystemVendorId(Aws::String&& value) { SetSubsystemVendorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the vendor for the subsystem.</p>
     */
    inline PciId& WithSubsystemVendorId(const char* value) { SetSubsystemVendorId(value); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    Aws::String m_vendorId;
    bool m_vendorIdHasBeenSet;

    Aws::String m_subsystemId;
    bool m_subsystemIdHasBeenSet;

    Aws::String m_subsystemVendorId;
    bool m_subsystemVendorIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
