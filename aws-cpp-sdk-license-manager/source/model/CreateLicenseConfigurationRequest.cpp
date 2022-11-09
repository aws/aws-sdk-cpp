/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateLicenseConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLicenseConfigurationRequest::CreateLicenseConfigurationRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseCountingType(LicenseCountingType::NOT_SET),
    m_licenseCountingTypeHasBeenSet(false),
    m_licenseCount(0),
    m_licenseCountHasBeenSet(false),
    m_licenseCountHardLimit(false),
    m_licenseCountHardLimitHasBeenSet(false),
    m_licenseRulesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_disassociateWhenNotFound(false),
    m_disassociateWhenNotFoundHasBeenSet(false),
    m_productInformationListHasBeenSet(false)
{
}

Aws::String CreateLicenseConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_licenseCountingTypeHasBeenSet)
  {
   payload.WithString("LicenseCountingType", LicenseCountingTypeMapper::GetNameForLicenseCountingType(m_licenseCountingType));
  }

  if(m_licenseCountHasBeenSet)
  {
   payload.WithInt64("LicenseCount", m_licenseCount);

  }

  if(m_licenseCountHardLimitHasBeenSet)
  {
   payload.WithBool("LicenseCountHardLimit", m_licenseCountHardLimit);

  }

  if(m_licenseRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseRulesJsonList(m_licenseRules.size());
   for(unsigned licenseRulesIndex = 0; licenseRulesIndex < licenseRulesJsonList.GetLength(); ++licenseRulesIndex)
   {
     licenseRulesJsonList[licenseRulesIndex].AsString(m_licenseRules[licenseRulesIndex]);
   }
   payload.WithArray("LicenseRules", std::move(licenseRulesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_disassociateWhenNotFoundHasBeenSet)
  {
   payload.WithBool("DisassociateWhenNotFound", m_disassociateWhenNotFound);

  }

  if(m_productInformationListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productInformationListJsonList(m_productInformationList.size());
   for(unsigned productInformationListIndex = 0; productInformationListIndex < productInformationListJsonList.GetLength(); ++productInformationListIndex)
   {
     productInformationListJsonList[productInformationListIndex].AsObject(m_productInformationList[productInformationListIndex].Jsonize());
   }
   payload.WithArray("ProductInformationList", std::move(productInformationListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLicenseConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateLicenseConfiguration"));
  return headers;

}




