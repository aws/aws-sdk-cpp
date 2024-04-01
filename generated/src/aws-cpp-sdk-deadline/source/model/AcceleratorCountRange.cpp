/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AcceleratorCountRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

AcceleratorCountRange::AcceleratorCountRange() : 
    m_max(0),
    m_maxHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false)
{
}

AcceleratorCountRange::AcceleratorCountRange(JsonView jsonValue) : 
    m_max(0),
    m_maxHasBeenSet(false),
    m_min(0),
    m_minHasBeenSet(false)
{
  *this = jsonValue;
}

AcceleratorCountRange& AcceleratorCountRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetInteger("max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetInteger("min");

    m_minHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceleratorCountRange::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithInteger("max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithInteger("min", m_min);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
