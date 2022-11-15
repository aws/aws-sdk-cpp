/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_confusionMatrixHasBeenSet(false),
    m_columnImportancesHasBeenSet(false)
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
    m_confusionMatrixHasBeenSet(false),
    m_columnImportancesHasBeenSet(false)
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

  if(jsonValue.ValueExists("ColumnImportances"))
  {
    Aws::Utils::Array<JsonView> columnImportancesJsonList = jsonValue.GetArray("ColumnImportances");
    for(unsigned columnImportancesIndex = 0; columnImportancesIndex < columnImportancesJsonList.GetLength(); ++columnImportancesIndex)
    {
      m_columnImportances.push_back(columnImportancesJsonList[columnImportancesIndex].AsObject());
    }
    m_columnImportancesHasBeenSet = true;
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

  if(m_columnImportancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnImportancesJsonList(m_columnImportances.size());
   for(unsigned columnImportancesIndex = 0; columnImportancesIndex < columnImportancesJsonList.GetLength(); ++columnImportancesIndex)
   {
     columnImportancesJsonList[columnImportancesIndex].AsObject(m_columnImportances[columnImportancesIndex].Jsonize());
   }
   payload.WithArray("ColumnImportances", std::move(columnImportancesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
