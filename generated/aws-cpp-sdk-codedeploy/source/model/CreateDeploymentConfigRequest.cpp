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

CreateDeploymentConfigRequest::CreateDeploymentConfigRequest() : 
    m_deploymentConfigNameHasBeenSet(false),
    m_minimumHealthyHostsHasBeenSet(false),
    m_trafficRoutingConfigHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeploymentConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.CreateDeploymentConfig"));
  return headers;

}




