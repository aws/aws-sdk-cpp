/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/UpdateInputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInputRequest::UpdateInputRequest() : 
    m_inputNameHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false),
    m_inputDefinitionHasBeenSet(false)
{
}

Aws::String UpdateInputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inputDescriptionHasBeenSet)
  {
   payload.WithString("inputDescription", m_inputDescription);

  }

  if(m_inputDefinitionHasBeenSet)
  {
   payload.WithObject("inputDefinition", m_inputDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}




