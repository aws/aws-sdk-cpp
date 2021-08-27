/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Statement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/RateBasedStatement.h>
#include <aws/wafv2/model/AndStatement.h>
#include <aws/wafv2/model/OrStatement.h>
#include <aws/wafv2/model/NotStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

Statement::Statement() : 
    m_byteMatchStatementHasBeenSet(false),
    m_sqliMatchStatementHasBeenSet(false),
    m_xssMatchStatementHasBeenSet(false),
    m_sizeConstraintStatementHasBeenSet(false),
    m_geoMatchStatementHasBeenSet(false),
    m_ruleGroupReferenceStatementHasBeenSet(false),
    m_iPSetReferenceStatementHasBeenSet(false),
    m_regexPatternSetReferenceStatementHasBeenSet(false),
    m_rateBasedStatementHasBeenSet(false),
    m_andStatementHasBeenSet(false),
    m_orStatementHasBeenSet(false),
    m_notStatementHasBeenSet(false),
    m_managedRuleGroupStatementHasBeenSet(false)
{
}

Statement::Statement(JsonView jsonValue) : 
    m_byteMatchStatementHasBeenSet(false),
    m_sqliMatchStatementHasBeenSet(false),
    m_xssMatchStatementHasBeenSet(false),
    m_sizeConstraintStatementHasBeenSet(false),
    m_geoMatchStatementHasBeenSet(false),
    m_ruleGroupReferenceStatementHasBeenSet(false),
    m_iPSetReferenceStatementHasBeenSet(false),
    m_regexPatternSetReferenceStatementHasBeenSet(false),
    m_rateBasedStatementHasBeenSet(false),
    m_andStatementHasBeenSet(false),
    m_orStatementHasBeenSet(false),
    m_notStatementHasBeenSet(false),
    m_managedRuleGroupStatementHasBeenSet(false)
{
  *this = jsonValue;
}

const RateBasedStatement& Statement::GetRateBasedStatement() const{ return *m_rateBasedStatement; }
bool Statement::RateBasedStatementHasBeenSet() const { return m_rateBasedStatementHasBeenSet; }
void Statement::SetRateBasedStatement(const RateBasedStatement& value) { m_rateBasedStatementHasBeenSet = true; m_rateBasedStatement = Aws::MakeShared<RateBasedStatement>("Statement", value); }
void Statement::SetRateBasedStatement(RateBasedStatement&& value) { m_rateBasedStatementHasBeenSet = true; m_rateBasedStatement = Aws::MakeShared<RateBasedStatement>("Statement", std::move(value)); }
Statement& Statement::WithRateBasedStatement(const RateBasedStatement& value) { SetRateBasedStatement(value); return *this;}
Statement& Statement::WithRateBasedStatement(RateBasedStatement&& value) { SetRateBasedStatement(std::move(value)); return *this;}

const AndStatement& Statement::GetAndStatement() const{ return *m_andStatement; }
bool Statement::AndStatementHasBeenSet() const { return m_andStatementHasBeenSet; }
void Statement::SetAndStatement(const AndStatement& value) { m_andStatementHasBeenSet = true; m_andStatement = Aws::MakeShared<AndStatement>("Statement", value); }
void Statement::SetAndStatement(AndStatement&& value) { m_andStatementHasBeenSet = true; m_andStatement = Aws::MakeShared<AndStatement>("Statement", std::move(value)); }
Statement& Statement::WithAndStatement(const AndStatement& value) { SetAndStatement(value); return *this;}
Statement& Statement::WithAndStatement(AndStatement&& value) { SetAndStatement(std::move(value)); return *this;}

const OrStatement& Statement::GetOrStatement() const{ return *m_orStatement; }
bool Statement::OrStatementHasBeenSet() const { return m_orStatementHasBeenSet; }
void Statement::SetOrStatement(const OrStatement& value) { m_orStatementHasBeenSet = true; m_orStatement = Aws::MakeShared<OrStatement>("Statement", value); }
void Statement::SetOrStatement(OrStatement&& value) { m_orStatementHasBeenSet = true; m_orStatement = Aws::MakeShared<OrStatement>("Statement", std::move(value)); }
Statement& Statement::WithOrStatement(const OrStatement& value) { SetOrStatement(value); return *this;}
Statement& Statement::WithOrStatement(OrStatement&& value) { SetOrStatement(std::move(value)); return *this;}

const NotStatement& Statement::GetNotStatement() const{ return *m_notStatement; }
bool Statement::NotStatementHasBeenSet() const { return m_notStatementHasBeenSet; }
void Statement::SetNotStatement(const NotStatement& value) { m_notStatementHasBeenSet = true; m_notStatement = Aws::MakeShared<NotStatement>("Statement", value); }
void Statement::SetNotStatement(NotStatement&& value) { m_notStatementHasBeenSet = true; m_notStatement = Aws::MakeShared<NotStatement>("Statement", std::move(value)); }
Statement& Statement::WithNotStatement(const NotStatement& value) { SetNotStatement(value); return *this;}
Statement& Statement::WithNotStatement(NotStatement&& value) { SetNotStatement(std::move(value)); return *this;}

