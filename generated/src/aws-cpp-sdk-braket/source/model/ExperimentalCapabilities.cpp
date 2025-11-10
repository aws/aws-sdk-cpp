/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ExperimentalCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {

ExperimentalCapabilities::ExperimentalCapabilities(JsonView jsonValue) { *this = jsonValue; }

ExperimentalCapabilities& ExperimentalCapabilities::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled =
        ExperimentalCapabilitiesEnablementTypeMapper::GetExperimentalCapabilitiesEnablementTypeForName(jsonValue.GetString("enabled"));
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentalCapabilities::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithString("enabled",
                       ExperimentalCapabilitiesEnablementTypeMapper::GetNameForExperimentalCapabilitiesEnablementType(m_enabled));
  }

  return payload;
}

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
