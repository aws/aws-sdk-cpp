﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




