/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/OutputFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

OutputFormat::OutputFormat(JsonView jsonValue) { *this = jsonValue; }

OutputFormat& OutputFormat::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = OutputFormatTypeMapper::GetOutputFormatTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("structure")) {
    m_structure = jsonValue.GetObject("structure");
    m_structureHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputFormat::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", OutputFormatTypeMapper::GetNameForOutputFormatType(m_type));
  }

  if (m_structureHasBeenSet) {
    payload.WithObject("structure", m_structure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
