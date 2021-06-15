/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/UpdateExperimentTemplateTargetInput.h>
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

UpdateExperimentTemplateTargetInput::UpdateExperimentTemplateTargetInput() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_selectionModeHasBeenSet(false)
{
}

UpdateExperimentTemplateTargetInput::UpdateExperimentTemplateTargetInput(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceArnsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_selectionModeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateExperimentTemplateTargetInput& UpdateExperimentTemplateTargetInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArns"))
  {
    Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("resourceArns");
    for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
    {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceTags"))
  {
    Aws::Map<Aws::String, JsonView> resourceTagsJsonMap = jsonValue.GetObject("resourceTags").GetAllObjects();
    for(auto& resourceTagsItem : resourceTagsJsonMap)
    {
      m_resourceTags[resourceTagsItem.first] = resourceTagsItem.second.AsString();
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filters"))
  {
    Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectionMode"))
  {
    m_selectionMode = jsonValue.GetString("selectionMode");

    m_selectionModeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateExperimentTemplateTargetInput::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_resourceArnsHasBeenSet)
  {
   Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("resourceArns", std::move(resourceArnsJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   JsonValue resourceTagsJsonMap;
   for(auto& resourceTagsItem : m_resourceTags)
   {
     resourceTagsJsonMap.WithString(resourceTagsItem.first, resourceTagsItem.second);
   }
   payload.WithObject("resourceTags", std::move(resourceTagsJsonMap));

  }

  if(m_filtersHasBeenSet)
  {
   Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_selectionModeHasBeenSet)
  {
   payload.WithString("selectionMode", m_selectionMode);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
