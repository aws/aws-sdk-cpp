/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/GetDeploymentPatternVersionRequest.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDeploymentPatternVersionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workloadNameHasBeenSet) {
    payload.WithString("workloadName", m_workloadName);
  }

  if (m_deploymentPatternNameHasBeenSet) {
    payload.WithString("deploymentPatternName", m_deploymentPatternName);
  }

  if (m_deploymentPatternVersionNameHasBeenSet) {
    payload.WithString("deploymentPatternVersionName", m_deploymentPatternVersionName);
  }

  return payload.View().WriteReadable();
}
