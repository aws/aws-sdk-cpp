/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerMetadataEntityTypesListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerMetadataEntityTypesListItem::EntityRecognizerMetadataEntityTypesListItem() : 
    m_typeHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false),
    m_numberOfTrainMentions(0),
    m_numberOfTrainMentionsHasBeenSet(false)
{
}

EntityRecognizerMetadataEntityTypesListItem::EntityRecognizerMetadataEntityTypesListItem(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_evaluationMetricsHasBeenSet(false),
    m_numberOfTrainMentions(0),
    m_numberOfTrainMentionsHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerMetadataEntityTypesListItem& EntityRecognizerMetadataEntityTypesListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationMetrics"))
  {
    m_evaluationMetrics = jsonValue.GetObject("EvaluationMetrics");

    m_evaluationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfTrainMentions"))
  {
    m_numberOfTrainMentions = jsonValue.GetInteger("NumberOfTrainMentions");

    m_numberOfTrainMentionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerMetadataEntityTypesListItem::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_evaluationMetricsHasBeenSet)
  {
   payload.WithObject("EvaluationMetrics", m_evaluationMetrics.Jsonize());

  }

  if(m_numberOfTrainMentionsHasBeenSet)
  {
   payload.WithInteger("NumberOfTrainMentions", m_numberOfTrainMentions);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
