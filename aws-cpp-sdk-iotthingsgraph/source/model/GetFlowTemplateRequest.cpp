/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/GetFlowTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFlowTemplateRequest::GetFlowTemplateRequest() : 
    m_idHasBeenSet(false),
    m_revisionNumber(0),
    m_revisionNumberHasBeenSet(false)
{
}

Aws::String GetFlowTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_revisionNumberHasBeenSet)
  {
   payload.WithInt64("revisionNumber", m_revisionNumber);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFlowTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.GetFlowTemplate"));
  return headers;

}




