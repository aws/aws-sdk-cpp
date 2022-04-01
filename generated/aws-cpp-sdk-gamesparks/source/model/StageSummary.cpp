/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/StageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

StageSummary::StageSummary() : 
    m_descriptionHasBeenSet(false),
    m_gameKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(StageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StageSummary::StageSummary(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_gameKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(StageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

StageSummary& StageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameKey"))
  {
    m_gameKey = jsonValue.GetString("GameKey");

    m_gameKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StageStateMapper::GetStageStateForName(jsonValue.GetString("State"));

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

  return *this;
}

JsonValue StageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_gameKeyHasBeenSet)
  {
   payload.WithString("GameKey", m_gameKey);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StageStateMapper::GetNameForStageState(m_state));
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

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
