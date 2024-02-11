/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ControlCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

ControlCondition::ControlCondition() : 
    m_alarmIdentifierHasBeenSet(false),
    m_type(ControlConditionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ControlCondition::ControlCondition(JsonView jsonValue) : 
    m_alarmIdentifierHasBeenSet(false),
    m_type(ControlConditionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ControlCondition& ControlCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmIdentifier"))
  {
    m_alarmIdentifier = jsonValue.GetString("alarmIdentifier");

    m_alarmIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ControlConditionTypeMapper::GetControlConditionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlCondition::Jsonize() const
{
  JsonValue payload;

  if(m_alarmIdentifierHasBeenSet)
  {
   payload.WithString("alarmIdentifier", m_alarmIdentifier);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ControlConditionTypeMapper::GetNameForControlConditionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
