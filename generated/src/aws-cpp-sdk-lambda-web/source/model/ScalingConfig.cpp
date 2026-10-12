/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/ScalingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

ScalingConfig::ScalingConfig(JsonView jsonValue) { *this = jsonValue; }

ScalingConfig& ScalingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxEnvironments")) {
    m_maxEnvironments = jsonValue.GetInteger("maxEnvironments");
    m_maxEnvironmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScalingConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxEnvironmentsHasBeenSet) {
    payload.WithInteger("maxEnvironments", m_maxEnvironments);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
