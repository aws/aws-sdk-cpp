/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateCodeSecurityIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCodeSecurityIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("integrationArn", m_integrationArn);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("details", m_details.Jsonize());

  }

  return payload.View().WriteReadable();
}




