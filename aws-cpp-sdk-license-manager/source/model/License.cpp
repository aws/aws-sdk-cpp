/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/License.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

License::License() : 
    m_licenseArnHasBeenSet(false),
    m_licenseNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productSKUHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_status(LicenseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_validityHasBeenSet(false),
    m_beneficiaryHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_consumptionConfigurationHasBeenSet(false),
    m_licenseMetadataHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

License::License(JsonView jsonValue) : 
    m_licenseArnHasBeenSet(false),
    m_licenseNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productSKUHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_status(LicenseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_validityHasBeenSet(false),
    m_beneficiaryHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_consumptionConfigurationHasBeenSet(false),
    m_licenseMetadataHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

License& License::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LicenseArn"))
  {
    m_licenseArn = jsonValue.GetString("LicenseArn");

    m_licenseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseName"))
  {
    m_licenseName = jsonValue.GetString("LicenseName");

    m_licenseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetString("ProductName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductSKU"))
  {
    m_productSKU = jsonValue.GetString("ProductSKU");

    m_productSKUHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetObject("Issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeRegion"))
  {
    m_homeRegion = jsonValue.GetString("HomeRegion");

    m_homeRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LicenseStatusMapper::GetLicenseStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Validity"))
  {
    m_validity = jsonValue.GetObject("Validity");

    m_validityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Beneficiary"))
  {
    m_beneficiary = jsonValue.GetString("Beneficiary");

    m_beneficiaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entitlements"))
  {
    Aws::Utils::Array<JsonView> entitlementsJsonList = jsonValue.GetArray("Entitlements");
    for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
    {
      m_entitlements.push_back(entitlementsJsonList[entitlementsIndex].AsObject());
    }
    m_entitlementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumptionConfiguration"))
  {
    m_consumptionConfiguration = jsonValue.GetObject("ConsumptionConfiguration");

    m_consumptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseMetadata"))
  {
    Aws::Utils::Array<JsonView> licenseMetadataJsonList = jsonValue.GetArray("LicenseMetadata");
    for(unsigned licenseMetadataIndex = 0; licenseMetadataIndex < licenseMetadataJsonList.GetLength(); ++licenseMetadataIndex)
    {
      m_licenseMetadata.push_back(licenseMetadataJsonList[licenseMetadataIndex].AsObject());
    }
    m_licenseMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue License::Jsonize() const
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

  if(m_productSKUHasBeenSet)
  {
   payload.WithString("ProductSKU", m_productSKU);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithObject("Issuer", m_issuer.Jsonize());

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LicenseStatusMapper::GetNameForLicenseStatus(m_status));
  }

  if(m_validityHasBeenSet)
  {
   payload.WithObject("Validity", m_validity.Jsonize());

  }

  if(m_beneficiaryHasBeenSet)
  {
   payload.WithString("Beneficiary", m_beneficiary);

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

  if(m_licenseMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseMetadataJsonList(m_licenseMetadata.size());
   for(unsigned licenseMetadataIndex = 0; licenseMetadataIndex < licenseMetadataJsonList.GetLength(); ++licenseMetadataIndex)
   {
     licenseMetadataJsonList[licenseMetadataIndex].AsObject(m_licenseMetadata[licenseMetadataIndex].Jsonize());
   }
   payload.WithArray("LicenseMetadata", std::move(licenseMetadataJsonList));

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("CreateTime", m_createTime);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
