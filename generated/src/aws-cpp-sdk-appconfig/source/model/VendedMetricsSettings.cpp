/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/VendedMetricsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

VendedMetricsSettings::VendedMetricsSettings(JsonView jsonValue) { *this = jsonValue; }

VendedMetricsSettings& VendedMetricsSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue VendedMetricsSettings::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
