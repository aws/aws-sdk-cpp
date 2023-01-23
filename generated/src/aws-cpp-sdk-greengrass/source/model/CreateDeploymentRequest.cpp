/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentRequest::CreateDeploymentRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupVersionIdHasBeenSet(false)
{
}

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType));
  }

  if(m_groupVersionIdHasBeenSet)
  {
   payload.WithString("GroupVersionId", m_groupVersionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




