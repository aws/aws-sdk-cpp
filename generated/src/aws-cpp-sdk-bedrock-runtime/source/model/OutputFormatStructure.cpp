/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/OutputFormatStructure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

OutputFormatStructure::OutputFormatStructure(JsonView jsonValue) { *this = jsonValue; }

OutputFormatStructure& OutputFormatStructure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jsonSchema")) {
    m_jsonSchema = jsonValue.GetObject("jsonSchema");
    m_jsonSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputFormatStructure::Jsonize() const {
  JsonValue payload;

  if (m_jsonSchemaHasBeenSet) {
    payload.WithObject("jsonSchema", m_jsonSchema.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
