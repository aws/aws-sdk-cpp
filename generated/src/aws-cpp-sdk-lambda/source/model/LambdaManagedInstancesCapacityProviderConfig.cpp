/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/LambdaManagedInstancesCapacityProviderConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

LambdaManagedInstancesCapacityProviderConfig::LambdaManagedInstancesCapacityProviderConfig(JsonView jsonValue) { *this = jsonValue; }

LambdaManagedInstancesCapacityProviderConfig& LambdaManagedInstancesCapacityProviderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CapacityProviderArn")) {
    m_capacityProviderArn = jsonValue.GetString("CapacityProviderArn");
    m_capacityProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerExecutionEnvironmentMaxConcurrency")) {
    m_perExecutionEnvironmentMaxConcurrency = jsonValue.GetInteger("PerExecutionEnvironmentMaxConcurrency");
    m_perExecutionEnvironmentMaxConcurrencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionEnvironmentMemoryGiBPerVCpu")) {
    m_executionEnvironmentMemoryGiBPerVCpu = jsonValue.GetDouble("ExecutionEnvironmentMemoryGiBPerVCpu");
    m_executionEnvironmentMemoryGiBPerVCpuHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaManagedInstancesCapacityProviderConfig::Jsonize() const {
  JsonValue payload;

  if (m_capacityProviderArnHasBeenSet) {
    payload.WithString("CapacityProviderArn", m_capacityProviderArn);
  }

  if (m_perExecutionEnvironmentMaxConcurrencyHasBeenSet) {
    payload.WithInteger("PerExecutionEnvironmentMaxConcurrency", m_perExecutionEnvironmentMaxConcurrency);
  }

  if (m_executionEnvironmentMemoryGiBPerVCpuHasBeenSet) {
    payload.WithDouble("ExecutionEnvironmentMemoryGiBPerVCpu", m_executionEnvironmentMemoryGiBPerVCpu);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
