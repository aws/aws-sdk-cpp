/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationForm.h>
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

EvaluationForm::EvaluationForm() : 
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false),
    m_locked(false),
    m_lockedHasBeenSet(false),
    m_evaluationFormArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(EvaluationFormVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_scoringStrategyHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EvaluationForm::EvaluationForm(JsonView jsonValue) : 
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false),
    m_locked(false),
    m_lockedHasBeenSet(false),
    m_evaluationFormArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(EvaluationFormVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_scoringStrategyHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationForm& EvaluationForm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationFormId"))
  {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");

    m_evaluationFormIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormVersion"))
  {
    m_evaluationFormVersion = jsonValue.GetInteger("EvaluationFormVersion");

    m_evaluationFormVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locked"))
  {
    m_locked = jsonValue.GetBool("Locked");

    m_lockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormArn"))
  {
    m_evaluationFormArn = jsonValue.GetString("EvaluationFormArn");

    m_evaluationFormArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EvaluationFormVersionStatusMapper::GetEvaluationFormVersionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScoringStrategy"))
  {
    m_scoringStrategy = jsonValue.GetObject("ScoringStrategy");

    m_scoringStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
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

JsonValue EvaluationForm::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationFormIdHasBeenSet)
  {
   payload.WithString("EvaluationFormId", m_evaluationFormId);

  }

  if(m_evaluationFormVersionHasBeenSet)
  {
   payload.WithInteger("EvaluationFormVersion", m_evaluationFormVersion);

  }

  if(m_lockedHasBeenSet)
  {
   payload.WithBool("Locked", m_locked);

  }

  if(m_evaluationFormArnHasBeenSet)
  {
   payload.WithString("EvaluationFormArn", m_evaluationFormArn);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EvaluationFormVersionStatusMapper::GetNameForEvaluationFormVersionStatus(m_status));
  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_scoringStrategyHasBeenSet)
  {
   payload.WithObject("ScoringStrategy", m_scoringStrategy.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

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
