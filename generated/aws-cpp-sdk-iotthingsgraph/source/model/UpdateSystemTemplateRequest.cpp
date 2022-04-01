﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/UpdateSystemTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSystemTemplateRequest::UpdateSystemTemplateRequest() : 
    m_idHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_compatibleNamespaceVersion(0),
    m_compatibleNamespaceVersionHasBeenSet(false)
{
}

Aws::String UpdateSystemTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_compatibleNamespaceVersionHasBeenSet)
  {
   payload.WithInt64("compatibleNamespaceVersion", m_compatibleNamespaceVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSystemTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.UpdateSystemTemplate"));
  return headers;

}




