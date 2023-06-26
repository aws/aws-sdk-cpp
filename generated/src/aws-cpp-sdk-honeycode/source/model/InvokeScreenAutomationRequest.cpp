/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/InvokeScreenAutomationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InvokeScreenAutomationRequest::InvokeScreenAutomationRequest() : 
    m_workbookIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_screenIdHasBeenSet(false),
    m_screenAutomationIdHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_rowIdHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String InvokeScreenAutomationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithObject(variablesItem.first, variablesItem.second.Jsonize());
   }
   payload.WithObject("variables", std::move(variablesJsonMap));

  }

  if(m_rowIdHasBeenSet)
  {
   payload.WithString("rowId", m_rowId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




