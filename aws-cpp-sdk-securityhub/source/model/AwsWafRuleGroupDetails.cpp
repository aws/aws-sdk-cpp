/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRuleGroupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsWafRuleGroupDetails::AwsWafRuleGroupDetails() : 
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

AwsWafRuleGroupDetails::AwsWafRuleGroupDetails(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRuleGroupDetails& AwsWafRuleGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupId"))
  {
    m_ruleGroupId = jsonValue.GetString("RuleGroupId");

    m_ruleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRuleGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleGroupIdHasBeenSet)
  {
   payload.WithString("RuleGroupId", m_ruleGroupId);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
