/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateContactEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactEvaluationRequest::UpdateContactEvaluationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_evaluationIdHasBeenSet(false),
    m_answersHasBeenSet(false),
    m_notesHasBeenSet(false)
{
}

Aws::String UpdateContactEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_answersHasBeenSet)
  {
   JsonValue answersJsonMap;
   for(auto& answersItem : m_answers)
   {
     answersJsonMap.WithObject(answersItem.first, answersItem.second.Jsonize());
   }
   payload.WithObject("Answers", std::move(answersJsonMap));

  }

  if(m_notesHasBeenSet)
  {
   JsonValue notesJsonMap;
   for(auto& notesItem : m_notes)
   {
     notesJsonMap.WithObject(notesItem.first, notesItem.second.Jsonize());
   }
   payload.WithObject("Notes", std::move(notesJsonMap));

  }

  return payload.View().WriteReadable();
}




