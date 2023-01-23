/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PortRangeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

PortRangeFilter::PortRangeFilter() : 
    m_beginInclusive(0),
    m_beginInclusiveHasBeenSet(false),
    m_endInclusive(0),
    m_endInclusiveHasBeenSet(false)
{
}

PortRangeFilter::PortRangeFilter(JsonView jsonValue) : 
    m_beginInclusive(0),
    m_beginInclusiveHasBeenSet(false),
    m_endInclusive(0),
    m_endInclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

PortRangeFilter& PortRangeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("beginInclusive"))
  {
    m_beginInclusive = jsonValue.GetInteger("beginInclusive");

    m_beginInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endInclusive"))
  {
    m_endInclusive = jsonValue.GetInteger("endInclusive");

    m_endInclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue PortRangeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_beginInclusiveHasBeenSet)
  {
   payload.WithInteger("beginInclusive", m_beginInclusive);

  }

  if(m_endInclusiveHasBeenSet)
  {
   payload.WithInteger("endInclusive", m_endInclusive);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
