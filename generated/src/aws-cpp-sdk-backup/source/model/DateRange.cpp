/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DateRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

DateRange::DateRange() : 
    m_fromDateHasBeenSet(false),
    m_toDateHasBeenSet(false)
{
}

DateRange::DateRange(JsonView jsonValue) : 
    m_fromDateHasBeenSet(false),
    m_toDateHasBeenSet(false)
{
  *this = jsonValue;
}

DateRange& DateRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromDate"))
  {
    m_fromDate = jsonValue.GetDouble("FromDate");

    m_fromDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToDate"))
  {
    m_toDate = jsonValue.GetDouble("ToDate");

    m_toDateHasBeenSet = true;
  }

  return *this;
}

JsonValue DateRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromDateHasBeenSet)
  {
   payload.WithDouble("FromDate", m_fromDate.SecondsWithMSPrecision());
  }

  if(m_toDateHasBeenSet)
  {
   payload.WithDouble("ToDate", m_toDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
