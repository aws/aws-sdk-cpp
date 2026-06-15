/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksContentFilterResult::GuardrailChecksContentFilterResult(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksContentFilterResult& GuardrailChecksContentFilterResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("results")) {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("results");
    for (unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex) {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
    m_resultsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksContentFilterResult::Jsonize() const {
  JsonValue payload;

  if (m_resultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resultsJsonList(m_results.size());
    for (unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex) {
      resultsJsonList[resultsIndex].AsObject(m_results[resultsIndex].Jsonize());
    }
    payload.WithArray("results", std::move(resultsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
