/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/UpdateDataIntegrationAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDataIntegrationAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionConfigurationHasBeenSet)
  {
   payload.WithObject("ExecutionConfiguration", m_executionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




