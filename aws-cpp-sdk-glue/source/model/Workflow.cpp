/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_graphHasBeenSet(false)
{
}

Workflow::Workflow(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRunPropertiesHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_lastRunHasBeenSet(false),
    m_graphHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
