/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/TimePeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

TimePeriod::TimePeriod() : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

TimePeriod::TimePeriod(JsonView jsonValue) : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

TimePeriod& TimePeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetDouble("Start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetDouble("End");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue TimePeriod::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithDouble("Start", m_start.SecondsWithMSPrecision());
  }

  if(m_endHasBeenSet)
  {
   payload.WithDouble("End", m_end.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
