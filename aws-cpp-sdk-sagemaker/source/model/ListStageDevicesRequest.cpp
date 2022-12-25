/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListStageDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListStageDevicesRequest::ListStageDevicesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_excludeDevicesDeployedInOtherStage(false),
    m_excludeDevicesDeployedInOtherStageHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String ListStageDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_edgeDeploymentPlanNameHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanName", m_edgeDeploymentPlanName);

  }

  if(m_excludeDevicesDeployedInOtherStageHasBeenSet)
  {
   payload.WithBool("ExcludeDevicesDeployedInOtherStage", m_excludeDevicesDeployedInOtherStage);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListStageDevicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListStageDevices"));
  return headers;

}




