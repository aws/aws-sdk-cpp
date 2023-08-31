/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/Campaign.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

Campaign::Campaign() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_connectInstanceIdHasBeenSet(false),
    m_dialerConfigHasBeenSet(false),
    m_outboundCallConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Campaign::Campaign(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_connectInstanceIdHasBeenSet(false),
    m_dialerConfigHasBeenSet(false),
    m_outboundCallConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

  if(jsonValue.ValueExists("dialerConfig"))
  {
    m_dialerConfig = jsonValue.GetObject("dialerConfig");

    m_dialerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outboundCallConfig"))
  {
    m_outboundCallConfig = jsonValue.GetObject("outboundCallConfig");

    m_outboundCallConfigHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
