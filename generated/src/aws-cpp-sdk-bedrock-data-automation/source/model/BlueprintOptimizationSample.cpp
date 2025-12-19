/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/BlueprintOptimizationSample.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

BlueprintOptimizationSample::BlueprintOptimizationSample(JsonView jsonValue) { *this = jsonValue; }

BlueprintOptimizationSample& BlueprintOptimizationSample::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assetS3Object")) {
    m_assetS3Object = jsonValue.GetObject("assetS3Object");
    m_assetS3ObjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groundTruthS3Object")) {
    m_groundTruthS3Object = jsonValue.GetObject("groundTruthS3Object");
    m_groundTruthS3ObjectHasBeenSet = true;
  }
  return *this;
}

JsonValue BlueprintOptimizationSample::Jsonize() const {
  JsonValue payload;

  if (m_assetS3ObjectHasBeenSet) {
    payload.WithObject("assetS3Object", m_assetS3Object.Jsonize());
  }

  if (m_groundTruthS3ObjectHasBeenSet) {
    payload.WithObject("groundTruthS3Object", m_groundTruthS3Object.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
