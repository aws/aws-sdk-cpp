/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

Rule::Rule() : 
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_predicatesHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_predicatesHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Predicates"))
  {
    Aws::Utils::Array<JsonView> predicatesJsonList = jsonValue.GetArray("Predicates");
    for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
    {
      m_predicates.push_back(predicatesJsonList[predicatesIndex].AsObject());
    }
    m_predicatesHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_predicatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predicatesJsonList(m_predicates.size());
   for(unsigned predicatesIndex = 0; predicatesIndex < predicatesJsonList.GetLength(); ++predicatesIndex)
   {
     predicatesJsonList[predicatesIndex].AsObject(m_predicates[predicatesIndex].Jsonize());
   }
   payload.WithArray("Predicates", std::move(predicatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
