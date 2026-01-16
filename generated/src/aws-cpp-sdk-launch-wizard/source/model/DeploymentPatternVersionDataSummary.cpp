/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/DeploymentPatternVersionDataSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {

DeploymentPatternVersionDataSummary::DeploymentPatternVersionDataSummary(JsonView jsonValue) { *this = jsonValue; }

DeploymentPatternVersionDataSummary& DeploymentPatternVersionDataSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deploymentPatternVersionName")) {
    m_deploymentPatternVersionName = jsonValue.GetString("deploymentPatternVersionName");
    m_deploymentPatternVersionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentationUrl")) {
    m_documentationUrl = jsonValue.GetString("documentationUrl");
    m_documentationUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloadName")) {
    m_workloadName = jsonValue.GetString("workloadName");
    m_workloadNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentPatternName")) {
    m_deploymentPatternName = jsonValue.GetString("deploymentPatternName");
    m_deploymentPatternNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentPatternVersionDataSummary::Jsonize() const {
  JsonValue payload;

  if (m_deploymentPatternVersionNameHasBeenSet) {
    payload.WithString("deploymentPatternVersionName", m_deploymentPatternVersionName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_documentationUrlHasBeenSet) {
    payload.WithString("documentationUrl", m_documentationUrl);
  }

  if (m_workloadNameHasBeenSet) {
    payload.WithString("workloadName", m_workloadName);
  }

  if (m_deploymentPatternNameHasBeenSet) {
    payload.WithString("deploymentPatternName", m_deploymentPatternName);
  }

  return payload;
}

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
