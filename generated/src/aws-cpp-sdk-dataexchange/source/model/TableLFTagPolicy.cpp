/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/TableLFTagPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

TableLFTagPolicy::TableLFTagPolicy() : 
    m_expressionHasBeenSet(false)
{
}

TableLFTagPolicy::TableLFTagPolicy(JsonView jsonValue) : 
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

TableLFTagPolicy& TableLFTagPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    Aws::Utils::Array<JsonView> expressionJsonList = jsonValue.GetArray("Expression");
    for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
    {
      m_expression.push_back(expressionJsonList[expressionIndex].AsObject());
    }
    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue TableLFTagPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expressionJsonList(m_expression.size());
   for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
   {
     expressionJsonList[expressionIndex].AsObject(m_expression[expressionIndex].Jsonize());
   }
   payload.WithArray("Expression", std::move(expressionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
