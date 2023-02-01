/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TrainingMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

TrainingMetrics::TrainingMetrics() : 
    m_auc(0.0),
    m_aucHasBeenSet(false),
    m_metricDataPointsHasBeenSet(false)
{
}

TrainingMetrics::TrainingMetrics(JsonView jsonValue) : 
    m_auc(0.0),
    m_aucHasBeenSet(false),
    m_metricDataPointsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingMetrics& TrainingMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auc"))
  {
    m_auc = jsonValue.GetDouble("auc");

    m_aucHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricDataPoints"))
  {
    Aws::Utils::Array<JsonView> metricDataPointsJsonList = jsonValue.GetArray("metricDataPoints");
    for(unsigned metricDataPointsIndex = 0; metricDataPointsIndex < metricDataPointsJsonList.GetLength(); ++metricDataPointsIndex)
    {
      m_metricDataPoints.push_back(metricDataPointsJsonList[metricDataPointsIndex].AsObject());
    }
    m_metricDataPointsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_aucHasBeenSet)
  {
   payload.WithDouble("auc", m_auc);

  }

  if(m_metricDataPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDataPointsJsonList(m_metricDataPoints.size());
   for(unsigned metricDataPointsIndex = 0; metricDataPointsIndex < metricDataPointsJsonList.GetLength(); ++metricDataPointsIndex)
   {
     metricDataPointsJsonList[metricDataPointsIndex].AsObject(m_metricDataPoints[metricDataPointsIndex].Jsonize());
   }
   payload.WithArray("metricDataPoints", std::move(metricDataPointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
