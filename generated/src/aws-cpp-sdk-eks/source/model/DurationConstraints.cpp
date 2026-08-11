/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/DurationConstraints.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

DurationConstraints::DurationConstraints(JsonView jsonValue) { *this = jsonValue; }

DurationConstraints& DurationConstraints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("min")) {
    m_min = jsonValue.GetString("min");
    m_minHasBeenSet = true;
  }
  if (jsonValue.ValueExists("max")) {
    m_max = jsonValue.GetString("max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue DurationConstraints::Jsonize() const {
  JsonValue payload;

  if (m_minHasBeenSet) {
    payload.WithString("min", m_min);
  }

  if (m_maxHasBeenSet) {
    payload.WithString("max", m_max);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
