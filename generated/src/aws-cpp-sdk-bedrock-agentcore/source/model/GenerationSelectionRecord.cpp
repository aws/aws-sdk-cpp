/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationSelectionRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationSelectionRecord::GenerationSelectionRecord(JsonView jsonValue) { *this = jsonValue; }

GenerationSelectionRecord& GenerationSelectionRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filters")) {
    m_filters = jsonValue.GetObject("filters");
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifiers")) {
    m_identifiers = jsonValue.GetObject("identifiers");
    m_identifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationSelectionRecord::Jsonize() const {
  JsonValue payload;

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  if (m_identifiersHasBeenSet) {
    payload.WithObject("identifiers", m_identifiers.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
