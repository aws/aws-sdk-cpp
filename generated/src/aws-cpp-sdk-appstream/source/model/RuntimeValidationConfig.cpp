/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/RuntimeValidationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

RuntimeValidationConfig::RuntimeValidationConfig(JsonView jsonValue) { *this = jsonValue; }

RuntimeValidationConfig& RuntimeValidationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IntendedInstanceType")) {
    m_intendedInstanceType = jsonValue.GetString("IntendedInstanceType");
    m_intendedInstanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeValidationConfig::Jsonize() const {
  JsonValue payload;

  if (m_intendedInstanceTypeHasBeenSet) {
    payload.WithString("IntendedInstanceType", m_intendedInstanceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
