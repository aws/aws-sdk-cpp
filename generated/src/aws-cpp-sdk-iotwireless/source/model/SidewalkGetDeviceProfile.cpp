/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkGetDeviceProfile.h>
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

SidewalkGetDeviceProfile::SidewalkGetDeviceProfile() : 
    m_applicationServerPublicKeyHasBeenSet(false),
    m_qualificationStatus(false),
    m_qualificationStatusHasBeenSet(false),
    m_dakCertificateMetadataHasBeenSet(false)
{
}

SidewalkGetDeviceProfile::SidewalkGetDeviceProfile(JsonView jsonValue) : 
    m_applicationServerPublicKeyHasBeenSet(false),
    m_qualificationStatus(false),
    m_qualificationStatusHasBeenSet(false),
    m_dakCertificateMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkGetDeviceProfile& SidewalkGetDeviceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationServerPublicKey"))
  {
    m_applicationServerPublicKey = jsonValue.GetString("ApplicationServerPublicKey");

    m_applicationServerPublicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QualificationStatus"))
  {
    m_qualificationStatus = jsonValue.GetBool("QualificationStatus");

    m_qualificationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DakCertificateMetadata"))
  {
    Aws::Utils::Array<JsonView> dakCertificateMetadataJsonList = jsonValue.GetArray("DakCertificateMetadata");
    for(unsigned dakCertificateMetadataIndex = 0; dakCertificateMetadataIndex < dakCertificateMetadataJsonList.GetLength(); ++dakCertificateMetadataIndex)
    {
      m_dakCertificateMetadata.push_back(dakCertificateMetadataJsonList[dakCertificateMetadataIndex].AsObject());
    }
    m_dakCertificateMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkGetDeviceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_applicationServerPublicKeyHasBeenSet)
  {
   payload.WithString("ApplicationServerPublicKey", m_applicationServerPublicKey);

  }

  if(m_qualificationStatusHasBeenSet)
  {
   payload.WithBool("QualificationStatus", m_qualificationStatus);

  }

  if(m_dakCertificateMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dakCertificateMetadataJsonList(m_dakCertificateMetadata.size());
   for(unsigned dakCertificateMetadataIndex = 0; dakCertificateMetadataIndex < dakCertificateMetadataJsonList.GetLength(); ++dakCertificateMetadataIndex)
   {
     dakCertificateMetadataJsonList[dakCertificateMetadataIndex].AsObject(m_dakCertificateMetadata[dakCertificateMetadataIndex].Jsonize());
   }
   payload.WithArray("DakCertificateMetadata", std::move(dakCertificateMetadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
