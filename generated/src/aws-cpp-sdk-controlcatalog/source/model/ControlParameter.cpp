/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ControlCatalog {
namespace Model {

ControlParameter::ControlParameter(JsonView jsonValue) { *this = jsonValue; }

ControlParameter& ControlParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Requirement")) {
    m_requirement = ControlParameterRequirementMapper::GetControlParameterRequirementForName(jsonValue.GetString("Requirement"));
    m_requirementHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlParameter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_requirementHasBeenSet) {
    payload.WithString("Requirement", ControlParameterRequirementMapper::GetNameForControlParameterRequirement(m_requirement));
  }

  return payload;
}

}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
