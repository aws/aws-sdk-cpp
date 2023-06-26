/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AlarmRule::AlarmRule() : 
    m_simpleRuleHasBeenSet(false)
{
}

AlarmRule::AlarmRule(JsonView jsonValue) : 
    m_simpleRuleHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmRule& AlarmRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simpleRule"))
  {
    m_simpleRule = jsonValue.GetObject("simpleRule");

    m_simpleRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmRule::Jsonize() const
{
  JsonValue payload;

  if(m_simpleRuleHasBeenSet)
  {
   payload.WithObject("simpleRule", m_simpleRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
