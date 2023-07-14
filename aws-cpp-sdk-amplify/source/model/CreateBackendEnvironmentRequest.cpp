/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CreateBackendEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackendEnvironmentRequest::CreateBackendEnvironmentRequest() : 
    m_appIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_deploymentArtifactsHasBeenSet(false)
{
}

Aws::String CreateBackendEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("stackName", m_stackName);

  }

  if(m_deploymentArtifactsHasBeenSet)
  {
   payload.WithString("deploymentArtifacts", m_deploymentArtifacts);

  }

  return payload.View().WriteReadable();
}




