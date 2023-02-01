/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/UpdateServiceIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceIntegrationRequest::UpdateServiceIntegrationRequest() : 
    m_serviceIntegrationHasBeenSet(false)
{
}

Aws::String UpdateServiceIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceIntegrationHasBeenSet)
  {
   payload.WithObject("ServiceIntegration", m_serviceIntegration.Jsonize());

  }

  return payload.View().WriteReadable();
}




