/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/StopExperimentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopExperimentRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resultHasBeenSet) {
    payload.WithObject("Result", m_result.Jsonize());
  }

  if (m_deploymentParametersHasBeenSet) {
    payload.WithObject("DeploymentParameters", m_deploymentParameters.Jsonize());
  }

  return payload.View().WriteReadable();
}
