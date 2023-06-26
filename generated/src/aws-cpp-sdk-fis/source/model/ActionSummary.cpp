/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ActionSummary::ActionSummary() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ActionSummary::ActionSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionSummary& ActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    Aws::Map<Aws::String, JsonView> targetsJsonMap = jsonValue.GetObject("targets").GetAllObjects();
    for(auto& targetsItem : targetsJsonMap)
    {
      m_targets[targetsItem.first] = targetsItem.second.AsObject();
    }
    m_targetsHasBeenSet = true;
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

JsonValue ActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetsHasBeenSet)
  {
   JsonValue targetsJsonMap;
   for(auto& targetsItem : m_targets)
   {
     targetsJsonMap.WithObject(targetsItem.first, targetsItem.second.Jsonize());
   }
   payload.WithObject("targets", std::move(targetsJsonMap));

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
} // namespace FIS
} // namespace Aws
