/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetCalculationExecutionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCalculationExecutionStatusRequest::GetCalculationExecutionStatusRequest() : 
    m_calculationExecutionIdHasBeenSet(false)
{
}

Aws::String GetCalculationExecutionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_calculationExecutionIdHasBeenSet)
  {
   payload.WithString("CalculationExecutionId", m_calculationExecutionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCalculationExecutionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetCalculationExecutionStatus"));
  return headers;

}




