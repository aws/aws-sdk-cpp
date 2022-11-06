/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/RuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

RuleResult::RuleResult() : 
    m_lastCheckedTimestampHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_readiness(Readiness::NOT_SET),
    m_readinessHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

RuleResult::RuleResult(JsonView jsonValue) : 
    m_lastCheckedTimestampHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_readiness(Readiness::NOT_SET),
    m_readinessHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
  *this = jsonValue;
}

RuleResult& RuleResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastCheckedTimestamp"))
  {
    m_lastCheckedTimestamp = jsonValue.GetString("lastCheckedTimestamp");

    m_lastCheckedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messages"))
  {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readiness"))
  {
    m_readiness = ReadinessMapper::GetReadinessForName(jsonValue.GetString("readiness"));

    m_readinessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleResult::Jsonize() const
{
  JsonValue payload;

  if(m_lastCheckedTimestampHasBeenSet)
  {
   payload.WithString("lastCheckedTimestamp", m_lastCheckedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  if(m_readinessHasBeenSet)
  {
   payload.WithString("readiness", ReadinessMapper::GetNameForReadiness(m_readiness));
  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
