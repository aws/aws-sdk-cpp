/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/PortRangeParameterConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

PortRangeParameterConfig::PortRangeParameterConfig(JsonView jsonValue) { *this = jsonValue; }

PortRangeParameterConfig& PortRangeParameterConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("defaultValue")) {
    m_defaultValue = jsonValue.GetObject("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constraints")) {
    m_constraints = jsonValue.GetObject("constraints");
    m_constraintsHasBeenSet = true;
  }
  return *this;
}

JsonValue PortRangeParameterConfig::Jsonize() const {
  JsonValue payload;

  if (m_defaultValueHasBeenSet) {
    payload.WithObject("defaultValue", m_defaultValue.Jsonize());
  }

  if (m_constraintsHasBeenSet) {
    payload.WithObject("constraints", m_constraints.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
