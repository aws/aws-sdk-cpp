/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateComplianceByConfigRule.h>
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

AggregateComplianceByConfigRule::AggregateComplianceByConfigRule() : 
    m_configRuleNameHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

AggregateComplianceByConfigRule::AggregateComplianceByConfigRule(JsonView jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateComplianceByConfigRule& AggregateComplianceByConfigRule::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateComplianceByConfigRule::Jsonize() const
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

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
