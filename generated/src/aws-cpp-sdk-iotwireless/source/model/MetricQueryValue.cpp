/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MetricQueryValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

MetricQueryValue::MetricQueryValue(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricQueryValue& MetricQueryValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetDouble("Min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");
    m_maxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sum"))
  {
    m_sum = jsonValue.GetDouble("Sum");
    m_sumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Avg"))
  {
    m_avg = jsonValue.GetDouble("Avg");
    m_avgHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Std"))
  {
    m_std = jsonValue.GetDouble("Std");
    m_stdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("P90"))
  {
    m_p90 = jsonValue.GetDouble("P90");
    m_p90HasBeenSet = true;
  }
  return *this;
}

JsonValue MetricQueryValue::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithDouble("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("Sum", m_sum);

  }

  if(m_avgHasBeenSet)
  {
   payload.WithDouble("Avg", m_avg);

  }

  if(m_stdHasBeenSet)
  {
   payload.WithDouble("Std", m_std);

  }

  if(m_p90HasBeenSet)
  {
   payload.WithDouble("P90", m_p90);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
