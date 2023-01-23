/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/MatchRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

MatchRange::MatchRange() : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
}

MatchRange::MatchRange(JsonView jsonValue) : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

MatchRange& MatchRange::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue MatchRange::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
