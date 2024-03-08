/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/DateFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

DateFilter::DateFilter() : 
    m_startInclusiveHasBeenSet(false),
    m_endInclusiveHasBeenSet(false)
{
}

DateFilter::DateFilter(JsonView jsonValue) : 
    m_startInclusiveHasBeenSet(false),
    m_endInclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

DateFilter& DateFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartInclusive"))
  {
    m_startInclusive = jsonValue.GetString("StartInclusive");

    m_startInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndInclusive"))
  {
    m_endInclusive = jsonValue.GetString("EndInclusive");

    m_endInclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue DateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_startInclusiveHasBeenSet)
  {
   payload.WithString("StartInclusive", m_startInclusive.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endInclusiveHasBeenSet)
  {
   payload.WithString("EndInclusive", m_endInclusive.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
