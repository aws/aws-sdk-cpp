/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateResourcePolicyStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateResourcePolicyStatementRequest::CreateResourcePolicyStatementRequest() : 
    m_resourceArnHasBeenSet(false),
    m_statementIdHasBeenSet(false),
    m_effect(Effect::NOT_SET),
    m_effectHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_expectedRevisionIdHasBeenSet(false)
{
}

Aws::String CreateResourcePolicyStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("statementId", m_statementId);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("effect", EffectMapper::GetNameForEffect(m_effect));
  }

  if(m_principalHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalJsonList(m_principal.size());
   for(unsigned principalIndex = 0; principalIndex < principalJsonList.GetLength(); ++principalIndex)
   {
     principalJsonList[principalIndex].AsObject(m_principal[principalIndex].Jsonize());
   }
   payload.WithArray("principal", std::move(principalJsonList));

  }

  if(m_actionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionJsonList(m_action.size());
   for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
   {
     actionJsonList[actionIndex].AsString(m_action[actionIndex]);
   }
   payload.WithArray("action", std::move(actionJsonList));

  }

  if(m_conditionHasBeenSet)
  {
   JsonValue conditionJsonMap;
   for(auto& conditionItem : m_condition)
   {
     JsonValue conditionKeyValueMapJsonMap;
     for(auto& conditionKeyValueMapItem : conditionItem.second)
     {
       conditionKeyValueMapJsonMap.WithString(conditionKeyValueMapItem.first, conditionKeyValueMapItem.second);
     }
     conditionJsonMap.WithObject(conditionItem.first, std::move(conditionKeyValueMapJsonMap));
   }
   payload.WithObject("condition", std::move(conditionJsonMap));

  }

  return payload.View().WriteReadable();
}

void CreateResourcePolicyStatementRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_expectedRevisionIdHasBeenSet)
    {
      ss << m_expectedRevisionId;
      uri.AddQueryStringParameter("expectedRevisionId", ss.str());
      ss.str("");
    }

}



