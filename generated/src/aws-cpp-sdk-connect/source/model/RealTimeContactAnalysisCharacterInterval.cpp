/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisCharacterInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RealTimeContactAnalysisCharacterInterval::RealTimeContactAnalysisCharacterInterval() : 
    m_beginOffsetChar(0),
    m_beginOffsetCharHasBeenSet(false),
    m_endOffsetChar(0),
    m_endOffsetCharHasBeenSet(false)
{
}

RealTimeContactAnalysisCharacterInterval::RealTimeContactAnalysisCharacterInterval(JsonView jsonValue) : 
    m_beginOffsetChar(0),
    m_beginOffsetCharHasBeenSet(false),
    m_endOffsetChar(0),
    m_endOffsetCharHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisCharacterInterval& RealTimeContactAnalysisCharacterInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BeginOffsetChar"))
  {
    m_beginOffsetChar = jsonValue.GetInteger("BeginOffsetChar");

    m_beginOffsetCharHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffsetChar"))
  {
    m_endOffsetChar = jsonValue.GetInteger("EndOffsetChar");

    m_endOffsetCharHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisCharacterInterval::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetCharHasBeenSet)
  {
   payload.WithInteger("BeginOffsetChar", m_beginOffsetChar);

  }

  if(m_endOffsetCharHasBeenSet)
  {
   payload.WithInteger("EndOffsetChar", m_endOffsetChar);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
