/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GetDeploymentTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeploymentTargetRequest::GetDeploymentTargetRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_targetIdHasBeenSet(false)
{
}

Aws::String GetDeploymentTargetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("targetId", m_targetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDeploymentTargetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.GetDeploymentTarget"));
  return headers;

}




