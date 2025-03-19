/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ActiveTimeRange.h>
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

ActiveTimeRange::ActiveTimeRange(JsonView jsonValue)
{
  *this = jsonValue;
}

ActiveTimeRange& ActiveTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeAfterInclusive"))
  {
    m_activeAfterInclusive = jsonValue.GetDouble("activeAfterInclusive");
    m_activeAfterInclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activeBeforeInclusive"))
  {
    m_activeBeforeInclusive = jsonValue.GetDouble("activeBeforeInclusive");
    m_activeBeforeInclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue ActiveTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_activeAfterInclusiveHasBeenSet)
  {
   payload.WithDouble("activeAfterInclusive", m_activeAfterInclusive.SecondsWithMSPrecision());
  }

  if(m_activeBeforeInclusiveHasBeenSet)
  {
   payload.WithDouble("activeBeforeInclusive", m_activeBeforeInclusive.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Billing
} // namespace Aws
