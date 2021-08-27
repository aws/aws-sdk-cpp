/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Range.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Range::Range() : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false),
    m_startColumn(0),
    m_startColumnHasBeenSet(false)
{
}

Range::Range(JsonView jsonValue) : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false),
    m_startColumn(0),
    m_startColumnHasBeenSet(false)
{
  *this = jsonValue;
}

Range& Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetInt64("end");

    m_endHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetInt64("start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startColumn"))
  {
    m_startColumn = jsonValue.GetInt64("startColumn");

    m_startColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue Range::Jsonize() const
{
  JsonValue payload;

  if(m_endHasBeenSet)
  {
   payload.WithInt64("end", m_end);

  }

  if(m_startHasBeenSet)
  {
   payload.WithInt64("start", m_start);

  }

  if(m_startColumnHasBeenSet)
  {
   payload.WithInt64("startColumn", m_startColumn);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
