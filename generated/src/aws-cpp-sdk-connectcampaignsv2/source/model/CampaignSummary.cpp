/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CampaignSummary.h>
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

CampaignSummary::CampaignSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CampaignSummary& CampaignSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("channelSubtypes"))
  {
    Aws::Utils::Array<JsonView> channelSubtypesJsonList = jsonValue.GetArray("channelSubtypes");
    for(unsigned channelSubtypesIndex = 0; channelSubtypesIndex < channelSubtypesJsonList.GetLength(); ++channelSubtypesIndex)
    {
      m_channelSubtypes.push_back(ChannelSubtypeMapper::GetChannelSubtypeForName(channelSubtypesJsonList[channelSubtypesIndex].AsString()));
    }
    m_channelSubtypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectCampaignFlowArn"))
  {
    m_connectCampaignFlowArn = jsonValue.GetString("connectCampaignFlowArn");
    m_connectCampaignFlowArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CampaignSummary::Jsonize() const
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

  if(m_channelSubtypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelSubtypesJsonList(m_channelSubtypes.size());
   for(unsigned channelSubtypesIndex = 0; channelSubtypesIndex < channelSubtypesJsonList.GetLength(); ++channelSubtypesIndex)
   {
     channelSubtypesJsonList[channelSubtypesIndex].AsString(ChannelSubtypeMapper::GetNameForChannelSubtype(m_channelSubtypes[channelSubtypesIndex]));
   }
   payload.WithArray("channelSubtypes", std::move(channelSubtypesJsonList));

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_connectCampaignFlowArnHasBeenSet)
  {
   payload.WithString("connectCampaignFlowArn", m_connectCampaignFlowArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
