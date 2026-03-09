/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/TemplateSectionInstruction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

TemplateSectionInstruction::TemplateSectionInstruction(JsonView jsonValue) { *this = jsonValue; }

TemplateSectionInstruction& TemplateSectionInstruction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sectionHeader")) {
    m_sectionHeader = jsonValue.GetString("sectionHeader");
    m_sectionHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sectionInstruction")) {
    m_sectionInstruction = jsonValue.GetString("sectionInstruction");
    m_sectionInstructionHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateSectionInstruction::Jsonize() const {
  JsonValue payload;

  if (m_sectionHeaderHasBeenSet) {
    payload.WithString("sectionHeader", m_sectionHeader);
  }

  if (m_sectionInstructionHasBeenSet) {
    payload.WithString("sectionInstruction", m_sectionInstruction);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
