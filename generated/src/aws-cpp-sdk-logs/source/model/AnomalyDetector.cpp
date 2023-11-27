/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/AnomalyDetector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

AnomalyDetector::AnomalyDetector() : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_detectorNameHasBeenSet(false),
    m_logGroupArnListHasBeenSet(false),
    m_evaluationFrequency(EvaluationFrequency::NOT_SET),
    m_evaluationFrequencyHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_anomalyDetectorStatus(AnomalyDetectorStatus::NOT_SET),
    m_anomalyDetectorStatusHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_creationTimeStamp(0),
    m_creationTimeStampHasBeenSet(false),
    m_lastModifiedTimeStamp(0),
    m_lastModifiedTimeStampHasBeenSet(false),
    m_anomalyVisibilityTime(0),
    m_anomalyVisibilityTimeHasBeenSet(false)
{
}

AnomalyDetector::AnomalyDetector(JsonView jsonValue) : 
    m_anomalyDetectorArnHasBeenSet(false),
    m_detectorNameHasBeenSet(false),
    m_logGroupArnListHasBeenSet(false),
    m_evaluationFrequency(EvaluationFrequency::NOT_SET),
    m_evaluationFrequencyHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_anomalyDetectorStatus(AnomalyDetectorStatus::NOT_SET),
    m_anomalyDetectorStatusHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_creationTimeStamp(0),
    m_creationTimeStampHasBeenSet(false),
    m_lastModifiedTimeStamp(0),
    m_lastModifiedTimeStampHasBeenSet(false),
    m_anomalyVisibilityTime(0),
    m_anomalyVisibilityTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyDetector& AnomalyDetector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("anomalyDetectorArn"))
  {
    m_anomalyDetectorArn = jsonValue.GetString("anomalyDetectorArn");

    m_anomalyDetectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorName"))
  {
    m_detectorName = jsonValue.GetString("detectorName");

    m_detectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupArnList"))
  {
    Aws::Utils::Array<JsonView> logGroupArnListJsonList = jsonValue.GetArray("logGroupArnList");
    for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
    {
      m_logGroupArnList.push_back(logGroupArnListJsonList[logGroupArnListIndex].AsString());
    }
    m_logGroupArnListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationFrequency"))
  {
    m_evaluationFrequency = EvaluationFrequencyMapper::GetEvaluationFrequencyForName(jsonValue.GetString("evaluationFrequency"));

    m_evaluationFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterPattern"))
  {
    m_filterPattern = jsonValue.GetString("filterPattern");

    m_filterPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("anomalyDetectorStatus"))
  {
    m_anomalyDetectorStatus = AnomalyDetectorStatusMapper::GetAnomalyDetectorStatusForName(jsonValue.GetString("anomalyDetectorStatus"));

    m_anomalyDetectorStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTimeStamp"))
  {
    m_creationTimeStamp = jsonValue.GetInt64("creationTimeStamp");

    m_creationTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTimeStamp"))
  {
    m_lastModifiedTimeStamp = jsonValue.GetInt64("lastModifiedTimeStamp");

    m_lastModifiedTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("anomalyVisibilityTime"))
  {
    m_anomalyVisibilityTime = jsonValue.GetInt64("anomalyVisibilityTime");

    m_anomalyVisibilityTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyDetector::Jsonize() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("anomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_detectorNameHasBeenSet)
  {
   payload.WithString("detectorName", m_detectorName);

  }

  if(m_logGroupArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupArnListJsonList(m_logGroupArnList.size());
   for(unsigned logGroupArnListIndex = 0; logGroupArnListIndex < logGroupArnListJsonList.GetLength(); ++logGroupArnListIndex)
   {
     logGroupArnListJsonList[logGroupArnListIndex].AsString(m_logGroupArnList[logGroupArnListIndex]);
   }
   payload.WithArray("logGroupArnList", std::move(logGroupArnListJsonList));

  }

  if(m_evaluationFrequencyHasBeenSet)
  {
   payload.WithString("evaluationFrequency", EvaluationFrequencyMapper::GetNameForEvaluationFrequency(m_evaluationFrequency));
  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_anomalyDetectorStatusHasBeenSet)
  {
   payload.WithString("anomalyDetectorStatus", AnomalyDetectorStatusMapper::GetNameForAnomalyDetectorStatus(m_anomalyDetectorStatus));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_creationTimeStampHasBeenSet)
  {
   payload.WithInt64("creationTimeStamp", m_creationTimeStamp);

  }

  if(m_lastModifiedTimeStampHasBeenSet)
  {
   payload.WithInt64("lastModifiedTimeStamp", m_lastModifiedTimeStamp);

  }

  if(m_anomalyVisibilityTimeHasBeenSet)
  {
   payload.WithInt64("anomalyVisibilityTime", m_anomalyVisibilityTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
