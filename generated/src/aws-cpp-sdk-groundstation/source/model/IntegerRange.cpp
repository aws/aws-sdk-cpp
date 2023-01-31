/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/IntegerRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

IntegerRange::IntegerRange() : 
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_minimum(0),
    m_minimumHasBeenSet(false)
{
}

IntegerRange::IntegerRange(JsonView jsonValue) : 
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_minimum(0),
    m_minimumHasBeenSet(false)
{
  *this = jsonValue;
}

IntegerRange& IntegerRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetInteger("maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetInteger("minimum");

    m_minimumHasBeenSet = true;
  }

  return *this;
}

JsonValue IntegerRange::Jsonize() const
{
  JsonValue payload;

  if(m_maximumHasBeenSet)
  {
   payload.WithInteger("maximum", m_maximum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithInteger("minimum", m_minimum);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
