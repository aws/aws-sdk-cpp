/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecyclePolicyDetailFilter::LifecyclePolicyDetailFilter() : 
    m_type(LifecyclePolicyDetailFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(LifecyclePolicyTimeUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_retainAtLeast(0),
    m_retainAtLeastHasBeenSet(false)
{
}

LifecyclePolicyDetailFilter::LifecyclePolicyDetailFilter(JsonView jsonValue) : 
    m_type(LifecyclePolicyDetailFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(LifecyclePolicyTimeUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_retainAtLeast(0),
    m_retainAtLeastHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyDetailFilter& LifecyclePolicyDetailFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = LifecyclePolicyDetailFilterTypeMapper::GetLifecyclePolicyDetailFilterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = LifecyclePolicyTimeUnitMapper::GetLifecyclePolicyTimeUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retainAtLeast"))
  {
    m_retainAtLeast = jsonValue.GetInteger("retainAtLeast");

    m_retainAtLeastHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyDetailFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LifecyclePolicyDetailFilterTypeMapper::GetNameForLifecyclePolicyDetailFilterType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", LifecyclePolicyTimeUnitMapper::GetNameForLifecyclePolicyTimeUnit(m_unit));
  }

  if(m_retainAtLeastHasBeenSet)
  {
   payload.WithInteger("retainAtLeast", m_retainAtLeast);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
