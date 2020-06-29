/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
