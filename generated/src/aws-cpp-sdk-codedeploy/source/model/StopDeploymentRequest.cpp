/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/StopDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDeploymentRequest::StopDeploymentRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_autoRollbackEnabled(false),
    m_autoRollbackEnabledHasBeenSet(false)
{
}

Aws::String StopDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_autoRollbackEnabledHasBeenSet)
  {
   payload.WithBool("autoRollbackEnabled", m_autoRollbackEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.StopDeployment"));
  return headers;

}




