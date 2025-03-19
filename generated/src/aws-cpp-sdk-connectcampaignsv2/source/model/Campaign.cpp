/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/Campaign.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

Campaign::Campaign(JsonView jsonValue)
{
  *this = jsonValue;
}

Campaign& Campaign::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectInstanceId"))
  {
    m_connectInstanceId = jsonValue.GetString("connectInstanceId");
    m_connectInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelSubtypeConfig"))
  {
    m_channelSubtypeConfig = jsonValue.GetObject("channelSubtypeConfig");
    m_channelSubtypeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectCampaignFlowArn"))
  {
    m_connectCampaignFlowArn = jsonValue.GetString("connectCampaignFlowArn");
    m_connectCampaignFlowArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("communicationTimeConfig"))
  {
    m_communicationTimeConfig = jsonValue.GetObject("communicationTimeConfig");
    m_communicationTimeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("communicationLimitsOverride"))
  {
    m_communicationLimitsOverride = jsonValue.GetObject("communicationLimitsOverride");
    m_communicationLimitsOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Campaign::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

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

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
