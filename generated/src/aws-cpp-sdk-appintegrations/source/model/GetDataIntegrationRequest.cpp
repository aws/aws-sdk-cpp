/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/GetDataIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataIntegrationRequest::GetDataIntegrationRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String GetDataIntegrationRequest::SerializePayload() const
{
  return {};
}




