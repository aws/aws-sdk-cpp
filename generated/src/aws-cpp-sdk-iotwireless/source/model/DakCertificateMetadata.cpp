/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DakCertificateMetadata.h>
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

DakCertificateMetadata::DakCertificateMetadata() : 
    m_certificateIdHasBeenSet(false),
    m_maxAllowedSignature(0),
    m_maxAllowedSignatureHasBeenSet(false),
    m_factorySupport(false),
    m_factorySupportHasBeenSet(false),
    m_apIdHasBeenSet(false),
    m_deviceTypeIdHasBeenSet(false)
{
}

DakCertificateMetadata::DakCertificateMetadata(JsonView jsonValue) : 
    m_certificateIdHasBeenSet(false),
    m_maxAllowedSignature(0),
    m_maxAllowedSignatureHasBeenSet(false),
    m_factorySupport(false),
    m_factorySupportHasBeenSet(false),
    m_apIdHasBeenSet(false),
    m_deviceTypeIdHasBeenSet(false)
{
  *this = jsonValue;
}

DakCertificateMetadata& DakCertificateMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateId"))
  {
    m_certificateId = jsonValue.GetString("CertificateId");

    m_certificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAllowedSignature"))
  {
    m_maxAllowedSignature = jsonValue.GetInteger("MaxAllowedSignature");

    m_maxAllowedSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FactorySupport"))
  {
    m_factorySupport = jsonValue.GetBool("FactorySupport");

    m_factorySupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApId"))
  {
    m_apId = jsonValue.GetString("ApId");

    m_apIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeId"))
  {
    m_deviceTypeId = jsonValue.GetString("DeviceTypeId");

    m_deviceTypeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DakCertificateMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  if(m_maxAllowedSignatureHasBeenSet)
  {
   payload.WithInteger("MaxAllowedSignature", m_maxAllowedSignature);

  }

  if(m_factorySupportHasBeenSet)
  {
   payload.WithBool("FactorySupport", m_factorySupport);

  }

  if(m_apIdHasBeenSet)
  {
   payload.WithString("ApId", m_apId);

  }

  if(m_deviceTypeIdHasBeenSet)
  {
   payload.WithString("DeviceTypeId", m_deviceTypeId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
