/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/UpdateEnabledControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnabledControlRequest::UpdateEnabledControlRequest() : 
    m_enabledControlIdentifierHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String UpdateEnabledControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledControlIdentifierHasBeenSet)
  {
   payload.WithString("enabledControlIdentifier", m_enabledControlIdentifier);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  return payload.View().WriteReadable();
}




