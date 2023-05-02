/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CancelFlowExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelFlowExecutionsRequest::CancelFlowExecutionsRequest() : 
    m_flowNameHasBeenSet(false),
    m_executionIdsHasBeenSet(false)
{
}

Aws::String CancelFlowExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("flowName", m_flowName);

  }

  if(m_executionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> executionIdsJsonList(m_executionIds.size());
   for(unsigned executionIdsIndex = 0; executionIdsIndex < executionIdsJsonList.GetLength(); ++executionIdsIndex)
   {
     executionIdsJsonList[executionIdsIndex].AsString(m_executionIds[executionIdsIndex]);
   }
   payload.WithArray("executionIds", std::move(executionIdsJsonList));

  }

  return payload.View().WriteReadable();
}




