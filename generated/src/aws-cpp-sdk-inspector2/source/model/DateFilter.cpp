/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DateFilter.h>
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

DateFilter::DateFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

DateFilter& DateFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startInclusive"))
  {
    m_startInclusive = jsonValue.GetDouble("startInclusive");
    m_startInclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endInclusive"))
  {
    m_endInclusive = jsonValue.GetDouble("endInclusive");
    m_endInclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue DateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_startInclusiveHasBeenSet)
  {
   payload.WithDouble("startInclusive", m_startInclusive.SecondsWithMSPrecision());
  }

  if(m_endInclusiveHasBeenSet)
  {
   payload.WithDouble("endInclusive", m_endInclusive.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
