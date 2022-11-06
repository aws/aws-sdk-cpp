/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FilterExpression.h>
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

FilterExpression::FilterExpression() : 
    m_operation(FilterOperation::NOT_SET),
    m_operationHasBeenSet(false),
    m_negated(false),
    m_negatedHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

FilterExpression::FilterExpression(JsonView jsonValue) : 
    m_operation(FilterOperation::NOT_SET),
    m_operationHasBeenSet(false),
    m_negated(false),
    m_negatedHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

FilterExpression& FilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = FilterOperationMapper::GetFilterOperationForName(jsonValue.GetString("Operation"));

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Negated"))
  {
    m_negated = jsonValue.GetBool("Negated");

    m_negatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", FilterOperationMapper::GetNameForFilterOperation(m_operation));
  }

  if(m_negatedHasBeenSet)
  {
   payload.WithBool("Negated", m_negated);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
