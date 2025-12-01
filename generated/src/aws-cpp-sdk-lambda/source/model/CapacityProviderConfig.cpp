/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CapacityProviderConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CapacityProviderConfig::CapacityProviderConfig(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderConfig& CapacityProviderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LambdaManagedInstancesCapacityProviderConfig")) {
    m_lambdaManagedInstancesCapacityProviderConfig = jsonValue.GetObject("LambdaManagedInstancesCapacityProviderConfig");
    m_lambdaManagedInstancesCapacityProviderConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderConfig::Jsonize() const {
  JsonValue payload;

  if (m_lambdaManagedInstancesCapacityProviderConfigHasBeenSet) {
    payload.WithObject("LambdaManagedInstancesCapacityProviderConfig", m_lambdaManagedInstancesCapacityProviderConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
