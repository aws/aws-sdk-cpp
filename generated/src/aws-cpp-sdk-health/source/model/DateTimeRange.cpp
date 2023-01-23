/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DateTimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

DateTimeRange::DateTimeRange() : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

DateTimeRange::DateTimeRange(JsonView jsonValue) : 
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeRange& DateTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetDouble("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetDouble("to");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithDouble("from", m_from.SecondsWithMSPrecision());
  }

  if(m_toHasBeenSet)
  {
   payload.WithDouble("to", m_to.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
