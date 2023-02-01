/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AggregationConstraint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AggregationConstraint::AggregationConstraint() : 
    m_columnNameHasBeenSet(false),
    m_minimum(0),
    m_minimumHasBeenSet(false),
    m_type(AggregationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AggregationConstraint::AggregationConstraint(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_minimum(0),
    m_minimumHasBeenSet(false),
    m_type(AggregationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AggregationConstraint& AggregationConstraint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetInteger("minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AggregationTypeMapper::GetAggregationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregationConstraint::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithInteger("minimum", m_minimum);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AggregationTypeMapper::GetNameForAggregationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
