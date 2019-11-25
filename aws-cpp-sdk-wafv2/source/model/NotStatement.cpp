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

#include <aws/wafv2/model/NotStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

NotStatement::NotStatement() : 
    m_statementHasBeenSet(false)
{
}

NotStatement::NotStatement(JsonView jsonValue) : 
    m_statementHasBeenSet(false)
{
  *this = jsonValue;
}

const Statement& NotStatement::GetStatement() const{ return m_statement[0]; }
bool NotStatement::StatementHasBeenSet() const { return m_statementHasBeenSet; }
void NotStatement::SetStatement(const Statement& value) { m_statementHasBeenSet = true; m_statement.resize(1); m_statement[0] = value; }
void NotStatement::SetStatement(Statement&& value) { m_statementHasBeenSet = true; m_statement.resize(1); m_statement[0] = std::move(value); }
NotStatement& NotStatement::WithStatement(const Statement& value) { SetStatement(value); return *this;}
NotStatement& NotStatement::WithStatement(Statement&& value) { SetStatement(std::move(value)); return *this;}

NotStatement& NotStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statement"))
  {
    m_statement.resize(1);
    m_statement[0] = jsonValue.GetObject("Statement");

    m_statementHasBeenSet = true;
  }

  return *this;
}

JsonValue NotStatement::Jsonize() const
{
  JsonValue payload;

  if(m_statementHasBeenSet)
  {
   payload.WithObject("Statement", m_statement[0].Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
