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

#include <aws/wafv2/model/Statement.h>
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

const RateBasedStatement& Statement::GetRateBasedStatement() const{ return m_rateBasedStatement[0]; }
bool Statement::RateBasedStatementHasBeenSet() const { return m_rateBasedStatementHasBeenSet; }
void Statement::SetRateBasedStatement(const RateBasedStatement& value) { m_rateBasedStatementHasBeenSet = true; m_rateBasedStatement.resize(1); m_rateBasedStatement[0] = value; }
void Statement::SetRateBasedStatement(RateBasedStatement&& value) { m_rateBasedStatementHasBeenSet = true; m_rateBasedStatement.resize(1); m_rateBasedStatement[0] = std::move(value); }
Statement& Statement::WithRateBasedStatement(const RateBasedStatement& value) { SetRateBasedStatement(value); return *this;}
Statement& Statement::WithRateBasedStatement(RateBasedStatement&& value) { SetRateBasedStatement(std::move(value)); return *this;}

const NotStatement& Statement::GetNotStatement() const{ return m_notStatement[0]; }
bool Statement::NotStatementHasBeenSet() const { return m_notStatementHasBeenSet; }
void Statement::SetNotStatement(const NotStatement& value) { m_notStatementHasBeenSet = true; m_notStatement.resize(1); m_notStatement[0] = value; }
void Statement::SetNotStatement(NotStatement&& value) { m_notStatementHasBeenSet = true; m_notStatement.resize(1); m_notStatement[0] = std::move(value); }
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
    m_rateBasedStatement.resize(1);
    m_rateBasedStatement[0] = jsonValue.GetObject("RateBasedStatement");

    m_rateBasedStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AndStatement"))
  {
    m_andStatement = jsonValue.GetObject("AndStatement");

    m_andStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrStatement"))
  {
    m_orStatement = jsonValue.GetObject("OrStatement");

    m_orStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotStatement"))
  {
    m_notStatement.resize(1);
    m_notStatement[0] = jsonValue.GetObject("NotStatement");

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
   payload.WithObject("RateBasedStatement", m_rateBasedStatement[0].Jsonize());

  }

  if(m_andStatementHasBeenSet)
  {
   payload.WithObject("AndStatement", m_andStatement.Jsonize());

  }

  if(m_orStatementHasBeenSet)
  {
   payload.WithObject("OrStatement", m_orStatement.Jsonize());

  }

  if(m_notStatementHasBeenSet)
  {
   payload.WithObject("NotStatement", m_notStatement[0].Jsonize());

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
