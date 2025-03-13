/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/GetWorkloadDeploymentPatternRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWorkloadDeploymentPatternRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentPatternNameHasBeenSet)
  {
   payload.WithString("deploymentPatternName", m_deploymentPatternName);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  return payload.View().WriteReadable();
}




