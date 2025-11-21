/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/UpdateLicenseAssetGroupRequest.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLicenseAssetGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_licenseAssetGroupConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> licenseAssetGroupConfigurationsJsonList(m_licenseAssetGroupConfigurations.size());
    for (unsigned licenseAssetGroupConfigurationsIndex = 0;
         licenseAssetGroupConfigurationsIndex < licenseAssetGroupConfigurationsJsonList.GetLength();
         ++licenseAssetGroupConfigurationsIndex) {
      licenseAssetGroupConfigurationsJsonList[licenseAssetGroupConfigurationsIndex].AsObject(
          m_licenseAssetGroupConfigurations[licenseAssetGroupConfigurationsIndex].Jsonize());
    }
    payload.WithArray("LicenseAssetGroupConfigurations", std::move(licenseAssetGroupConfigurationsJsonList));
  }

  if (m_associatedLicenseAssetRulesetARNsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedLicenseAssetRulesetARNsJsonList(m_associatedLicenseAssetRulesetARNs.size());
    for (unsigned associatedLicenseAssetRulesetARNsIndex = 0;
         associatedLicenseAssetRulesetARNsIndex < associatedLicenseAssetRulesetARNsJsonList.GetLength();
         ++associatedLicenseAssetRulesetARNsIndex) {
      associatedLicenseAssetRulesetARNsJsonList[associatedLicenseAssetRulesetARNsIndex].AsString(
          m_associatedLicenseAssetRulesetARNs[associatedLicenseAssetRulesetARNsIndex]);
    }
    payload.WithArray("AssociatedLicenseAssetRulesetARNs", std::move(associatedLicenseAssetRulesetARNsJsonList));
  }

  if (m_propertiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
    for (unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex) {
      propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
    }
    payload.WithArray("Properties", std::move(propertiesJsonList));
  }

  if (m_licenseAssetGroupArnHasBeenSet) {
    payload.WithString("LicenseAssetGroupArn", m_licenseAssetGroupArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", LicenseAssetGroupStatusMapper::GetNameForLicenseAssetGroupStatus(m_status));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLicenseAssetGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.UpdateLicenseAssetGroup"));
  return headers;
}
