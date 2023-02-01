/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdateSipRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSipRuleRequest::UpdateSipRuleRequest() : 
    m_sipRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_targetApplicationsHasBeenSet(false)
{
}

Aws::String UpdateSipRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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




