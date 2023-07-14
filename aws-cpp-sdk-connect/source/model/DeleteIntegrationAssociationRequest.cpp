/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteIntegrationAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIntegrationAssociationRequest::DeleteIntegrationAssociationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_integrationAssociationIdHasBeenSet(false)
{
}

Aws::String DeleteIntegrationAssociationRequest::SerializePayload() const
{
  return {};
}




