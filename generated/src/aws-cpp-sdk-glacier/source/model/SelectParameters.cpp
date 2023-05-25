/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/SelectParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

SelectParameters::SelectParameters() : 
    m_inputSerializationHasBeenSet(false),
    m_expressionType(ExpressionType::NOT_SET),
    m_expressionTypeHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_outputSerializationHasBeenSet(false)
{
}

SelectParameters::SelectParameters(JsonView jsonValue) : 
    m_inputSerializationHasBeenSet(false),
    m_expressionType(ExpressionType::NOT_SET),
    m_expressionTypeHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_outputSerializationHasBeenSet(false)
{
  *this = jsonValue;
}

SelectParameters& SelectParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputSerialization"))
  {
    m_inputSerialization = jsonValue.GetObject("InputSerialization");

    m_inputSerializationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpressionType"))
  {
    m_expressionType = ExpressionTypeMapper::GetExpressionTypeForName(jsonValue.GetString("ExpressionType"));

    m_expressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputSerialization"))
  {
    m_outputSerialization = jsonValue.GetObject("OutputSerialization");

    m_outputSerializationHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectParameters::Jsonize() const
{
  JsonValue payload;

  if(m_inputSerializationHasBeenSet)
  {
   payload.WithObject("InputSerialization", m_inputSerialization.Jsonize());

  }

  if(m_expressionTypeHasBeenSet)
  {
   payload.WithString("ExpressionType", ExpressionTypeMapper::GetNameForExpressionType(m_expressionType));
  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_outputSerializationHasBeenSet)
  {
   payload.WithObject("OutputSerialization", m_outputSerialization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
