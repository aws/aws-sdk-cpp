/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/PointOfInterest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectContactLens
{
namespace Model
{

PointOfInterest::PointOfInterest() : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false)
{
}

PointOfInterest::PointOfInterest(JsonView jsonValue) : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false)
{
  *this = jsonValue;
}

PointOfInterest& PointOfInterest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BeginOffsetMillis"))
  {
    m_beginOffsetMillis = jsonValue.GetInteger("BeginOffsetMillis");

    m_beginOffsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffsetMillis"))
  {
    m_endOffsetMillis = jsonValue.GetInteger("EndOffsetMillis");

    m_endOffsetMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue PointOfInterest::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetMillisHasBeenSet)
  {
   payload.WithInteger("BeginOffsetMillis", m_beginOffsetMillis);

  }

  if(m_endOffsetMillisHasBeenSet)
  {
   payload.WithInteger("EndOffsetMillis", m_endOffsetMillis);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
