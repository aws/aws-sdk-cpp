/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/LogPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

LogPattern::LogPattern() : 
    m_patternSetNameHasBeenSet(false),
    m_patternNameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false)
{
}

LogPattern::LogPattern(JsonView jsonValue) : 
    m_patternSetNameHasBeenSet(false),
    m_patternNameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_rank(0),
    m_rankHasBeenSet(false)
{
  *this = jsonValue;
}

LogPattern& LogPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PatternSetName"))
  {
    m_patternSetName = jsonValue.GetString("PatternSetName");

    m_patternSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatternName"))
  {
    m_patternName = jsonValue.GetString("PatternName");

    m_patternNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pattern"))
  {
    m_pattern = jsonValue.GetString("Pattern");

    m_patternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rank"))
  {
    m_rank = jsonValue.GetInteger("Rank");

    m_rankHasBeenSet = true;
  }

  return *this;
}

JsonValue LogPattern::Jsonize() const
{
  JsonValue payload;

  if(m_patternSetNameHasBeenSet)
  {
   payload.WithString("PatternSetName", m_patternSetName);

  }

  if(m_patternNameHasBeenSet)
  {
   payload.WithString("PatternName", m_patternName);

  }

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", m_pattern);

  }

  if(m_rankHasBeenSet)
  {
   payload.WithInteger("Rank", m_rank);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
