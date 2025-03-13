/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CreateCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

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

  if(m_channelSubtypeConfigHasBeenSet)
  {
   payload.WithObject("channelSubtypeConfig", m_channelSubtypeConfig.Jsonize());

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_connectCampaignFlowArnHasBeenSet)
  {
   payload.WithString("connectCampaignFlowArn", m_connectCampaignFlowArn);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_communicationTimeConfigHasBeenSet)
  {
   payload.WithObject("communicationTimeConfig", m_communicationTimeConfig.Jsonize());

  }

  if(m_communicationLimitsOverrideHasBeenSet)
  {
   payload.WithObject("communicationLimitsOverride", m_communicationLimitsOverride.Jsonize());

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




