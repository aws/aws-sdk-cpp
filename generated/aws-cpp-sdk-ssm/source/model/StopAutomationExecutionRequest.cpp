/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StopAutomationExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopAutomationExecutionRequest::StopAutomationExecutionRequest() : 
    m_automationExecutionIdHasBeenSet(false),
    m_type(StopType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String StopAutomationExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_automationExecutionIdHasBeenSet)
  {
   payload.WithString("AutomationExecutionId", m_automationExecutionId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", StopTypeMapper::GetNameForStopType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopAutomationExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StopAutomationExecution"));
  return headers;

}




