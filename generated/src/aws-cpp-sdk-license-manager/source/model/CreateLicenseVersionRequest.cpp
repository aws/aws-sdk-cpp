/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateLicenseVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLicenseVersionRequest::CreateLicenseVersionRequest() : 
    m_licenseArnHasBeenSet(false),
    m_licenseNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_validityHasBeenSet(false),
    m_licenseMetadataHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_consumptionConfigurationHasBeenSet(false),
    m_status(LicenseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

Aws::String CreateLicenseVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  if(m_licenseNameHasBeenSet)
  {
   payload.WithString("LicenseName", m_licenseName);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithObject("Issuer", m_issuer.Jsonize());

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithObject("Validity", m_validity.Jsonize());

  }

  if(m_licenseMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseMetadataJsonList(m_licenseMetadata.size());
   for(unsigned licenseMetadataIndex = 0; licenseMetadataIndex < licenseMetadataJsonList.GetLength(); ++licenseMetadataIndex)
   {
     licenseMetadataJsonList[licenseMetadataIndex].AsObject(m_licenseMetadata[licenseMetadataIndex].Jsonize());
   }
   payload.WithArray("LicenseMetadata", std::move(licenseMetadataJsonList));

  }

  if(m_entitlementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitlementsJsonList(m_entitlements.size());
   for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
   {
     entitlementsJsonList[entitlementsIndex].AsObject(m_entitlements[entitlementsIndex].Jsonize());
   }
   payload.WithArray("Entitlements", std::move(entitlementsJsonList));

  }

  if(m_consumptionConfigurationHasBeenSet)
  {
   payload.WithObject("ConsumptionConfiguration", m_consumptionConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LicenseStatusMapper::GetNameForLicenseStatus(m_status));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("SourceVersion", m_sourceVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLicenseVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateLicenseVersion"));
  return headers;

}




