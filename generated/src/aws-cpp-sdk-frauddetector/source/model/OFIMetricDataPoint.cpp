﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/OFIMetricDataPoint.h>
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

OFIMetricDataPoint::OFIMetricDataPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

OFIMetricDataPoint& OFIMetricDataPoint::operator =(JsonView jsonValue)
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

JsonValue OFIMetricDataPoint::Jsonize() const
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
