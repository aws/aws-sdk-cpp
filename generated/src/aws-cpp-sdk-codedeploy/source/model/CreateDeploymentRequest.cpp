/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_deploymentGroupNameHasBeenSet)
  {
   payload.WithString("deploymentGroupName", m_deploymentGroupName);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithObject("revision", m_revision.Jsonize());

  }

  if(m_deploymentConfigNameHasBeenSet)
  {
   payload.WithString("deploymentConfigName", m_deploymentConfigName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_ignoreApplicationStopFailuresHasBeenSet)
  {
   payload.WithBool("ignoreApplicationStopFailures", m_ignoreApplicationStopFailures);

  }

  if(m_targetInstancesHasBeenSet)
  {
   payload.WithObject("targetInstances", m_targetInstances.Jsonize());

  }

  if(m_autoRollbackConfigurationHasBeenSet)
  {
   payload.WithObject("autoRollbackConfiguration", m_autoRollbackConfiguration.Jsonize());

  }

  if(m_updateOutdatedInstancesOnlyHasBeenSet)
  {
   payload.WithBool("updateOutdatedInstancesOnly", m_updateOutdatedInstancesOnly);

  }

  if(m_fileExistsBehaviorHasBeenSet)
  {
   payload.WithString("fileExistsBehavior", FileExistsBehaviorMapper::GetNameForFileExistsBehavior(m_fileExistsBehavior));
  }

  if(m_overrideAlarmConfigurationHasBeenSet)
  {
   payload.WithObject("overrideAlarmConfiguration", m_overrideAlarmConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.CreateDeployment"));
  return headers;

}




