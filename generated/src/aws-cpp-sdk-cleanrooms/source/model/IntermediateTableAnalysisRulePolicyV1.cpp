/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableAnalysisRulePolicyV1.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableAnalysisRulePolicyV1::IntermediateTableAnalysisRulePolicyV1(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableAnalysisRulePolicyV1& IntermediateTableAnalysisRulePolicyV1::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("custom")) {
    m_custom = jsonValue.GetObject("custom");
    m_customHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableAnalysisRulePolicyV1::Jsonize() const {
  JsonValue payload;

  if (m_customHasBeenSet) {
    payload.WithObject("custom", m_custom.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
