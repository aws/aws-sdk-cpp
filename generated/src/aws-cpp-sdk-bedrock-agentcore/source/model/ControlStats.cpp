/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ControlStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ControlStats::ControlStats(JsonView jsonValue) { *this = jsonValue; }

ControlStats& ControlStats::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("variantName")) {
    m_variantName = jsonValue.GetString("variantName");
    m_variantNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSize")) {
    m_sampleSize = jsonValue.GetInteger("sampleSize");
    m_sampleSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mean")) {
    m_mean = jsonValue.GetDouble("mean");
    m_meanHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlStats::Jsonize() const {
  JsonValue payload;

  if (m_variantNameHasBeenSet) {
    payload.WithString("variantName", m_variantName);
  }

  if (m_sampleSizeHasBeenSet) {
    payload.WithInteger("sampleSize", m_sampleSize);
  }

  if (m_meanHasBeenSet) {
    payload.WithDouble("mean", m_mean);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
