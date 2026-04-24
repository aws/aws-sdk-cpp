/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/UpdateDeploymentRequest.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDeploymentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_deploymentIdHasBeenSet) {
    payload.WithString("deploymentId", m_deploymentId);
  }

  if (m_specificationsHasBeenSet) {
    JsonValue specificationsJsonMap;
    for (auto& specificationsItem : m_specifications) {
      specificationsJsonMap.WithString(specificationsItem.first, specificationsItem.second);
    }
    payload.WithObject("specifications", std::move(specificationsJsonMap));
  }

  if (m_workloadVersionNameHasBeenSet) {
    payload.WithString("workloadVersionName", m_workloadVersionName);
  }

  if (m_deploymentPatternVersionNameHasBeenSet) {
    payload.WithString("deploymentPatternVersionName", m_deploymentPatternVersionName);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  if (m_forceHasBeenSet) {
    payload.WithBool("force", m_force);
  }

  return payload.View().WriteReadable();
}
