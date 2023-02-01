/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/RegisterCrossAccountAccessRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterCrossAccountAccessRoleRequest::RegisterCrossAccountAccessRoleRequest() : 
    m_roleArnHasBeenSet(false)
{
}

Aws::String RegisterCrossAccountAccessRoleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterCrossAccountAccessRoleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.RegisterCrossAccountAccessRole"));
  return headers;

}




