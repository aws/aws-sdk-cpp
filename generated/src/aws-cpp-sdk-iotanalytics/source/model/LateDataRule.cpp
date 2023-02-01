/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/LateDataRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

LateDataRule::LateDataRule() : 
    m_ruleNameHasBeenSet(false),
    m_ruleConfigurationHasBeenSet(false)
{
}

LateDataRule::LateDataRule(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_ruleConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LateDataRule& LateDataRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleConfiguration"))
  {
    m_ruleConfiguration = jsonValue.GetObject("ruleConfiguration");

    m_ruleConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LateDataRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_ruleConfigurationHasBeenSet)
  {
   payload.WithObject("ruleConfiguration", m_ruleConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
