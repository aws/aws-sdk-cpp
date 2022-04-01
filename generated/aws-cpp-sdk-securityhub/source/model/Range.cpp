/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Range.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Range::Range() : 
    m_start(0),
    m_startHasBeenSet(false),
    m_end(0),
    m_endHasBeenSet(false),
    m_startColumn(0),
    m_startColumnHasBeenSet(false)
{
}

Range::Range(JsonView jsonValue) : 
    m_start(0),
    m_startHasBeenSet(false),
    m_end(0),
    m_endHasBeenSet(false),
    m_startColumn(0),
    m_startColumnHasBeenSet(false)
{
  *this = jsonValue;
}

Range& Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetInt64("Start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetInt64("End");

    m_endHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartColumn"))
  {
    m_startColumn = jsonValue.GetInt64("StartColumn");

    m_startColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue Range::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithInt64("Start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInt64("End", m_end);

  }

  if(m_startColumnHasBeenSet)
  {
   payload.WithInt64("StartColumn", m_startColumn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
