/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

SelectParameters::SelectParameters(const JsonValue& jsonValue) : 
    m_inputSerializationHasBeenSet(false),
    m_expressionType(ExpressionType::NOT_SET),
    m_expressionTypeHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_outputSerializationHasBeenSet(false)
{
  *this = jsonValue;
}

SelectParameters& SelectParameters::operator =(const JsonValue& jsonValue)
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
