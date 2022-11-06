/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/CreateInputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInputRequest::CreateInputRequest() : 
    m_inputNameHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false),
    m_inputDefinitionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateInputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("inputName", m_inputName);

  }

  if(m_inputDescriptionHasBeenSet)
  {
   payload.WithString("inputDescription", m_inputDescription);

  }

  if(m_inputDefinitionHasBeenSet)
  {
   payload.WithObject("inputDefinition", m_inputDefinition.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




