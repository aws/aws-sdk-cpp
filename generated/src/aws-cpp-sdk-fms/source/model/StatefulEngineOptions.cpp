/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/StatefulEngineOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

StatefulEngineOptions::StatefulEngineOptions() : 
    m_ruleOrder(RuleOrder::NOT_SET),
    m_ruleOrderHasBeenSet(false)
{
}

StatefulEngineOptions::StatefulEngineOptions(JsonView jsonValue) : 
    m_ruleOrder(RuleOrder::NOT_SET),
    m_ruleOrderHasBeenSet(false)
{
  *this = jsonValue;
}

StatefulEngineOptions& StatefulEngineOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleOrder"))
  {
    m_ruleOrder = RuleOrderMapper::GetRuleOrderForName(jsonValue.GetString("RuleOrder"));

    m_ruleOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue StatefulEngineOptions::Jsonize() const
{
  JsonValue payload;

  if(m_ruleOrderHasBeenSet)
  {
   payload.WithString("RuleOrder", RuleOrderMapper::GetNameForRuleOrder(m_ruleOrder));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
