/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/PredictorEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

PredictorEvent::PredictorEvent() : 
    m_detailHasBeenSet(false),
    m_datetimeHasBeenSet(false)
{
}

PredictorEvent::PredictorEvent(JsonView jsonValue) : 
    m_detailHasBeenSet(false),
    m_datetimeHasBeenSet(false)
{
  *this = jsonValue;
}

PredictorEvent& PredictorEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Detail"))
  {
    m_detail = jsonValue.GetString("Detail");

    m_detailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Datetime"))
  {
    m_datetime = jsonValue.GetDouble("Datetime");

    m_datetimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictorEvent::Jsonize() const
{
  JsonValue payload;

  if(m_detailHasBeenSet)
  {
   payload.WithString("Detail", m_detail);

  }

  if(m_datetimeHasBeenSet)
  {
   payload.WithDouble("Datetime", m_datetime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
