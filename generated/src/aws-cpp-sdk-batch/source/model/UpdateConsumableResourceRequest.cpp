/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateConsumableResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConsumableResourceRequest::UpdateConsumableResourceRequest() : 
    m_consumableResourceHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateConsumableResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consumableResourceHasBeenSet)
  {
   payload.WithString("consumableResource", m_consumableResource);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInt64("quantity", m_quantity);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




