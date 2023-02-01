/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CreateSipRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSipRuleRequest::CreateSipRuleRequest() : 
    m_nameHasBeenSet(false),
    m_triggerType(SipRuleTriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerValueHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_targetApplicationsHasBeenSet(false)
{
}

Aws::String CreateSipRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("TriggerType", SipRuleTriggerTypeMapper::GetNameForSipRuleTriggerType(m_triggerType));
  }

  if(m_triggerValueHasBeenSet)
  {
   payload.WithString("TriggerValue", m_triggerValue);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

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

  return payload.View().WriteReadable();
}




