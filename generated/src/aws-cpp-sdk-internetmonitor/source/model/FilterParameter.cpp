/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/FilterParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

FilterParameter::FilterParameter() : 
    m_fieldHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

FilterParameter::FilterParameter(JsonView jsonValue) : 
    m_fieldHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

FilterParameter& FilterParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = jsonValue.GetString("Field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = OperatorMapper::GetOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterParameter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("Field", m_field);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", OperatorMapper::GetNameForOperator(m_operator));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
