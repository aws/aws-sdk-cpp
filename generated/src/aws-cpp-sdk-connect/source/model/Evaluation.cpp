/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Evaluation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Evaluation::Evaluation() : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationArnHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_answersHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_status(EvaluationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_scoresHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Evaluation::Evaluation(JsonView jsonValue) : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationArnHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_answersHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_status(EvaluationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_scoresHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Evaluation& Evaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationId"))
  {
    m_evaluationId = jsonValue.GetString("EvaluationId");

    m_evaluationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationArn"))
  {
    m_evaluationArn = jsonValue.GetString("EvaluationArn");

    m_evaluationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetObject("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Answers"))
  {
    Aws::Map<Aws::String, JsonView> answersJsonMap = jsonValue.GetObject("Answers").GetAllObjects();
    for(auto& answersItem : answersJsonMap)
    {
      m_answers[answersItem.first] = answersItem.second.AsObject();
    }
    m_answersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    Aws::Map<Aws::String, JsonView> notesJsonMap = jsonValue.GetObject("Notes").GetAllObjects();
    for(auto& notesItem : notesJsonMap)
    {
      m_notes[notesItem.first] = notesItem.second.AsObject();
    }
    m_notesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EvaluationStatusMapper::GetEvaluationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scores"))
  {
    Aws::Map<Aws::String, JsonView> scoresJsonMap = jsonValue.GetObject("Scores").GetAllObjects();
    for(auto& scoresItem : scoresJsonMap)
    {
      m_scores[scoresItem.first] = scoresItem.second.AsObject();
    }
    m_scoresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Evaluation::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationIdHasBeenSet)
  {
   payload.WithString("EvaluationId", m_evaluationId);

  }

  if(m_evaluationArnHasBeenSet)
  {
   payload.WithString("EvaluationArn", m_evaluationArn);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("Metadata", m_metadata.Jsonize());

  }

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EvaluationStatusMapper::GetNameForEvaluationStatus(m_status));
  }

  if(m_scoresHasBeenSet)
  {
   JsonValue scoresJsonMap;
   for(auto& scoresItem : m_scores)
   {
     scoresJsonMap.WithObject(scoresItem.first, scoresItem.second.Jsonize());
   }
   payload.WithObject("Scores", std::move(scoresJsonMap));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
