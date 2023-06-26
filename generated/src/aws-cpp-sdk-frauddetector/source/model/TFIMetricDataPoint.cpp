/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TFIMetricDataPoint.h>
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

TFIMetricDataPoint::TFIMetricDataPoint() : 
    m_fpr(0.0),
    m_fprHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_tpr(0.0),
    m_tprHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false)
{
}

TFIMetricDataPoint::TFIMetricDataPoint(JsonView jsonValue) : 
    m_fpr(0.0),
    m_fprHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_tpr(0.0),
    m_tprHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false)
{
  *this = jsonValue;
}

TFIMetricDataPoint& TFIMetricDataPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fpr"))
  {
    m_fpr = jsonValue.GetDouble("fpr");

    m_fprHasBeenSet = true;
  }

  if(jsonValue.ValueExists("precision"))
  {
    m_precision = jsonValue.GetDouble("precision");

    m_precisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tpr"))
  {
    m_tpr = jsonValue.GetDouble("tpr");

    m_tprHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

    m_thresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue TFIMetricDataPoint::Jsonize() const
{
  JsonValue payload;

  if(m_fprHasBeenSet)
  {
   payload.WithDouble("fpr", m_fpr);

  }

  if(m_precisionHasBeenSet)
  {
   payload.WithDouble("precision", m_precision);

  }

  if(m_tprHasBeenSet)
  {
   payload.WithDouble("tpr", m_tpr);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
