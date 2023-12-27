/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/UpdateCampaignOutboundCallConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCampaignOutboundCallConfigRequest::UpdateCampaignOutboundCallConfigRequest() : 
    m_idHasBeenSet(false),
    m_connectContactFlowIdHasBeenSet(false),
    m_connectSourcePhoneNumberHasBeenSet(false),
    m_answerMachineDetectionConfigHasBeenSet(false)
{
}

Aws::String UpdateCampaignOutboundCallConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectContactFlowIdHasBeenSet)
  {
   payload.WithString("connectContactFlowId", m_connectContactFlowId);

  }

  if(m_connectSourcePhoneNumberHasBeenSet)
  {
   payload.WithString("connectSourcePhoneNumber", m_connectSourcePhoneNumber);

  }

  if(m_answerMachineDetectionConfigHasBeenSet)
  {
   payload.WithObject("answerMachineDetectionConfig", m_answerMachineDetectionConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




