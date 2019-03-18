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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/DeviceiSCSIAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Represents a device object associated with a tape gateway.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/VTLDevice">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API VTLDevice
  {
  public:
    VTLDevice();
    VTLDevice(Aws::Utils::Json::JsonView jsonValue);
    VTLDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool VTLDeviceARNHasBeenSet() const { return m_vTLDeviceARNHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline void SetVTLDeviceARN(const Aws::String& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline void SetVTLDeviceARN(Aws::String&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::move(value); }

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
    inline VTLDevice& WithVTLDeviceARN(Aws::String&& value) { SetVTLDeviceARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) of the device (tape drive or
     * media changer).</p>
     */
    inline VTLDevice& WithVTLDeviceARN(const char* value) { SetVTLDeviceARN(value); return *this;}


    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceType() const{ return m_vTLDeviceType; }

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline bool VTLDeviceTypeHasBeenSet() const { return m_vTLDeviceTypeHasBeenSet; }

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline void SetVTLDeviceType(const Aws::String& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = value; }

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline void SetVTLDeviceType(Aws::String&& value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType = std::move(value); }

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline void SetVTLDeviceType(const char* value) { m_vTLDeviceTypeHasBeenSet = true; m_vTLDeviceType.assign(value); }

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceType(const Aws::String& value) { SetVTLDeviceType(value); return *this;}

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceType(Aws::String&& value) { SetVTLDeviceType(std::move(value)); return *this;}

    /**
     * <p>Specifies the type of device that the VTL device emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceType(const char* value) { SetVTLDeviceType(value); return *this;}


    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceVendor() const{ return m_vTLDeviceVendor; }

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline bool VTLDeviceVendorHasBeenSet() const { return m_vTLDeviceVendorHasBeenSet; }

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline void SetVTLDeviceVendor(const Aws::String& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = value; }

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline void SetVTLDeviceVendor(Aws::String&& value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor = std::move(value); }

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline void SetVTLDeviceVendor(const char* value) { m_vTLDeviceVendorHasBeenSet = true; m_vTLDeviceVendor.assign(value); }

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceVendor(const Aws::String& value) { SetVTLDeviceVendor(value); return *this;}

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceVendor(Aws::String&& value) { SetVTLDeviceVendor(std::move(value)); return *this;}

    /**
     * <p>Specifies the vendor of the device that the VTL device object emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceVendor(const char* value) { SetVTLDeviceVendor(value); return *this;}


    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline const Aws::String& GetVTLDeviceProductIdentifier() const{ return m_vTLDeviceProductIdentifier; }

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline bool VTLDeviceProductIdentifierHasBeenSet() const { return m_vTLDeviceProductIdentifierHasBeenSet; }

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline void SetVTLDeviceProductIdentifier(const Aws::String& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = value; }

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline void SetVTLDeviceProductIdentifier(Aws::String&& value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier = std::move(value); }

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline void SetVTLDeviceProductIdentifier(const char* value) { m_vTLDeviceProductIdentifierHasBeenSet = true; m_vTLDeviceProductIdentifier.assign(value); }

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceProductIdentifier(const Aws::String& value) { SetVTLDeviceProductIdentifier(value); return *this;}

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceProductIdentifier(Aws::String&& value) { SetVTLDeviceProductIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the model number of device that the VTL device emulates.</p>
     */
    inline VTLDevice& WithVTLDeviceProductIdentifier(const char* value) { SetVTLDeviceProductIdentifier(value); return *this;}


    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline const DeviceiSCSIAttributes& GetDeviceiSCSIAttributes() const{ return m_deviceiSCSIAttributes; }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline bool DeviceiSCSIAttributesHasBeenSet() const { return m_deviceiSCSIAttributesHasBeenSet; }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline void SetDeviceiSCSIAttributes(const DeviceiSCSIAttributes& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = value; }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline void SetDeviceiSCSIAttributes(DeviceiSCSIAttributes&& value) { m_deviceiSCSIAttributesHasBeenSet = true; m_deviceiSCSIAttributes = std::move(value); }

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline VTLDevice& WithDeviceiSCSIAttributes(const DeviceiSCSIAttributes& value) { SetDeviceiSCSIAttributes(value); return *this;}

    /**
     * <p>A list of iSCSI information about a VTL device.</p>
     */
    inline VTLDevice& WithDeviceiSCSIAttributes(DeviceiSCSIAttributes&& value) { SetDeviceiSCSIAttributes(std::move(value)); return *this;}

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
