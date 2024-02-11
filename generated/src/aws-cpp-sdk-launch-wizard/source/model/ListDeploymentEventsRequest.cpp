/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/ListDeploymentEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDeploymentEventsRequest::ListDeploymentEventsRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDeploymentEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




