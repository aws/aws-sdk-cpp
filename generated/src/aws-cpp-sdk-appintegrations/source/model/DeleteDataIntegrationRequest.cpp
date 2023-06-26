/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/DeleteDataIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDataIntegrationRequest::DeleteDataIntegrationRequest() : 
    m_dataIntegrationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteDataIntegrationRequest::SerializePayload() const
{
  return {};
}




