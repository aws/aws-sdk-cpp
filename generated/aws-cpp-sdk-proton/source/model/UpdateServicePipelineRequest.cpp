/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateServicePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServicePipelineRequest::UpdateServicePipelineRequest() : 
    m_deploymentType(DeploymentUpdateType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false)
{
}

Aws::String UpdateServicePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", DeploymentUpdateTypeMapper::GetNameForDeploymentUpdateType(m_deploymentType));
  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServicePipelineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateServicePipeline"));
  return headers;

}




