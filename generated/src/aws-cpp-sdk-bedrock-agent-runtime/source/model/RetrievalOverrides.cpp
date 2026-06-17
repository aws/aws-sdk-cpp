/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

RetrievalOverrides::RetrievalOverrides(JsonView jsonValue) { *this = jsonValue; }

RetrievalOverrides& RetrievalOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filter")) {
    m_filter = jsonValue.GetObject("filter");
    m_filterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxNumberOfResults")) {
    m_maxNumberOfResults = jsonValue.GetInteger("maxNumberOfResults");
    m_maxNumberOfResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalOverrides::Jsonize() const {
  JsonValue payload;

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_maxNumberOfResultsHasBeenSet) {
    payload.WithInteger("maxNumberOfResults", m_maxNumberOfResults);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
