/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GetStageDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetStageDeploymentRequest::GetStageDeploymentRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_gameNameHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String GetStageDeploymentRequest::SerializePayload() const
{
  return {};
}

void GetStageDeploymentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deploymentIdHasBeenSet)
    {
      ss << m_deploymentId;
      uri.AddQueryStringParameter("DeploymentId", ss.str());
      ss.str("");
    }

}



