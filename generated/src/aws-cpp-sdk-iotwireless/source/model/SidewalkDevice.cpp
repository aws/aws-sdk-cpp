/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkDevice.h>
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

SidewalkDevice::SidewalkDevice() : 
    m_amazonIdHasBeenSet(false),
    m_sidewalkIdHasBeenSet(false),
    m_sidewalkManufacturingSnHasBeenSet(false),
    m_deviceCertificatesHasBeenSet(false),
    m_privateKeysHasBeenSet(false),
    m_deviceProfileIdHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(WirelessDeviceSidewalkStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SidewalkDevice::SidewalkDevice(JsonView jsonValue) : 
    m_amazonIdHasBeenSet(false),
    m_sidewalkIdHasBeenSet(false),
    m_sidewalkManufacturingSnHasBeenSet(false),
    m_deviceCertificatesHasBeenSet(false),
    m_privateKeysHasBeenSet(false),
    m_deviceProfileIdHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_status(WirelessDeviceSidewalkStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkDevice& SidewalkDevice::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("PrivateKeys"))
  {
    Aws::Utils::Array<JsonView> privateKeysJsonList = jsonValue.GetArray("PrivateKeys");
    for(unsigned privateKeysIndex = 0; privateKeysIndex < privateKeysJsonList.GetLength(); ++privateKeysIndex)
    {
      m_privateKeys.push_back(privateKeysJsonList[privateKeysIndex].AsObject());
    }
    m_privateKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceProfileId"))
  {
    m_deviceProfileId = jsonValue.GetString("DeviceProfileId");

    m_deviceProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateId"))
  {
    m_certificateId = jsonValue.GetString("CertificateId");

    m_certificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = WirelessDeviceSidewalkStatusMapper::GetWirelessDeviceSidewalkStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkDevice::Jsonize() const
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

  if(m_privateKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> privateKeysJsonList(m_privateKeys.size());
   for(unsigned privateKeysIndex = 0; privateKeysIndex < privateKeysJsonList.GetLength(); ++privateKeysIndex)
   {
     privateKeysJsonList[privateKeysIndex].AsObject(m_privateKeys[privateKeysIndex].Jsonize());
   }
   payload.WithArray("PrivateKeys", std::move(privateKeysJsonList));

  }

  if(m_deviceProfileIdHasBeenSet)
  {
   payload.WithString("DeviceProfileId", m_deviceProfileId);

  }

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WirelessDeviceSidewalkStatusMapper::GetNameForWirelessDeviceSidewalkStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
