/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/TimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Billing
{
namespace Model
{

TimeRange::TimeRange(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeRange& TimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("beginDateInclusive"))
  {
    m_beginDateInclusive = jsonValue.GetDouble("beginDateInclusive");
    m_beginDateInclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endDateInclusive"))
  {
    m_endDateInclusive = jsonValue.GetDouble("endDateInclusive");
    m_endDateInclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginDateInclusiveHasBeenSet)
  {
   payload.WithDouble("beginDateInclusive", m_beginDateInclusive.SecondsWithMSPrecision());
  }

  if(m_endDateInclusiveHasBeenSet)
  {
   payload.WithDouble("endDateInclusive", m_endDateInclusive.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Billing
} // namespace Aws
