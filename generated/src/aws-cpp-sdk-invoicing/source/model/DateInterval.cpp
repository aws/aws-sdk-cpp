/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/DateInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

DateInterval::DateInterval(JsonView jsonValue)
{
  *this = jsonValue;
}

DateInterval& DateInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");
    m_startDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");
    m_endDateHasBeenSet = true;
  }
  return *this;
}

JsonValue DateInterval::Jsonize() const
{
  JsonValue payload;

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
