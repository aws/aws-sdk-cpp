/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ComplianceByConfigRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ComplianceByConfigRule::ComplianceByConfigRule() : 
    m_configRuleNameHasBeenSet(false),
    m_complianceHasBeenSet(false)
{
}

ComplianceByConfigRule::ComplianceByConfigRule(JsonView jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_complianceHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceByConfigRule& ComplianceByConfigRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");

    m_configRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Compliance"))
  {
    m_compliance = jsonValue.GetObject("Compliance");

    m_complianceHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceByConfigRule::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_complianceHasBeenSet)
  {
   payload.WithObject("Compliance", m_compliance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
