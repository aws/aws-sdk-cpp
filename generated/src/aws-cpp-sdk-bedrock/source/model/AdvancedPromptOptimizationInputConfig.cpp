/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AdvancedPromptOptimizationInputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AdvancedPromptOptimizationInputConfig::AdvancedPromptOptimizationInputConfig(JsonView jsonValue) { *this = jsonValue; }

AdvancedPromptOptimizationInputConfig& AdvancedPromptOptimizationInputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Uri")) {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue AdvancedPromptOptimizationInputConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3UriHasBeenSet) {
    payload.WithString("s3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
