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

VTLDevice::VTLDevice(const JsonValue& jsonValue) : 
    m_vTLDeviceARNHasBeenSet(false),
    m_vTLDeviceTypeHasBeenSet(false),
    m_vTLDeviceVendorHasBeenSet(false),
    m_vTLDeviceProductIdentifierHasBeenSet(false),
    m_deviceiSCSIAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

VTLDevice& VTLDevice::operator =(const JsonValue& jsonValue)
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