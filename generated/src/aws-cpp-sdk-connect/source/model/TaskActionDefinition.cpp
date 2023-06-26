/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskActionDefinition.h>
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

TaskActionDefinition::TaskActionDefinition() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_referencesHasBeenSet(false)
{
}

TaskActionDefinition::TaskActionDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_referencesHasBeenSet(false)
{
  *this = jsonValue;
}

TaskActionDefinition& TaskActionDefinition::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("ContactFlowId"))
  {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");

    m_contactFlowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("References"))
  {
    Aws::Map<Aws::String, JsonView> referencesJsonMap = jsonValue.GetObject("References").GetAllObjects();
    for(auto& referencesItem : referencesJsonMap)
    {
      m_references[referencesItem.first] = referencesItem.second.AsObject();
    }
    m_referencesHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  if(m_referencesHasBeenSet)
  {
   JsonValue referencesJsonMap;
   for(auto& referencesItem : m_references)
   {
     referencesJsonMap.WithObject(referencesItem.first, referencesItem.second.Jsonize());
   }
   payload.WithObject("References", std::move(referencesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
