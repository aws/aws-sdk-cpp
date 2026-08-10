/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ClippingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ClippingConfig::ClippingConfig(JsonView jsonValue) { *this = jsonValue; }

ClippingConfig& ClippingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("callbackMetadata")) {
    m_callbackMetadata = jsonValue.GetString("callbackMetadata");
    m_callbackMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSourceConfiguration")) {
    m_dataSourceConfiguration = jsonValue.GetObject("dataSourceConfiguration");
    m_dataSourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ClippingConfig::Jsonize() const {
  JsonValue payload;

  if (m_callbackMetadataHasBeenSet) {
    payload.WithString("callbackMetadata", m_callbackMetadata);
  }

  if (m_dataSourceConfigurationHasBeenSet) {
    payload.WithObject("dataSourceConfiguration", m_dataSourceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
