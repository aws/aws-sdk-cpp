/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

Channel::Channel() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_latencyMode(ChannelLatencyMode::NOT_SET),
    m_latencyModeHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_ingestEndpointHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_authorized(false),
    m_authorizedHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_latencyMode(ChannelLatencyMode::NOT_SET),
    m_latencyModeHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_ingestEndpointHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_authorized(false),
    m_authorizedHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("latencyMode"))
  {
    m_latencyMode = ChannelLatencyModeMapper::GetChannelLatencyModeForName(jsonValue.GetString("latencyMode"));

    m_latencyModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestEndpoint"))
  {
    m_ingestEndpoint = jsonValue.GetString("ingestEndpoint");

    m_ingestEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("playbackUrl"))
  {
    m_playbackUrl = jsonValue.GetString("playbackUrl");

    m_playbackUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorized"))
  {
    m_authorized = jsonValue.GetBool("authorized");

    m_authorizedHasBeenSet = true;
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

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_latencyModeHasBeenSet)
  {
   payload.WithString("latencyMode", ChannelLatencyModeMapper::GetNameForChannelLatencyMode(m_latencyMode));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  if(m_ingestEndpointHasBeenSet)
  {
   payload.WithString("ingestEndpoint", m_ingestEndpoint);

  }

  if(m_playbackUrlHasBeenSet)
  {
   payload.WithString("playbackUrl", m_playbackUrl);

  }

  if(m_authorizedHasBeenSet)
  {
   payload.WithBool("authorized", m_authorized);

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
} // namespace IVS
} // namespace Aws
