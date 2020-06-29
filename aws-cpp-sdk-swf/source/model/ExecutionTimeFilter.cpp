/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ExecutionTimeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

ExecutionTimeFilter::ExecutionTimeFilter() : 
    m_oldestDateHasBeenSet(false),
    m_latestDateHasBeenSet(false)
{
}

ExecutionTimeFilter::ExecutionTimeFilter(JsonView jsonValue) : 
    m_oldestDateHasBeenSet(false),
    m_latestDateHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionTimeFilter& ExecutionTimeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oldestDate"))
  {
    m_oldestDate = jsonValue.GetDouble("oldestDate");

    m_oldestDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestDate"))
  {
    m_latestDate = jsonValue.GetDouble("latestDate");

    m_latestDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionTimeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_oldestDateHasBeenSet)
  {
   payload.WithDouble("oldestDate", m_oldestDate.SecondsWithMSPrecision());
  }

  if(m_latestDateHasBeenSet)
  {
   payload.WithDouble("latestDate", m_latestDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
