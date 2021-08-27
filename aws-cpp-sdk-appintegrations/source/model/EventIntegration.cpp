/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/EventIntegration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

EventIntegration::EventIntegration() : 
    m_eventIntegrationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventFilterHasBeenSet(false),
    m_eventBridgeBusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EventIntegration::EventIntegration(JsonView jsonValue) : 
    m_eventIntegrationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventFilterHasBeenSet(false),
    m_eventBridgeBusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EventIntegration& EventIntegration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventIntegrationArn"))
  {
    m_eventIntegrationArn = jsonValue.GetString("EventIntegrationArn");

    m_eventIntegrationArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("EventFilter"))
  {
    m_eventFilter = jsonValue.GetObject("EventFilter");

    m_eventFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridgeBus"))
  {
    m_eventBridgeBus = jsonValue.GetString("EventBridgeBus");

    m_eventBridgeBusHasBeenSet = true;
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

JsonValue EventIntegration::Jsonize() const
{
  JsonValue payload;

  if(m_eventIntegrationArnHasBeenSet)
  {
   payload.WithString("EventIntegrationArn", m_eventIntegrationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eventFilterHasBeenSet)
  {
   payload.WithObject("EventFilter", m_eventFilter.Jsonize());

  }

  if(m_eventBridgeBusHasBeenSet)
  {
   payload.WithString("EventBridgeBus", m_eventBridgeBus);

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
} // namespace AppIntegrationsService
} // namespace Aws
