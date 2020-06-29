/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/GetScreenDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetScreenDataRequest::GetScreenDataRequest() : 
    m_workbookIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_screenIdHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetScreenDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workbookIdHasBeenSet)
  {
   payload.WithString("workbookId", m_workbookId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_screenIdHasBeenSet)
  {
   payload.WithString("screenId", m_screenId);

  }

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithObject(variablesItem.first, variablesItem.second.Jsonize());
   }
   payload.WithObject("variables", std::move(variablesJsonMap));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