Statement& Statement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ByteMatchStatement"))
  {
    m_byteMatchStatement = jsonValue.GetObject("ByteMatchStatement");

    m_byteMatchStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqliMatchStatement"))
  {
    m_sqliMatchStatement = jsonValue.GetObject("SqliMatchStatement");

    m_sqliMatchStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XssMatchStatement"))
  {
    m_xssMatchStatement = jsonValue.GetObject("XssMatchStatement");

    m_xssMatchStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeConstraintStatement"))
  {
    m_sizeConstraintStatement = jsonValue.GetObject("SizeConstraintStatement");

    m_sizeConstraintStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeoMatchStatement"))
  {
    m_geoMatchStatement = jsonValue.GetObject("GeoMatchStatement");

    m_geoMatchStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupReferenceStatement"))
  {
    m_ruleGroupReferenceStatement = jsonValue.GetObject("RuleGroupReferenceStatement");

    m_ruleGroupReferenceStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPSetReferenceStatement"))
  {
    m_iPSetReferenceStatement = jsonValue.GetObject("IPSetReferenceStatement");

    m_iPSetReferenceStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegexPatternSetReferenceStatement"))
  {
    m_regexPatternSetReferenceStatement = jsonValue.GetObject("RegexPatternSetReferenceStatement");

    m_regexPatternSetReferenceStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RateBasedStatement"))
  {
    m_rateBasedStatement = Aws::MakeShared<RateBasedStatement>("Statement", jsonValue.GetObject("RateBasedStatement"));

    m_rateBasedStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AndStatement"))
  {
    m_andStatement = Aws::MakeShared<AndStatement>("Statement", jsonValue.GetObject("AndStatement"));

    m_andStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrStatement"))
  {
    m_orStatement = Aws::MakeShared<OrStatement>("Statement", jsonValue.GetObject("OrStatement"));

    m_orStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotStatement"))
  {
    m_notStatement = Aws::MakeShared<NotStatement>("Statement", jsonValue.GetObject("NotStatement"));

    m_notStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedRuleGroupStatement"))
  {
    m_managedRuleGroupStatement = jsonValue.GetObject("ManagedRuleGroupStatement");

    m_managedRuleGroupStatementHasBeenSet = true;
  }

  return *this;
}

JsonValue Statement::Jsonize() const
{
  JsonValue payload;

  if(m_byteMatchStatementHasBeenSet)
  {
   payload.WithObject("ByteMatchStatement", m_byteMatchStatement.Jsonize());

  }

  if(m_sqliMatchStatementHasBeenSet)
  {
   payload.WithObject("SqliMatchStatement", m_sqliMatchStatement.Jsonize());

  }

  if(m_xssMatchStatementHasBeenSet)
  {
   payload.WithObject("XssMatchStatement", m_xssMatchStatement.Jsonize());

  }

  if(m_sizeConstraintStatementHasBeenSet)
  {
   payload.WithObject("SizeConstraintStatement", m_sizeConstraintStatement.Jsonize());

  }

  if(m_geoMatchStatementHasBeenSet)
  {
   payload.WithObject("GeoMatchStatement", m_geoMatchStatement.Jsonize());

  }

  if(m_ruleGroupReferenceStatementHasBeenSet)
  {
   payload.WithObject("RuleGroupReferenceStatement", m_ruleGroupReferenceStatement.Jsonize());

  }

  if(m_iPSetReferenceStatementHasBeenSet)
  {
   payload.WithObject("IPSetReferenceStatement", m_iPSetReferenceStatement.Jsonize());

  }

  if(m_regexPatternSetReferenceStatementHasBeenSet)
  {
   payload.WithObject("RegexPatternSetReferenceStatement", m_regexPatternSetReferenceStatement.Jsonize());

  }

  if(m_rateBasedStatementHasBeenSet)
  {
   payload.WithObject("RateBasedStatement", m_rateBasedStatement->Jsonize());

  }

  if(m_andStatementHasBeenSet)
  {
   payload.WithObject("AndStatement", m_andStatement->Jsonize());

  }

  if(m_orStatementHasBeenSet)
  {
   payload.WithObject("OrStatement", m_orStatement->Jsonize());

  }

  if(m_notStatementHasBeenSet)
  {
   payload.WithObject("NotStatement", m_notStatement->Jsonize());

  }

  if(m_managedRuleGroupStatementHasBeenSet)
  {
   payload.WithObject("ManagedRuleGroupStatement", m_managedRuleGroupStatement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
