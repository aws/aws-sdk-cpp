/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Predicate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Predicate::Predicate() : 
    m_logical(Logical::NOT_SET),
    m_logicalHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

Predicate::Predicate(JsonView jsonValue) : 
    m_logical(Logical::NOT_SET),
    m_logicalHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
  *this = jsonValue;
}

Predicate& Predicate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Logical"))
  {
    m_logical = LogicalMapper::GetLogicalForName(jsonValue.GetString("Logical"));

    m_logicalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("Conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Predicate::Jsonize() const
{
  JsonValue payload;

  if(m_logicalHasBeenSet)
  {
   payload.WithString("Logical", LogicalMapper::GetNameForLogical(m_logical));
  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("Conditions", std::move(conditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
