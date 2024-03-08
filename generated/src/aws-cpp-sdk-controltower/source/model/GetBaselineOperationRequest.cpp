/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/GetBaselineOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBaselineOperationRequest::GetBaselineOperationRequest() : 
    m_operationIdentifierHasBeenSet(false)
{
}

Aws::String GetBaselineOperationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationIdentifierHasBeenSet)
  {
   payload.WithString("operationIdentifier", m_operationIdentifier);

  }

  return payload.View().WriteReadable();
}




