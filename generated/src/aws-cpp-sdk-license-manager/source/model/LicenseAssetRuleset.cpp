/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/LicenseAssetRuleset.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

LicenseAssetRuleset::LicenseAssetRuleset(JsonView jsonValue) { *this = jsonValue; }

LicenseAssetRuleset& LicenseAssetRuleset::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rules")) {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicenseAssetRulesetArn")) {
    m_licenseAssetRulesetArn = jsonValue.GetString("LicenseAssetRulesetArn");
    m_licenseAssetRulesetArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseAssetRuleset::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_rulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
    for (unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex) {
      rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
    }
    payload.WithArray("Rules", std::move(rulesJsonList));
  }

  if (m_licenseAssetRulesetArnHasBeenSet) {
    payload.WithString("LicenseAssetRulesetArn", m_licenseAssetRulesetArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
