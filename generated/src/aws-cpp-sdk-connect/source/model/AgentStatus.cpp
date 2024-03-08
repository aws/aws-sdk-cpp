/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AgentStatus::AgentStatus() : 
    m_agentStatusARNHasBeenSet(false),
    m_agentStatusIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(AgentStatusType::NOT_SET),
    m_typeHasBeenSet(false),
    m_displayOrder(0),
    m_displayOrderHasBeenSet(false),
    m_state(AgentStatusState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
}

AgentStatus::AgentStatus(JsonView jsonValue) : 
    m_agentStatusARNHasBeenSet(false),
    m_agentStatusIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(AgentStatusType::NOT_SET),
    m_typeHasBeenSet(false),
    m_displayOrder(0),
    m_displayOrderHasBeenSet(false),
    m_state(AgentStatusState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
  *this = jsonValue;
}

AgentStatus& AgentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentStatusARN"))
  {
    m_agentStatusARN = jsonValue.GetString("AgentStatusARN");

    m_agentStatusARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentStatusId"))
  {
    m_agentStatusId = jsonValue.GetString("AgentStatusId");

    m_agentStatusIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = AgentStatusTypeMapper::GetAgentStatusTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayOrder"))
  {
    m_displayOrder = jsonValue.GetInteger("DisplayOrder");

    m_displayOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = AgentStatusStateMapper::GetAgentStatusStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");

    m_lastModifiedRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_agentStatusARNHasBeenSet)
  {
   payload.WithString("AgentStatusARN", m_agentStatusARN);

  }

  if(m_agentStatusIdHasBeenSet)
  {
   payload.WithString("AgentStatusId", m_agentStatusId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AgentStatusTypeMapper::GetNameForAgentStatusType(m_type));
  }

  if(m_displayOrderHasBeenSet)
  {
   payload.WithInteger("DisplayOrder", m_displayOrder);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AgentStatusStateMapper::GetNameForAgentStatusState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
