﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressIpv4Expression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressIpv4Expression::IngressIpv4Expression() : 
    m_evaluateHasBeenSet(false),
    m_operator(IngressIpOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

IngressIpv4Expression::IngressIpv4Expression(JsonView jsonValue)
  : IngressIpv4Expression()
{
  *this = jsonValue;
}

IngressIpv4Expression& IngressIpv4Expression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Evaluate"))
  {
    m_evaluate = jsonValue.GetObject("Evaluate");

    m_evaluateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = IngressIpOperatorMapper::GetIngressIpOperatorForName(jsonValue.GetString("Operator"));

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

JsonValue IngressIpv4Expression::Jsonize() const
{
  JsonValue payload;

  if(m_evaluateHasBeenSet)
  {
   payload.WithObject("Evaluate", m_evaluate.Jsonize());

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", IngressIpOperatorMapper::GetNameForIngressIpOperator(m_operator));
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
} // namespace MailManager
} // namespace Aws
