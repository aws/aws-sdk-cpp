/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/CreateDeploymentConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDeploymentConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentConfigNameHasBeenSet)
  {
   payload.WithString("deploymentConfigName", m_deploymentConfigName);

  }

  if(m_minimumHealthyHostsHasBeenSet)
  {
   payload.WithObject("minimumHealthyHosts", m_minimumHealthyHosts.Jsonize());

  }

  if(m_trafficRoutingConfigHasBeenSet)
  {
   payload.WithObject("trafficRoutingConfig", m_trafficRoutingConfig.Jsonize());

  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
  }

  if(m_zonalConfigHasBeenSet)
  {
   payload.WithObject("zonalConfig", m_zonalConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeploymentConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.CreateDeploymentConfig"));
  return headers;

}




