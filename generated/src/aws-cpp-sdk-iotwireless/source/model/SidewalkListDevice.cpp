/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkListDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkListDevice::SidewalkListDevice() : 
    m_amazonIdHasBeenSet(false),
    m_sidewalkIdHasBeenSet(false),
    m_sidewalkManufacturingSnHasBeenSet(false),
    m_deviceCertificatesHasBeenSet(false)
{
}

SidewalkListDevice::SidewalkListDevice(JsonView jsonValue) : 
    m_amazonIdHasBeenSet(false),
    m_sidewalkIdHasBeenSet(false),
    m_sidewalkManufacturingSnHasBeenSet(false),
    m_deviceCertificatesHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkListDevice& SidewalkListDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonId"))
  {
    m_amazonId = jsonValue.GetString("AmazonId");

    m_amazonIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SidewalkId"))
  {
    m_sidewalkId = jsonValue.GetString("SidewalkId");

    m_sidewalkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SidewalkManufacturingSn"))
  {
    m_sidewalkManufacturingSn = jsonValue.GetString("SidewalkManufacturingSn");

    m_sidewalkManufacturingSnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceCertificates"))
  {
    Aws::Utils::Array<JsonView> deviceCertificatesJsonList = jsonValue.GetArray("DeviceCertificates");
    for(unsigned deviceCertificatesIndex = 0; deviceCertificatesIndex < deviceCertificatesJsonList.GetLength(); ++deviceCertificatesIndex)
    {
      m_deviceCertificates.push_back(deviceCertificatesJsonList[deviceCertificatesIndex].AsObject());
    }
    m_deviceCertificatesHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkListDevice::Jsonize() const
{
  JsonValue payload;

  if(m_amazonIdHasBeenSet)
  {
   payload.WithString("AmazonId", m_amazonId);

  }

  if(m_sidewalkIdHasBeenSet)
  {
   payload.WithString("SidewalkId", m_sidewalkId);

  }

  if(m_sidewalkManufacturingSnHasBeenSet)
  {
   payload.WithString("SidewalkManufacturingSn", m_sidewalkManufacturingSn);

  }

  if(m_deviceCertificatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceCertificatesJsonList(m_deviceCertificates.size());
   for(unsigned deviceCertificatesIndex = 0; deviceCertificatesIndex < deviceCertificatesJsonList.GetLength(); ++deviceCertificatesIndex)
   {
     deviceCertificatesJsonList[deviceCertificatesIndex].AsObject(m_deviceCertificates[deviceCertificatesIndex].Jsonize());
   }
   payload.WithArray("DeviceCertificates", std::move(deviceCertificatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
