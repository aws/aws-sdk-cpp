/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/DeploymentStrategyOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {

DeploymentStrategyOptions::DeploymentStrategyOptions(JsonView jsonValue) { *this = jsonValue; }

DeploymentStrategyOptions& DeploymentStrategyOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DeploymentStrategy")) {
    m_deploymentStrategy = DeploymentStrategyMapper::GetDeploymentStrategyForName(jsonValue.GetString("DeploymentStrategy"));
    m_deploymentStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentStrategyOptions::Jsonize() const {
  JsonValue payload;

  if (m_deploymentStrategyHasBeenSet) {
    payload.WithString("DeploymentStrategy", DeploymentStrategyMapper::GetNameForDeploymentStrategy(m_deploymentStrategy));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
