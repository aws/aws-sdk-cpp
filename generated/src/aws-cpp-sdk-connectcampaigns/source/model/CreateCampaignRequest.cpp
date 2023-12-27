/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/CreateCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCampaignRequest::CreateCampaignRequest() : 
    m_nameHasBeenSet(false),
    m_connectInstanceIdHasBeenSet(false),
    m_dialerConfigHasBeenSet(false),
    m_outboundCallConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCampaignRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_connectInstanceIdHasBeenSet)
  {
   payload.WithString("connectInstanceId", m_connectInstanceId);

  }

  if(m_dialerConfigHasBeenSet)
  {
   payload.WithObject("dialerConfig", m_dialerConfig.Jsonize());

  }

  if(m_outboundCallConfigHasBeenSet)
  {
   payload.WithObject("outboundCallConfig", m_outboundCallConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




