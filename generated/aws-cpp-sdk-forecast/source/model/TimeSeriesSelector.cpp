/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeSeriesSelector.h>
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

TimeSeriesSelector::TimeSeriesSelector() : 
    m_timeSeriesIdentifiersHasBeenSet(false)
{
}

TimeSeriesSelector::TimeSeriesSelector(JsonView jsonValue) : 
    m_timeSeriesIdentifiersHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesSelector& TimeSeriesSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeSeriesIdentifiers"))
  {
    m_timeSeriesIdentifiers = jsonValue.GetObject("TimeSeriesIdentifiers");

    m_timeSeriesIdentifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesSelector::Jsonize() const
{
  JsonValue payload;

  if(m_timeSeriesIdentifiersHasBeenSet)
  {
   payload.WithObject("TimeSeriesIdentifiers", m_timeSeriesIdentifiers.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
