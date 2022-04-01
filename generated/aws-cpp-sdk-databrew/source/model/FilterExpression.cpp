/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/FilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

FilterExpression::FilterExpression() : 
    m_expressionHasBeenSet(false),
    m_valuesMapHasBeenSet(false)
{
}

FilterExpression::FilterExpression(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_valuesMapHasBeenSet(false)
{
  *this = jsonValue;
}

FilterExpression& FilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValuesMap"))
  {
    Aws::Map<Aws::String, JsonView> valuesMapJsonMap = jsonValue.GetObject("ValuesMap").GetAllObjects();
    for(auto& valuesMapItem : valuesMapJsonMap)
    {
      m_valuesMap[valuesMapItem.first] = valuesMapItem.second.AsString();
    }
    m_valuesMapHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_valuesMapHasBeenSet)
  {
   JsonValue valuesMapJsonMap;
   for(auto& valuesMapItem : m_valuesMap)
   {
     valuesMapJsonMap.WithString(valuesMapItem.first, valuesMapItem.second);
   }
   payload.WithObject("ValuesMap", std::move(valuesMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
