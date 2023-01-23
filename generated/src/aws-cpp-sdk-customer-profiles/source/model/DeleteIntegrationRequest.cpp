/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DeleteIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIntegrationRequest::DeleteIntegrationRequest() : 
    m_domainNameHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

Aws::String DeleteIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  return payload.View().WriteReadable();
}




