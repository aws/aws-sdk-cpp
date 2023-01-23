/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/UpdateLicenseConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLicenseConfigurationRequest::UpdateLicenseConfigurationRequest() : 
    m_licenseConfigurationArnHasBeenSet(false),
    m_licenseConfigurationStatus(LicenseConfigurationStatus::NOT_SET),
    m_licenseConfigurationStatusHasBeenSet(false),
    m_licenseRulesHasBeenSet(false),
    m_licenseCount(0),
    m_licenseCountHasBeenSet(false),
    m_licenseCountHardLimit(false),
    m_licenseCountHardLimitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_productInformationListHasBeenSet(false),
    m_disassociateWhenNotFound(false),
    m_disassociateWhenNotFoundHasBeenSet(false)
{
}

Aws::String UpdateLicenseConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseConfigurationArnHasBeenSet)
  {
   payload.WithString("LicenseConfigurationArn", m_licenseConfigurationArn);

  }

  if(m_licenseConfigurationStatusHasBeenSet)
  {
   payload.WithString("LicenseConfigurationStatus", LicenseConfigurationStatusMapper::GetNameForLicenseConfigurationStatus(m_licenseConfigurationStatus));
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

  if(m_licenseCountHasBeenSet)
  {
   payload.WithInt64("LicenseCount", m_licenseCount);

  }

  if(m_licenseCountHardLimitHasBeenSet)
  {
   payload.WithBool("LicenseCountHardLimit", m_licenseCountHardLimit);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_disassociateWhenNotFoundHasBeenSet)
  {
   payload.WithBool("DisassociateWhenNotFound", m_disassociateWhenNotFound);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLicenseConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.UpdateLicenseConfiguration"));
  return headers;

}




