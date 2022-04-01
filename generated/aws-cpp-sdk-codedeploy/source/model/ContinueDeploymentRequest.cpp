/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ContinueDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ContinueDeploymentRequest::ContinueDeploymentRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_deploymentWaitType(DeploymentWaitType::NOT_SET),
    m_deploymentWaitTypeHasBeenSet(false)
{
}

Aws::String ContinueDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_deploymentWaitTypeHasBeenSet)
  {
   payload.WithString("deploymentWaitType", DeploymentWaitTypeMapper::GetNameForDeploymentWaitType(m_deploymentWaitType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ContinueDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.ContinueDeployment"));
  return headers;

}




