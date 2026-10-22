/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalConfidenceReasoning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

SignalConfidenceReasoning::SignalConfidenceReasoning(JsonView jsonValue) { *this = jsonValue; }

SignalConfidenceReasoning& SignalConfidenceReasoning::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("factors")) {
    Aws::Utils::Array<JsonView> factorsJsonList = jsonValue.GetArray("factors");
    for (unsigned factorsIndex = 0; factorsIndex < factorsJsonList.GetLength(); ++factorsIndex) {
      m_factors.push_back(factorsJsonList[factorsIndex].AsString());
    }
    m_factorsHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalConfidenceReasoning::Jsonize() const {
  JsonValue payload;

  if (m_summaryHasBeenSet) {
    payload.WithString("summary", m_summary);
  }

  if (m_factorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> factorsJsonList(m_factors.size());
    for (unsigned factorsIndex = 0; factorsIndex < factorsJsonList.GetLength(); ++factorsIndex) {
      factorsJsonList[factorsIndex].AsString(m_factors[factorsIndex]);
    }
    payload.WithArray("factors", std::move(factorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
