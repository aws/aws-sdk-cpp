/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/SectionModification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

SectionModification::SectionModification() : 
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_sectionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

SectionModification::SectionModification(JsonView jsonValue) : 
    m_operation(Operation::NOT_SET),
    m_operationHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_sectionHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

SectionModification& SectionModification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = OperationMapper::GetOperationForName(jsonValue.GetString("Operation"));

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Section"))
  {
    m_section = jsonValue.GetString("Section");

    m_sectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionModification::Jsonize() const
{
  JsonValue payload;

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", OperationMapper::GetNameForOperation(m_operation));
  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_sectionHasBeenSet)
  {
   payload.WithString("Section", m_section);

  }

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("Value", JsonValue(m_value.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
