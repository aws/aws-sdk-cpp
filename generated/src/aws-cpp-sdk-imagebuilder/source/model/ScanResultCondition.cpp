/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/ScanResultCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

ScanResultCondition::ScanResultCondition(JsonView jsonValue) { *this = jsonValue; }

ScanResultCondition& ScanResultCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maximumSeverityLabel")) {
    m_maximumSeverityLabel = MaximumSeverityLabelMapper::GetMaximumSeverityLabelForName(jsonValue.GetString("maximumSeverityLabel"));
    m_maximumSeverityLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixAvailable")) {
    m_fixAvailable = jsonValue.GetBool("fixAvailable");
    m_fixAvailableHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanResultCondition::Jsonize() const {
  JsonValue payload;

  if (m_maximumSeverityLabelHasBeenSet) {
    payload.WithString("maximumSeverityLabel", MaximumSeverityLabelMapper::GetNameForMaximumSeverityLabel(m_maximumSeverityLabel));
  }

  if (m_fixAvailableHasBeenSet) {
    payload.WithBool("fixAvailable", m_fixAvailable);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
