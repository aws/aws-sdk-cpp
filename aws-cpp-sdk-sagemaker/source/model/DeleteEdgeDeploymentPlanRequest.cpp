/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteEdgeDeploymentPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEdgeDeploymentPlanRequest::DeleteEdgeDeploymentPlanRequest() : 
    m_edgeDeploymentPlanNameHasBeenSet(false)
{
}

Aws::String DeleteEdgeDeploymentPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_edgeDeploymentPlanNameHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanName", m_edgeDeploymentPlanName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEdgeDeploymentPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteEdgeDeploymentPlan"));
  return headers;

}




