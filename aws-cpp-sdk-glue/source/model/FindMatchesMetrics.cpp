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

#include <aws/glue/model/FindMatchesMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

FindMatchesMetrics::FindMatchesMetrics() : 
    m_areaUnderPRCurve(0.0),
    m_areaUnderPRCurveHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false),
    m_f1(0.0),
    m_f1HasBeenSet(false),
    m_confusionMatrixHasBeenSet(false)
{
}

FindMatchesMetrics::FindMatchesMetrics(JsonView jsonValue) : 
    m_areaUnderPRCurve(0.0),
    m_areaUnderPRCurveHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false),
    m_f1(0.0),
    m_f1HasBeenSet(false),
    m_confusionMatrixHasBeenSet(false)
{
  *this = jsonValue;
}

FindMatchesMetrics& FindMatchesMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AreaUnderPRCurve"))
  {
    m_areaUnderPRCurve = jsonValue.GetDouble("AreaUnderPRCurve");

    m_areaUnderPRCurveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Precision"))
  {
    m_precision = jsonValue.GetDouble("Precision");

    m_precisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recall"))
  {
    m_recall = jsonValue.GetDouble("Recall");

    m_recallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("F1"))
  {
    m_f1 = jsonValue.GetDouble("F1");

    m_f1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfusionMatrix"))
  {
    m_confusionMatrix = jsonValue.GetObject("ConfusionMatrix");

    m_confusionMatrixHasBeenSet = true;
  }

  return *this;
}

JsonValue FindMatchesMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_areaUnderPRCurveHasBeenSet)
  {
   payload.WithDouble("AreaUnderPRCurve", m_areaUnderPRCurve);

  }

  if(m_precisionHasBeenSet)
  {
   payload.WithDouble("Precision", m_precision);

  }

  if(m_recallHasBeenSet)
  {
   payload.WithDouble("Recall", m_recall);

  }

  if(m_f1HasBeenSet)
  {
   payload.WithDouble("F1", m_f1);

  }

  if(m_confusionMatrixHasBeenSet)
  {
   payload.WithObject("ConfusionMatrix", m_confusionMatrix.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
