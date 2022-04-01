﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ParameterizedStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ParameterizedStatement::ParameterizedStatement() : 
    m_statementHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

ParameterizedStatement::ParameterizedStatement(JsonView jsonValue) : 
    m_statementHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterizedStatement& ParameterizedStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statement"))
  {
    m_statement = jsonValue.GetString("Statement");

    m_statementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterizedStatement::Jsonize() const
{
  JsonValue payload;

  if(m_statementHasBeenSet)
  {
   payload.WithString("Statement", m_statement);

  }

  if(m_parametersHasBeenSet)
  {
   Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
