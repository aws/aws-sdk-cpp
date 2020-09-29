/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/TimeSeriesDataPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/model/Datum.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

TimeSeriesDataPoint::TimeSeriesDataPoint() : 
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

TimeSeriesDataPoint::TimeSeriesDataPoint(JsonView jsonValue) : 
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

const Datum& TimeSeriesDataPoint::GetValue() const{ return *m_value; }
bool TimeSeriesDataPoint::ValueHasBeenSet() const { return m_valueHasBeenSet; }
void TimeSeriesDataPoint::SetValue(const Datum& value) { m_valueHasBeenSet = true; m_value = Aws::MakeShared<Datum>("TimeSeriesDataPoint", value); }
void TimeSeriesDataPoint::SetValue(Datum&& value) { m_valueHasBeenSet = true; m_value = Aws::MakeShared<Datum>("TimeSeriesDataPoint", std::move(value)); }
TimeSeriesDataPoint& TimeSeriesDataPoint::WithValue(const Datum& value) { SetValue(value); return *this;}
TimeSeriesDataPoint& TimeSeriesDataPoint::WithValue(Datum&& value) { SetValue(std::move(value)); return *this;}

TimeSeriesDataPoint& TimeSeriesDataPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = Aws::MakeShared<Datum>("TimeSeriesDataPoint", jsonValue.GetObject("Value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesDataPoint::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
