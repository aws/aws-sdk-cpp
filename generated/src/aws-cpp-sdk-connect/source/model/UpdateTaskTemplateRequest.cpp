/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateTaskTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTaskTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  if(m_selfAssignFlowIdHasBeenSet)
  {
   payload.WithString("SelfAssignFlowId", m_selfAssignFlowId);

  }

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  if(m_defaultsHasBeenSet)
  {
   payload.WithObject("Defaults", m_defaults.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TaskTemplateStatusMapper::GetNameForTaskTemplateStatus(m_status));
  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("Fields", std::move(fieldsJsonList));

  }

  return payload.View().WriteReadable();
}




