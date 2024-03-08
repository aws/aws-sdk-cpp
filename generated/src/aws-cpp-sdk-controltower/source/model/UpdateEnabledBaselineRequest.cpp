/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/UpdateEnabledBaselineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnabledBaselineRequest::UpdateEnabledBaselineRequest() : 
    m_baselineVersionHasBeenSet(false),
    m_enabledBaselineIdentifierHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String UpdateEnabledBaselineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baselineVersionHasBeenSet)
  {
   payload.WithString("baselineVersion", m_baselineVersion);

  }

  if(m_enabledBaselineIdentifierHasBeenSet)
  {
   payload.WithString("enabledBaselineIdentifier", m_enabledBaselineIdentifier);

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




