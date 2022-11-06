/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUsageRequest::UpdateUsageRequest() : 
    m_usagePlanIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_patchOperationsHasBeenSet(false)
{
}

Aws::String UpdateUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_patchOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> patchOperationsJsonList(m_patchOperations.size());
   for(unsigned patchOperationsIndex = 0; patchOperationsIndex < patchOperationsJsonList.GetLength(); ++patchOperationsIndex)
   {
     patchOperationsJsonList[patchOperationsIndex].AsObject(m_patchOperations[patchOperationsIndex].Jsonize());
   }
   payload.WithArray("patchOperations", std::move(patchOperationsJsonList));

  }

  return payload.View().WriteReadable();
}




