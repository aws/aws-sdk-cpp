/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/AcceleratorConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

AcceleratorConfig::AcceleratorConfig(JsonView jsonValue) { *this = jsonValue; }

AcceleratorConfig& AcceleratorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcceleratorMemorySize")) {
    m_acceleratorMemorySize = jsonValue.GetInteger("AcceleratorMemorySize");
    m_acceleratorMemorySizeHasBeenSet = true;
  }
  return *this;
}

JsonValue AcceleratorConfig::Jsonize() const {
  JsonValue payload;

  if (m_acceleratorMemorySizeHasBeenSet) {
    payload.WithInteger("AcceleratorMemorySize", m_acceleratorMemorySize);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
