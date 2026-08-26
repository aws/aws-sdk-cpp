/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/PatternFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

PatternFilter::PatternFilter(JsonView jsonValue) { *this = jsonValue; }

PatternFilter& PatternFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("patterns")) {
    Aws::Utils::Array<JsonView> patternsJsonList = jsonValue.GetArray("patterns");
    for (unsigned patternsIndex = 0; patternsIndex < patternsJsonList.GetLength(); ++patternsIndex) {
      m_patterns.push_back(patternsJsonList[patternsIndex].AsString());
    }
    m_patternsHasBeenSet = true;
  }
  return *this;
}

JsonValue PatternFilter::Jsonize() const {
  JsonValue payload;

  if (m_patternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> patternsJsonList(m_patterns.size());
    for (unsigned patternsIndex = 0; patternsIndex < patternsJsonList.GetLength(); ++patternsIndex) {
      patternsJsonList[patternsIndex].AsString(m_patterns[patternsIndex]);
    }
    payload.WithArray("patterns", std::move(patternsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
