/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/LicenseAssetGroupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

LicenseAssetGroupConfiguration::LicenseAssetGroupConfiguration(JsonView jsonValue) { *this = jsonValue; }

LicenseAssetGroupConfiguration& LicenseAssetGroupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("UsageDimension")) {
    m_usageDimension = jsonValue.GetString("UsageDimension");
    m_usageDimensionHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseAssetGroupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_usageDimensionHasBeenSet) {
    payload.WithString("UsageDimension", m_usageDimension);
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
