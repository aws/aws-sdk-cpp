/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateBasedStatement.h>
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

RateBasedStatement::RateBasedStatement() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_aggregateKeyType(RateBasedStatementAggregateKeyType::NOT_SET),
    m_aggregateKeyTypeHasBeenSet(false),
    m_scopeDownStatementHasBeenSet(false)
{
}

RateBasedStatement::RateBasedStatement(JsonView jsonValue) : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_aggregateKeyType(RateBasedStatementAggregateKeyType::NOT_SET),
    m_aggregateKeyTypeHasBeenSet(false),
    m_scopeDownStatementHasBeenSet(false)
{
  *this = jsonValue;
}

const Statement& RateBasedStatement::GetScopeDownStatement() const{ return m_scopeDownStatement[0]; }
bool RateBasedStatement::ScopeDownStatementHasBeenSet() const { return m_scopeDownStatementHasBeenSet; }
void RateBasedStatement::SetScopeDownStatement(const Statement& value) { m_scopeDownStatementHasBeenSet = true; m_scopeDownStatement.resize(1); m_scopeDownStatement[0] = value; }
void RateBasedStatement::SetScopeDownStatement(Statement&& value) { m_scopeDownStatementHasBeenSet = true; m_scopeDownStatement.resize(1); m_scopeDownStatement[0] = std::move(value); }
RateBasedStatement& RateBasedStatement::WithScopeDownStatement(const Statement& value) { SetScopeDownStatement(value); return *this;}
RateBasedStatement& RateBasedStatement::WithScopeDownStatement(Statement&& value) { SetScopeDownStatement(std::move(value)); return *this;}

RateBasedStatement& RateBasedStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInt64("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregateKeyType"))
  {
    m_aggregateKeyType = RateBasedStatementAggregateKeyTypeMapper::GetRateBasedStatementAggregateKeyTypeForName(jsonValue.GetString("AggregateKeyType"));

    m_aggregateKeyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScopeDownStatement"))
  {
    m_scopeDownStatement.resize(1);
    m_scopeDownStatement[0] = jsonValue.GetObject("ScopeDownStatement");

    m_scopeDownStatementHasBeenSet = true;
  }

  return *this;
}

JsonValue RateBasedStatement::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInt64("Limit", m_limit);

  }

  if(m_aggregateKeyTypeHasBeenSet)
  {
   payload.WithString("AggregateKeyType", RateBasedStatementAggregateKeyTypeMapper::GetNameForRateBasedStatementAggregateKeyType(m_aggregateKeyType));
  }

  if(m_scopeDownStatementHasBeenSet)
  {
   payload.WithObject("ScopeDownStatement", m_scopeDownStatement[0].Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
