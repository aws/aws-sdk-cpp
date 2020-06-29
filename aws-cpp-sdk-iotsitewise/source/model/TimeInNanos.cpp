/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TimeInNanos.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

TimeInNanos::TimeInNanos() : 
    m_timeInSeconds(0),
    m_timeInSecondsHasBeenSet(false),
    m_offsetInNanos(0),
    m_offsetInNanosHasBeenSet(false)
{
}

TimeInNanos::TimeInNanos(JsonView jsonValue) : 
    m_timeInSeconds(0),
    m_timeInSecondsHasBeenSet(false),
    m_offsetInNanos(0),
    m_offsetInNanosHasBeenSet(false)
{
  *this = jsonValue;
}

TimeInNanos& TimeInNanos::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeInSeconds"))
  {
    m_timeInSeconds = jsonValue.GetInt64("timeInSeconds");

    m_timeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offsetInNanos"))
  {
    m_offsetInNanos = jsonValue.GetInteger("offsetInNanos");

    m_offsetInNanosHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeInNanos::Jsonize() const
{
  JsonValue payload;

  if(m_timeInSecondsHasBeenSet)
  {
   payload.WithInt64("timeInSeconds", m_timeInSeconds);

  }

  if(m_offsetInNanosHasBeenSet)
  {
   payload.WithInteger("offsetInNanos", m_offsetInNanos);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
