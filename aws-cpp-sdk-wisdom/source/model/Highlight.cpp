/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/Highlight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

Highlight::Highlight() : 
    m_beginOffsetInclusive(0),
    m_beginOffsetInclusiveHasBeenSet(false),
    m_endOffsetExclusive(0),
    m_endOffsetExclusiveHasBeenSet(false)
{
}

Highlight::Highlight(JsonView jsonValue) : 
    m_beginOffsetInclusive(0),
    m_beginOffsetInclusiveHasBeenSet(false),
    m_endOffsetExclusive(0),
    m_endOffsetExclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

Highlight& Highlight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("beginOffsetInclusive"))
  {
    m_beginOffsetInclusive = jsonValue.GetInteger("beginOffsetInclusive");

    m_beginOffsetInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endOffsetExclusive"))
  {
    m_endOffsetExclusive = jsonValue.GetInteger("endOffsetExclusive");

    m_endOffsetExclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue Highlight::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetInclusiveHasBeenSet)
  {
   payload.WithInteger("beginOffsetInclusive", m_beginOffsetInclusive);

  }

  if(m_endOffsetExclusiveHasBeenSet)
  {
   payload.WithInteger("endOffsetExclusive", m_endOffsetExclusive);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
