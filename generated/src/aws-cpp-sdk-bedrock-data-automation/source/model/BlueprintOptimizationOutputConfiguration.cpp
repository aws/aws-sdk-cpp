/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/BlueprintOptimizationOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

BlueprintOptimizationOutputConfiguration::BlueprintOptimizationOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

BlueprintOptimizationOutputConfiguration& BlueprintOptimizationOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Object")) {
    m_s3Object = jsonValue.GetObject("s3Object");
    m_s3ObjectHasBeenSet = true;
  }
  return *this;
}

JsonValue BlueprintOptimizationOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3ObjectHasBeenSet) {
    payload.WithObject("s3Object", m_s3Object.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
