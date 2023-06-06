/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoverageDateFilter.h>
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

CoverageDateFilter::CoverageDateFilter() : 
    m_endInclusiveHasBeenSet(false),
    m_startInclusiveHasBeenSet(false)
{
}

CoverageDateFilter::CoverageDateFilter(JsonView jsonValue) : 
    m_endInclusiveHasBeenSet(false),
    m_startInclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageDateFilter& CoverageDateFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endInclusive"))
  {
    m_endInclusive = jsonValue.GetDouble("endInclusive");

    m_endInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startInclusive"))
  {
    m_startInclusive = jsonValue.GetDouble("startInclusive");

    m_startInclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageDateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_endInclusiveHasBeenSet)
  {
   payload.WithDouble("endInclusive", m_endInclusive.SecondsWithMSPrecision());
  }

  if(m_startInclusiveHasBeenSet)
  {
   payload.WithDouble("startInclusive", m_startInclusive.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
