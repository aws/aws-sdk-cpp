/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/PredictionTimeRange.h>
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

PredictionTimeRange::PredictionTimeRange() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

PredictionTimeRange::PredictionTimeRange(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PredictionTimeRange& PredictionTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictionTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
