/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/FunctionScalingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

FunctionScalingConfig::FunctionScalingConfig(JsonView jsonValue) { *this = jsonValue; }

FunctionScalingConfig& FunctionScalingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MinExecutionEnvironments")) {
    m_minExecutionEnvironments = jsonValue.GetInteger("MinExecutionEnvironments");
    m_minExecutionEnvironmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxExecutionEnvironments")) {
    m_maxExecutionEnvironments = jsonValue.GetInteger("MaxExecutionEnvironments");
    m_maxExecutionEnvironmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionScalingConfig::Jsonize() const {
  JsonValue payload;

  if (m_minExecutionEnvironmentsHasBeenSet) {
    payload.WithInteger("MinExecutionEnvironments", m_minExecutionEnvironments);
  }

  if (m_maxExecutionEnvironmentsHasBeenSet) {
    payload.WithInteger("MaxExecutionEnvironments", m_maxExecutionEnvironments);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
