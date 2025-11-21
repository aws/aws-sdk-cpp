/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/LicenseAssetGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

LicenseAssetGroup::LicenseAssetGroup(JsonView jsonValue) { *this = jsonValue; }

LicenseAssetGroup& LicenseAssetGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicenseAssetGroupConfigurations")) {
    Aws::Utils::Array<JsonView> licenseAssetGroupConfigurationsJsonList = jsonValue.GetArray("LicenseAssetGroupConfigurations");
    for (unsigned licenseAssetGroupConfigurationsIndex = 0;
         licenseAssetGroupConfigurationsIndex < licenseAssetGroupConfigurationsJsonList.GetLength();
         ++licenseAssetGroupConfigurationsIndex) {
      m_licenseAssetGroupConfigurations.push_back(licenseAssetGroupConfigurationsJsonList[licenseAssetGroupConfigurationsIndex].AsObject());
    }
    m_licenseAssetGroupConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedLicenseAssetRulesetARNs")) {
    Aws::Utils::Array<JsonView> associatedLicenseAssetRulesetARNsJsonList = jsonValue.GetArray("AssociatedLicenseAssetRulesetARNs");
    for (unsigned associatedLicenseAssetRulesetARNsIndex = 0;
         associatedLicenseAssetRulesetARNsIndex < associatedLicenseAssetRulesetARNsJsonList.GetLength();
         ++associatedLicenseAssetRulesetARNsIndex) {
      m_associatedLicenseAssetRulesetARNs.push_back(
          associatedLicenseAssetRulesetARNsJsonList[associatedLicenseAssetRulesetARNsIndex].AsString());
    }
    m_associatedLicenseAssetRulesetARNsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Properties")) {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for (unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex) {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicenseAssetGroupArn")) {
    m_licenseAssetGroupArn = jsonValue.GetString("LicenseAssetGroupArn");
    m_licenseAssetGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = LicenseAssetGroupStatusMapper::GetLicenseAssetGroupStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestUsageAnalysisTime")) {
    m_latestUsageAnalysisTime = jsonValue.GetDouble("LatestUsageAnalysisTime");
    m_latestUsageAnalysisTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestResourceDiscoveryTime")) {
    m_latestResourceDiscoveryTime = jsonValue.GetDouble("LatestResourceDiscoveryTime");
    m_latestResourceDiscoveryTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseAssetGroup::Jsonize() const {
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

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  if (m_latestUsageAnalysisTimeHasBeenSet) {
    payload.WithDouble("LatestUsageAnalysisTime", m_latestUsageAnalysisTime.SecondsWithMSPrecision());
  }

  if (m_latestResourceDiscoveryTimeHasBeenSet) {
    payload.WithDouble("LatestResourceDiscoveryTime", m_latestResourceDiscoveryTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
