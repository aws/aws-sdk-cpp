/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DurationRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

DurationRange::DurationRange() : 
    m_minSeconds(0),
    m_minSecondsHasBeenSet(false),
    m_maxSeconds(0),
    m_maxSecondsHasBeenSet(false)
{
}

DurationRange::DurationRange(JsonView jsonValue) : 
    m_minSeconds(0),
    m_minSecondsHasBeenSet(false),
    m_maxSeconds(0),
    m_maxSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

DurationRange& DurationRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minSeconds"))
  {
    m_minSeconds = jsonValue.GetInteger("minSeconds");

    m_minSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSeconds"))
  {
    m_maxSeconds = jsonValue.GetInteger("maxSeconds");

    m_maxSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue DurationRange::Jsonize() const
{
  JsonValue payload;

  if(m_minSecondsHasBeenSet)
  {
   payload.WithInteger("minSeconds", m_minSeconds);

  }

  if(m_maxSecondsHasBeenSet)
  {
   payload.WithInteger("maxSeconds", m_maxSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
