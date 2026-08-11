/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/AllowedValuesConstraint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

AllowedValuesConstraint::AllowedValuesConstraint(JsonView jsonValue) { *this = jsonValue; }

AllowedValuesConstraint& AllowedValuesConstraint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedValues")) {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue AllowedValuesConstraint::Jsonize() const {
  JsonValue payload;

  if (m_allowedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
    }
    payload.WithArray("allowedValues", std::move(allowedValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
