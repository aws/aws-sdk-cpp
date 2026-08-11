/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/DurationParameterConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

DurationParameterConfig::DurationParameterConfig(JsonView jsonValue) { *this = jsonValue; }

DurationParameterConfig& DurationParameterConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("defaultValue")) {
    m_defaultValue = jsonValue.GetString("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constraints")) {
    m_constraints = jsonValue.GetObject("constraints");
    m_constraintsHasBeenSet = true;
  }
  return *this;
}

JsonValue DurationParameterConfig::Jsonize() const {
  JsonValue payload;

  if (m_defaultValueHasBeenSet) {
    payload.WithString("defaultValue", m_defaultValue);
  }

  if (m_constraintsHasBeenSet) {
    payload.WithObject("constraints", m_constraints.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
