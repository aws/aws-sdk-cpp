/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ManagedInstancesProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

ManagedInstancesProvider::ManagedInstancesProvider(JsonView jsonValue) { *this = jsonValue; }

ManagedInstancesProvider& ManagedInstancesProvider::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("propagateTags")) {
    m_propagateTags = jsonValue.GetString("propagateTags");
    m_propagateTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("infrastructureRoleArn")) {
    m_infrastructureRoleArn = jsonValue.GetString("infrastructureRoleArn");
    m_infrastructureRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceLaunchTemplate")) {
    m_instanceLaunchTemplate = jsonValue.GetObject("instanceLaunchTemplate");
    m_instanceLaunchTemplateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("infrastructureOptimization")) {
    m_infrastructureOptimization = jsonValue.GetObject("infrastructureOptimization");
    m_infrastructureOptimizationHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedInstancesProvider::Jsonize() const {
  JsonValue payload;

  if (m_propagateTagsHasBeenSet) {
    payload.WithString("propagateTags", m_propagateTags);
  }

  if (m_infrastructureRoleArnHasBeenSet) {
    payload.WithString("infrastructureRoleArn", m_infrastructureRoleArn);
  }

  if (m_instanceLaunchTemplateHasBeenSet) {
    payload.WithObject("instanceLaunchTemplate", m_instanceLaunchTemplate.Jsonize());
  }

  if (m_infrastructureOptimizationHasBeenSet) {
    payload.WithObject("infrastructureOptimization", m_infrastructureOptimization.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
