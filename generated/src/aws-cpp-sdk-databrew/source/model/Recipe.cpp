/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Recipe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Recipe::Recipe() : 
    m_createdByHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_publishedByHasBeenSet(false),
    m_publishedDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
}

Recipe::Recipe(JsonView jsonValue) : 
    m_createdByHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_publishedByHasBeenSet(false),
    m_publishedDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Recipe& Recipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishedBy"))
  {
    m_publishedBy = jsonValue.GetString("PublishedBy");

    m_publishedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishedDate"))
  {
    m_publishedDate = jsonValue.GetDouble("PublishedDate");

    m_publishedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
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

  if(jsonValue.ValueExists("RecipeVersion"))
  {
    m_recipeVersion = jsonValue.GetString("RecipeVersion");

    m_recipeVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Recipe::Jsonize() const
{
  JsonValue payload;

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_publishedByHasBeenSet)
  {
   payload.WithString("PublishedBy", m_publishedBy);

  }

  if(m_publishedDateHasBeenSet)
  {
   payload.WithDouble("PublishedDate", m_publishedDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

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

  if(m_recipeVersionHasBeenSet)
  {
   payload.WithString("RecipeVersion", m_recipeVersion);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
