/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
