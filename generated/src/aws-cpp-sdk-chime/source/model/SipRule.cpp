/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/SipRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

SipRule::SipRule() : 
    m_sipRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_triggerType(SipRuleTriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerValueHasBeenSet(false),
    m_targetApplicationsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

SipRule::SipRule(JsonView jsonValue) : 
    m_sipRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_triggerType(SipRuleTriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerValueHasBeenSet(false),
    m_targetApplicationsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

SipRule& SipRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SipRuleId"))
  {
    m_sipRuleId = jsonValue.GetString("SipRuleId");

    m_sipRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerType"))
  {
    m_triggerType = SipRuleTriggerTypeMapper::GetSipRuleTriggerTypeForName(jsonValue.GetString("TriggerType"));

    m_triggerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerValue"))
  {
    m_triggerValue = jsonValue.GetString("TriggerValue");

    m_triggerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetApplications"))
  {
    Aws::Utils::Array<JsonView> targetApplicationsJsonList = jsonValue.GetArray("TargetApplications");
    for(unsigned targetApplicationsIndex = 0; targetApplicationsIndex < targetApplicationsJsonList.GetLength(); ++targetApplicationsIndex)
    {
      m_targetApplications.push_back(targetApplicationsJsonList[targetApplicationsIndex].AsObject());
    }
    m_targetApplicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue SipRule::Jsonize() const
{
  JsonValue payload;

  if(m_sipRuleIdHasBeenSet)
  {
   payload.WithString("SipRuleId", m_sipRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("TriggerType", SipRuleTriggerTypeMapper::GetNameForSipRuleTriggerType(m_triggerType));
  }

  if(m_triggerValueHasBeenSet)
  {
   payload.WithString("TriggerValue", m_triggerValue);

  }

  if(m_targetApplicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetApplicationsJsonList(m_targetApplications.size());
   for(unsigned targetApplicationsIndex = 0; targetApplicationsIndex < targetApplicationsJsonList.GetLength(); ++targetApplicationsIndex)
   {
     targetApplicationsJsonList[targetApplicationsIndex].AsObject(m_targetApplications[targetApplicationsIndex].Jsonize());
   }
   payload.WithArray("TargetApplications", std::move(targetApplicationsJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
