/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/PillarDifference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

PillarDifference::PillarDifference() : 
    m_pillarIdHasBeenSet(false),
    m_pillarNameHasBeenSet(false),
    m_differenceStatus(DifferenceStatus::NOT_SET),
    m_differenceStatusHasBeenSet(false),
    m_questionDifferencesHasBeenSet(false)
{
}

PillarDifference::PillarDifference(JsonView jsonValue) : 
    m_pillarIdHasBeenSet(false),
    m_pillarNameHasBeenSet(false),
    m_differenceStatus(DifferenceStatus::NOT_SET),
    m_differenceStatusHasBeenSet(false),
    m_questionDifferencesHasBeenSet(false)
{
  *this = jsonValue;
}

PillarDifference& PillarDifference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarName"))
  {
    m_pillarName = jsonValue.GetString("PillarName");

    m_pillarNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DifferenceStatus"))
  {
    m_differenceStatus = DifferenceStatusMapper::GetDifferenceStatusForName(jsonValue.GetString("DifferenceStatus"));

    m_differenceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionDifferences"))
  {
    Aws::Utils::Array<JsonView> questionDifferencesJsonList = jsonValue.GetArray("QuestionDifferences");
    for(unsigned questionDifferencesIndex = 0; questionDifferencesIndex < questionDifferencesJsonList.GetLength(); ++questionDifferencesIndex)
    {
      m_questionDifferences.push_back(questionDifferencesJsonList[questionDifferencesIndex].AsObject());
    }
    m_questionDifferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue PillarDifference::Jsonize() const
{
  JsonValue payload;

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_pillarNameHasBeenSet)
  {
   payload.WithString("PillarName", m_pillarName);

  }

  if(m_differenceStatusHasBeenSet)
  {
   payload.WithString("DifferenceStatus", DifferenceStatusMapper::GetNameForDifferenceStatus(m_differenceStatus));
  }

  if(m_questionDifferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> questionDifferencesJsonList(m_questionDifferences.size());
   for(unsigned questionDifferencesIndex = 0; questionDifferencesIndex < questionDifferencesJsonList.GetLength(); ++questionDifferencesIndex)
   {
     questionDifferencesJsonList[questionDifferencesIndex].AsObject(m_questionDifferences[questionDifferencesIndex].Jsonize());
   }
   payload.WithArray("QuestionDifferences", std::move(questionDifferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
