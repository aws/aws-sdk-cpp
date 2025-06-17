/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DeleteCodeSecurityIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteCodeSecurityIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("integrationArn", m_integrationArn);

  }

  return payload.View().WriteReadable();
}




