/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/TimestampRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

TimestampRange::TimestampRange() : 
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

TimestampRange::TimestampRange(JsonView jsonValue) : 
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampRange& TimestampRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("beginDate"))
  {
    m_beginDate = jsonValue.GetDouble("beginDate");

    m_beginDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetDouble("endDate");

    m_endDateHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginDateHasBeenSet)
  {
   payload.WithDouble("beginDate", m_beginDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
