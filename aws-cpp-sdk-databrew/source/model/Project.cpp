/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Project.h>
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

Project::Project() : 
    m_accountIdHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recipeNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_sampleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_openedByHasBeenSet(false),
    m_openDateHasBeenSet(false)
{
}

Project::Project(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recipeNameHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_sampleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_openedByHasBeenSet(false),
    m_openDateHasBeenSet(false)
{
  *this = jsonValue;
}

Project& Project::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecipeName"))
  {
    m_recipeName = jsonValue.GetString("RecipeName");

    m_recipeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sample"))
  {
    m_sample = jsonValue.GetObject("Sample");

    m_sampleHasBeenSet = true;
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

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenedBy"))
  {
    m_openedBy = jsonValue.GetString("OpenedBy");

    m_openedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenDate"))
  {
    m_openDate = jsonValue.GetDouble("OpenDate");

    m_openDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Project::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_recipeNameHasBeenSet)
  {
   payload.WithString("RecipeName", m_recipeName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_sampleHasBeenSet)
  {
   payload.WithObject("Sample", m_sample.Jsonize());

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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_openedByHasBeenSet)
  {
   payload.WithString("OpenedBy", m_openedBy);

  }

  if(m_openDateHasBeenSet)
  {
   payload.WithDouble("OpenDate", m_openDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
