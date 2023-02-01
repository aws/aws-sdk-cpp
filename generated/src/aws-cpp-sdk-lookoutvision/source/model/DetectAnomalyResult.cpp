/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DetectAnomalyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

DetectAnomalyResult::DetectAnomalyResult() : 
    m_sourceHasBeenSet(false),
    m_isAnomalous(false),
    m_isAnomalousHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_anomaliesHasBeenSet(false),
    m_anomalyMaskHasBeenSet(false)
{
}

DetectAnomalyResult::DetectAnomalyResult(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_isAnomalous(false),
    m_isAnomalousHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_anomaliesHasBeenSet(false),
    m_anomalyMaskHasBeenSet(false)
{
  *this = jsonValue;
}

DetectAnomalyResult& DetectAnomalyResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsAnomalous"))
  {
    m_isAnomalous = jsonValue.GetBool("IsAnomalous");

    m_isAnomalousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Anomalies"))
  {
    Aws::Utils::Array<JsonView> anomaliesJsonList = jsonValue.GetArray("Anomalies");
    for(unsigned anomaliesIndex = 0; anomaliesIndex < anomaliesJsonList.GetLength(); ++anomaliesIndex)
    {
      m_anomalies.push_back(anomaliesJsonList[anomaliesIndex].AsObject());
    }
    m_anomaliesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnomalyMask"))
  {
    m_anomalyMask = HashingUtils::Base64Decode(jsonValue.GetString("AnomalyMask"));
    m_anomalyMaskHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectAnomalyResult::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_isAnomalousHasBeenSet)
  {
   payload.WithBool("IsAnomalous", m_isAnomalous);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_anomaliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> anomaliesJsonList(m_anomalies.size());
   for(unsigned anomaliesIndex = 0; anomaliesIndex < anomaliesJsonList.GetLength(); ++anomaliesIndex)
   {
     anomaliesJsonList[anomaliesIndex].AsObject(m_anomalies[anomaliesIndex].Jsonize());
   }
   payload.WithArray("Anomalies", std::move(anomaliesJsonList));

  }

  if(m_anomalyMaskHasBeenSet)
  {
   payload.WithString("AnomalyMask", HashingUtils::Base64Encode(m_anomalyMask));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
