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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/DeviceiSCSIAttributes.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Represents a device object associated with a gateway-VTL.</p>
   */
  class AWS_STORAGEGATEWAY_API VTLDevice
  {
  public:
    VTLDevice();
    VTLDevice(const Aws::Utils::Json::JsonValue& jsonValue);
    VTLDevice& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const{ return m_vTLDeviceARN; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline void SetVTLDeviceARN(const Aws::String& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline void SetVTLDeviceARN(Aws::String&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline void SetVTLDeviceARN(const char* value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline VTLDevice& WithVTLDeviceARN(const Aws::String& value) { SetVTLDeviceARN(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline VTLDevice& WithVTLDeviceARN(Aws::String&& value) { SetVTLDeviceARN(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline VTLDevice& WithVTLDeviceARN(const char* value) { SetVTLDeviceARN(value); return *this;}

    
    inline const Aws::String& GetVTLDeviceType() const{ return m_vTLDeviceType; }

    
    inline void SetVTLDeviceType(const Aws::String& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = value; }

    
    inline void SetVTLDeviceType(Aws::String&& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = value; }

    
    inline void SetVTLDeviceType(const char* value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType.assign(value); }

    
    inline VTLDevice& WithVTLDeviceType(const Aws::String& value) { SetVTLDeviceType(value); return *this;}

    
    inline VTLDevice& WithVTLDeviceType(Aws::String&& value) { SetVTLDeviceType(value); return *this;}

    
    inline VTLDevice& WithVTLDeviceType(const char* value) { SetVTLDeviceType(value); return *this;}

    
    inline const Aws::String& GetVTLDeviceVendor() const{ return m_vTLDeviceVendor; }

    
    inline void SetVTLDeviceVendor(const Aws::String& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = value; }

    
    inline void SetVTLDeviceVendor(Aws::String&& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = value; }

    
    inline void SetVTLDeviceVendor(const char* value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor.assign(value); }

    
    inline VTLDevice& WithVTLDeviceVendor(const Aws::String& value) { SetVTLDeviceVendor(value); return *this;}

    
    inline VTLDevice& WithVTLDeviceVendor(Aws::String&& value) { SetVTLDeviceVendor(value); return *this;}

    
    inline VTLDevice& WithVTLDeviceVendor(const char* value) { SetVTLDeviceVendor(value); return *this;}

    
    inline const Aws::String& GetVTLDeviceProductIdentifier() const{ return m_vTLDeviceProductIdentifier; }

    
    inline void SetVTLDeviceProductIdentifier(const Aws::String& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = value; }

    
    inline void SetVTLDeviceProductIdentifier(Aws::String&& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = value; }

    
    inline void SetVTLDeviceProductIdentifier(const char* value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier.assign(value); }

    
    inline VTLDevice& WithVTLDeviceProductIdentifier(const Aws::String& value) { SetVTLDeviceProductIdentifier(value); return *this;}

    
    inline VTLDevice& WithVTLDeviceProductIdentifier(Aws::String&& value) { SetVTLDeviceProductIdentifier(value); return *this;}

    
    inline VTLDevice& WithVTLDeviceProductIdentifier(const char* value) { SetVTLDeviceProductIdentifier(value); return *this;}

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline const DeviceiSCSIAttributes& GetDeviceiSCSIAttributes() const{ return m_deviceiSCSIAttributes; }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline void SetDeviceiSCSIAttributes(const DeviceiSCSIAttributes& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = value; }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline void SetDeviceiSCSIAttributes(DeviceiSCSIAttributes&& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = value; }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline VTLDevice& WithDeviceiSCSIAttributes(const DeviceiSCSIAttributes& value) { SetDeviceiSCSIAttributes(value); return *this;}

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline VTLDevice& WithDeviceiSCSIAttributes(DeviceiSCSIAttributes&& value) { SetDeviceiSCSIAttributes(value); return *this;}

  private:
    Aws::String m_vTLDeviceARN;
    bool m_vTLDeviceARNHasBeenSet;
    Aws::String m_vTLDeviceType;
    bool m_vTLDeviceTypeHasBeenSet;
    Aws::String m_vTLDeviceVendor;
    bool m_vTLDeviceVendorHasBeenSet;
    Aws::String m_vTLDeviceProductIdentifier;
    bool m_vTLDeviceProductIdentifierHasBeenSet;
    DeviceiSCSIAttributes m_deviceiSCSIAttributes;
    bool m_deviceiSCSIAttributesHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
