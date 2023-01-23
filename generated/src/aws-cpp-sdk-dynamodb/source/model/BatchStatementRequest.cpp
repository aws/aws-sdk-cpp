/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchStatementRequest.h>
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

BatchStatementRequest::BatchStatementRequest() : 
    m_statementHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
}

BatchStatementRequest::BatchStatementRequest(JsonView jsonValue) : 
    m_statementHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
  *this = jsonValue;
}

BatchStatementRequest& BatchStatementRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statement"))
  {
    m_statement = jsonValue.GetString("Statement");

    m_statementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsistentRead"))
  {
    m_consistentRead = jsonValue.GetBool("ConsistentRead");

    m_consistentReadHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchStatementRequest::Jsonize() const
{
  JsonValue payload;

  if(m_statementHasBeenSet)
  {
   payload.WithString("Statement", m_statement);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  if(m_consistentReadHasBeenSet)
  {
   payload.WithBool("ConsistentRead", m_consistentRead);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
