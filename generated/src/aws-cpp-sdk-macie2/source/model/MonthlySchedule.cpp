/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/MonthlySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

MonthlySchedule::MonthlySchedule() : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false)
{
}

MonthlySchedule::MonthlySchedule(JsonView jsonValue) : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false)
{
  *this = jsonValue;
}

MonthlySchedule& MonthlySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("dayOfMonth");

    m_dayOfMonthHasBeenSet = true;
  }

  return *this;
}

JsonValue MonthlySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("dayOfMonth", m_dayOfMonth);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
