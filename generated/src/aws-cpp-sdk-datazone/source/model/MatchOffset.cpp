/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MatchOffset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

MatchOffset::MatchOffset(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchOffset& MatchOffset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endOffset"))
  {
    m_endOffset = jsonValue.GetInteger("endOffset");
    m_endOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startOffset"))
  {
    m_startOffset = jsonValue.GetInteger("startOffset");
    m_startOffsetHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchOffset::Jsonize() const
{
  JsonValue payload;

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("endOffset", m_endOffset);

  }

  if(m_startOffsetHasBeenSet)
  {
   payload.WithInteger("startOffset", m_startOffset);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
