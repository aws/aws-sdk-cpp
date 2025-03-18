/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/Stage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

Stage::Stage(JsonView jsonValue)
{
  *this = jsonValue;
}

Stage& Stage::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("activeSessionId"))
  {
    m_activeSessionId = jsonValue.GetString("activeSessionId");
    m_activeSessionIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("autoParticipantRecordingConfiguration"))
  {
    m_autoParticipantRecordingConfiguration = jsonValue.GetObject("autoParticipantRecordingConfiguration");
    m_autoParticipantRecordingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpoints"))
  {
    m_endpoints = jsonValue.GetObject("endpoints");
    m_endpointsHasBeenSet = true;
  }
  return *this;
}

JsonValue Stage::Jsonize() const
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

  if(m_activeSessionIdHasBeenSet)
  {
   payload.WithString("activeSessionId", m_activeSessionId);

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

  if(m_autoParticipantRecordingConfigurationHasBeenSet)
  {
   payload.WithObject("autoParticipantRecordingConfiguration", m_autoParticipantRecordingConfiguration.Jsonize());

  }

  if(m_endpointsHasBeenSet)
  {
   payload.WithObject("endpoints", m_endpoints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
