/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentSummary.h>
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

ExperimentSummary::ExperimentSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_experimentTemplateIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_experimentOptionsHasBeenSet(false)
{
}

ExperimentSummary::ExperimentSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_experimentTemplateIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_experimentOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentSummary& ExperimentSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("experimentTemplateId"))
  {
    m_experimentTemplateId = jsonValue.GetString("experimentTemplateId");

    m_experimentTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("experimentOptions"))
  {
    m_experimentOptions = jsonValue.GetObject("experimentOptions");

    m_experimentOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentSummary::Jsonize() const
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

  if(m_experimentTemplateIdHasBeenSet)
  {
   payload.WithString("experimentTemplateId", m_experimentTemplateId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
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

  if(m_experimentOptionsHasBeenSet)
  {
   payload.WithObject("experimentOptions", m_experimentOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
