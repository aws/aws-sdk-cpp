/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/GetExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDataExports::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExecutionRequest::GetExecutionRequest() : 
    m_executionIdHasBeenSet(false),
    m_exportArnHasBeenSet(false)
{
}

Aws::String GetExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_exportArnHasBeenSet)
  {
   payload.WithString("ExportArn", m_exportArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBillingAndCostManagementDataExports.GetExecution"));
  return headers;

}




