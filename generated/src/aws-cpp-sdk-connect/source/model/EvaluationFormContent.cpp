/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormContent.h>
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

EvaluationFormContent::EvaluationFormContent() : 
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_scoringStrategyHasBeenSet(false)
{
}

EvaluationFormContent::EvaluationFormContent(JsonView jsonValue) : 
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_scoringStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormContent& EvaluationFormContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationFormVersion"))
  {
    m_evaluationFormVersion = jsonValue.GetInteger("EvaluationFormVersion");

    m_evaluationFormVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormId"))
  {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");

    m_evaluationFormIdHasBeenSet = true;
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

  return *this;
}

JsonValue EvaluationFormContent::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationFormVersionHasBeenSet)
  {
   payload.WithInteger("EvaluationFormVersion", m_evaluationFormVersion);

  }

  if(m_evaluationFormIdHasBeenSet)
  {
   payload.WithString("EvaluationFormId", m_evaluationFormId);

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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
