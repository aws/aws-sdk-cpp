/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/Range.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

Range::Range() : 
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false)
{
}

Range::Range(JsonView jsonValue) : 
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false)
{
  *this = jsonValue;
}

Range& Range::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetDouble("maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetDouble("minimum");

    m_minimumHasBeenSet = true;
  }

  return *this;
}

JsonValue Range::Jsonize() const
{
  JsonValue payload;

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("maximum", m_maximum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("minimum", m_minimum);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
