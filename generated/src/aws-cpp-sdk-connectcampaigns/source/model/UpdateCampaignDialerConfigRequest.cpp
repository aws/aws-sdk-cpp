/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/UpdateCampaignDialerConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCampaignDialerConfigRequest::UpdateCampaignDialerConfigRequest() : 
    m_idHasBeenSet(false),
    m_dialerConfigHasBeenSet(false)
{
}

Aws::String UpdateCampaignDialerConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dialerConfigHasBeenSet)
  {
   payload.WithObject("dialerConfig", m_dialerConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




