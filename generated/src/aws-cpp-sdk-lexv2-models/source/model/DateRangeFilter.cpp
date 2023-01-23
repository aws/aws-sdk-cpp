/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DateRangeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

DateRangeFilter::DateRangeFilter() : 
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

DateRangeFilter::DateRangeFilter(JsonView jsonValue) : 
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DateRangeFilter& DateRangeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startDateTime"))
  {
    m_startDateTime = jsonValue.GetDouble("startDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("endDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DateRangeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("startDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("endDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
