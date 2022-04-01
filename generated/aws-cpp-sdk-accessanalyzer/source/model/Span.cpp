/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Span.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Span::Span() : 
    m_endHasBeenSet(false),
    m_startHasBeenSet(false)
{
}

Span::Span(JsonView jsonValue) : 
    m_endHasBeenSet(false),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

Span& Span::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetObject("end");

    m_endHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetObject("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue Span::Jsonize() const
{
  JsonValue payload;

  if(m_endHasBeenSet)
  {
   payload.WithObject("end", m_end.Jsonize());

  }

  if(m_startHasBeenSet)
  {
   payload.WithObject("start", m_start.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
