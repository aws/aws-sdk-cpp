/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Workflow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Workflow::Workflow() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRunPropertiesHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_lastRunHasBeenSet(false),
    m_graphHasBeenSet(false),
    m_maxConcurrentRuns(0),
    m_maxConcurrentRunsHasBeenSet(false)
{
}

Workflow::Workflow(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRunPropertiesHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_lastRunHasBeenSet(false),
    m_graphHasBeenSet(false),
    m_maxConcurrentRuns(0),
    m_maxConcurrentRunsHasBeenSet(false)
{
  *this = jsonValue;
}

Workflow& Workflow::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DefaultRunProperties"))
  {
    Aws::Map<Aws::String, JsonView> defaultRunPropertiesJsonMap = jsonValue.GetObject("DefaultRunProperties").GetAllObjects();
    for(auto& defaultRunPropertiesItem : defaultRunPropertiesJsonMap)
    {
      m_defaultRunProperties[defaultRunPropertiesItem.first] = defaultRunPropertiesItem.second.AsString();
    }
    m_defaultRunPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");

    m_createdOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

    m_lastModifiedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRun"))
  {
    m_lastRun = jsonValue.GetObject("LastRun");

    m_lastRunHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Graph"))
  {
    m_graph = jsonValue.GetObject("Graph");

    m_graphHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrentRuns"))
  {
    m_maxConcurrentRuns = jsonValue.GetInteger("MaxConcurrentRuns");

    m_maxConcurrentRunsHasBeenSet = true;
  }

  return *this;
}

JsonValue Workflow::Jsonize() const
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

  if(m_defaultRunPropertiesHasBeenSet)
  {
   JsonValue defaultRunPropertiesJsonMap;
   for(auto& defaultRunPropertiesItem : m_defaultRunProperties)
   {
     defaultRunPropertiesJsonMap.WithString(defaultRunPropertiesItem.first, defaultRunPropertiesItem.second);
   }
   payload.WithObject("DefaultRunProperties", std::move(defaultRunPropertiesJsonMap));

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_lastRunHasBeenSet)
  {
   payload.WithObject("LastRun", m_lastRun.Jsonize());

  }

  if(m_graphHasBeenSet)
  {
   payload.WithObject("Graph", m_graph.Jsonize());

  }

  if(m_maxConcurrentRunsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentRuns", m_maxConcurrentRuns);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
