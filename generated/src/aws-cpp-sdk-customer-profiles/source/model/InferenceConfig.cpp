/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/InferenceConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

InferenceConfig::InferenceConfig(JsonView jsonValue) { *this = jsonValue; }

InferenceConfig& InferenceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MinProvisionedTPS")) {
    m_minProvisionedTPS = jsonValue.GetInteger("MinProvisionedTPS");
    m_minProvisionedTPSHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceConfig::Jsonize() const {
  JsonValue payload;

  if (m_minProvisionedTPSHasBeenSet) {
    payload.WithInteger("MinProvisionedTPS", m_minProvisionedTPS);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
