/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationIdentifierHasBeenSet)
  {
   payload.WithString("IntegrationIdentifier", m_integrationIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteIntegrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DeleteIntegration"));
  return headers;

}




