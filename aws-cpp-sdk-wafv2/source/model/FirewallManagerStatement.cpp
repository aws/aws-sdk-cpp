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

#include <aws/wafv2/model/FirewallManagerStatement.h>
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

FirewallManagerStatement::FirewallManagerStatement() : 
    m_managedRuleGroupStatementHasBeenSet(false),
    m_ruleGroupReferenceStatementHasBeenSet(false)
{
}

FirewallManagerStatement::FirewallManagerStatement(JsonView jsonValue) : 
    m_managedRuleGroupStatementHasBeenSet(false),
    m_ruleGroupReferenceStatementHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallManagerStatement& FirewallManagerStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManagedRuleGroupStatement"))
  {
    m_managedRuleGroupStatement = jsonValue.GetObject("ManagedRuleGroupStatement");

    m_managedRuleGroupStatementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupReferenceStatement"))
  {
    m_ruleGroupReferenceStatement = jsonValue.GetObject("RuleGroupReferenceStatement");

    m_ruleGroupReferenceStatementHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallManagerStatement::Jsonize() const
{
  JsonValue payload;

  if(m_managedRuleGroupStatementHasBeenSet)
  {
   payload.WithObject("ManagedRuleGroupStatement", m_managedRuleGroupStatement.Jsonize());

  }

  if(m_ruleGroupReferenceStatementHasBeenSet)
  {
   payload.WithObject("RuleGroupReferenceStatement", m_ruleGroupReferenceStatement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
