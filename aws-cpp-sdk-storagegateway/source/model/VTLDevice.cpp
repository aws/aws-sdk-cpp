/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/VTLDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

VTLDevice::VTLDevice() : 
    m_vTLDeviceARNHasBeenSet(false),
    m_vTLDeviceTypeHasBeenSet(false),
    m_vTLDeviceVendorHasBeenSet(false),
    m_vTLDeviceProductIdentifierHasBeenSet(false),
    m_deviceiSCSIAttributesHasBeenSet(false)
{
}

VTLDevice::VTLDevice(JsonView jsonValue) : 
    m_vTLDeviceARNHasBeenSet(false),
    m_vTLDeviceTypeHasBeenSet(false),
    m_vTLDeviceVendorHasBeenSet(false),
    m_vTLDeviceProductIdentifierHasBeenSet(false),
    m_deviceiSCSIAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

VTLDevice& VTLDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VTLDeviceARN"))
  {
    m_vTLDeviceARN = jsonValue.GetString("VTLDeviceARN");

    m_vTLDeviceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VTLDeviceType"))
  {
    m_vTLDeviceType = jsonValue.GetString("VTLDeviceType");

    m_vTLDeviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VTLDeviceVendor"))
  {
    m_vTLDeviceVendor = jsonValue.GetString("VTLDeviceVendor");

    m_vTLDeviceVendorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VTLDeviceProductIdentifier"))
  {
    m_vTLDeviceProductIdentifier = jsonValue.GetString("VTLDeviceProductIdentifier");

    m_vTLDeviceProductIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceiSCSIAttributes"))
  {
    m_deviceiSCSIAttributes = jsonValue.GetObject("DeviceiSCSIAttributes");

    m_deviceiSCSIAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue VTLDevice::Jsonize() const
{
  JsonValue payload;

  if(m_vTLDeviceARNHasBeenSet)
  {
   payload.WithString("VTLDeviceARN", m_vTLDeviceARN);

  }

  if(m_vTLDeviceTypeHasBeenSet)
  {
   payload.WithString("VTLDeviceType", m_vTLDeviceType);

  }

  if(m_vTLDeviceVendorHasBeenSet)
  {
   payload.WithString("VTLDeviceVendor", m_vTLDeviceVendor);

  }

  if(m_vTLDeviceProductIdentifierHasBeenSet)
  {
   payload.WithString("VTLDeviceProductIdentifier", m_vTLDeviceProductIdentifier);

  }

  if(m_deviceiSCSIAttributesHasBeenSet)
  {
   payload.WithObject("DeviceiSCSIAttributes", m_deviceiSCSIAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
