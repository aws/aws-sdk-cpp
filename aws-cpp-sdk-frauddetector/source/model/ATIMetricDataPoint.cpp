/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ATIMetricDataPoint.h>
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

ATIMetricDataPoint::ATIMetricDataPoint() : 
    m_cr(0.0),
    m_crHasBeenSet(false),
    m_adr(0.0),
    m_adrHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_atodr(0.0),
    m_atodrHasBeenSet(false)
{
}

ATIMetricDataPoint::ATIMetricDataPoint(JsonView jsonValue) : 
    m_cr(0.0),
    m_crHasBeenSet(false),
    m_adr(0.0),
    m_adrHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_atodr(0.0),
    m_atodrHasBeenSet(false)
{
  *this = jsonValue;
}

ATIMetricDataPoint& ATIMetricDataPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cr"))
  {
    m_cr = jsonValue.GetDouble("cr");

    m_crHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adr"))
  {
    m_adr = jsonValue.GetDouble("adr");

    m_adrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("atodr"))
  {
    m_atodr = jsonValue.GetDouble("atodr");

    m_atodrHasBeenSet = true;
  }

  return *this;
}

JsonValue ATIMetricDataPoint::Jsonize() const
{
  JsonValue payload;

  if(m_crHasBeenSet)
  {
   payload.WithDouble("cr", m_cr);

  }

  if(m_adrHasBeenSet)
  {
   payload.WithDouble("adr", m_adr);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  if(m_atodrHasBeenSet)
  {
   payload.WithDouble("atodr", m_atodr);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
