/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GetDeploymentConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeploymentConfigRequest::GetDeploymentConfigRequest() : 
    m_deploymentConfigNameHasBeenSet(false)
{
}

Aws::String GetDeploymentConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentConfigNameHasBeenSet)
  {
   payload.WithString("deploymentConfigName", m_deploymentConfigName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDeploymentConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.GetDeploymentConfig"));
  return headers;

}




